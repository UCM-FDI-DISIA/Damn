#include <unordered_set>
#include <random>

#include "InputController.h"
#include "GameManager.h"
#include "UIManager.h"
#include "SceneManager.h"
#include "PlayerHealth.h"
#include "CAudioEmitter.h"
#include "WeaponManager.h"
#include "SceneManager.h"
#include "Entity.h"
#include <Transform.h>
#include <ErrorHandler.h>
#include "BulletPlayerDamage.h"

void damn::GameManager::ManageTimer(float dt)
{
	_timer += dt;
	int left = (int)_timer;
	if (_timerText != left) {
		if (_uiManager)
			_uiManager->SetTimeLeft(left);
		_timerText = (float)left;
	}
}

void damn::GameManager::Update(float dt)
{
	switch (_roundState)
	{
	case damn::GameManager::ENEMIES: 
		{
		ManageTimer(dt);
		if (_enemiesLeft <= 0) {
			_roundState = CALM;
			_numRound++;

			if (Win()) return;

			_timeNextRound = _timer + _timeCalm;
			if (_numRound == _lastRoundWeaponWasGiven + ROUNDS_FOR_NEXT_GUN) {
				UnlockGuns(true);
			}
			if (_numRound == _lastRoundMapChanged + ROUNDS_FOR_NEXT_MAP) {
				NextMap();
			}
		}
		}
		break;
	case damn::GameManager::CALM:
		{
		ManageTimer(dt);
		if (_timer >= _timeNextRound) {
			_roundState = ENEMIES;
			GenerateEnemies();
		}
		}
		break;
	case damn::GameManager::WIN_MENU:
	{
		if (_timer == 0) {
			EndGame("VictoryTheme.wav");
		}
		else _uiManager->StepWinMenu(_timer);
		_timer += dt;
	}
		break;
	case damn::GameManager::LOSE_MENU: 
	{
		if (_timer == 0) {
			EndGame("DeathMenuTheme.wav");
		}
		else _uiManager->StepLoseMenu(_timer);
		_timer += dt;
	}
		break;
	default:
		break;
	}
}

void damn::GameManager::EndGame(std::string endSong) {
	if (_ent->HasComponent("AUDIO_EMITTER")) {
		eden_ec::CAudioEmitter* emitter = _ent->GetComponent<eden_ec::CAudioEmitter>();
		emitter->ChangeClip(endSong);
		emitter->Play();
		emitter->SetVolume(0.6f);
		emitter->SetLoop(true);
	}
	if (_player->HasComponent("INPUT_CONTROLLER")) {
		_player->GetComponent<InputController>()->Clear();
		_player->RemoveComponent("INPUT_CONTROLLER");
	}
	if (endSong == "VictoryTheme.wav")_uiManager->SetupWinMenu(_score);
	else {
		_uiManager->SetupLoseMenu(_score);
		_player->GetComponent<eden_ec::CTransform>()->LocalRoll(-90);
	}

	std::vector<eden_ec::Entity*> ents = eden::SceneManager::getInstance()->GetEntitiesWithComponent(BulletPlayerDamage::GetID());
	for (auto it : ents) {
		it->SetAlive(false);
	}
}

void damn::GameManager::LoseGame() {
	_roundState = LOSE_MENU;
	_timer = 0;
}

void damn::GameManager::Init(eden_script::ComponentArguments* args)
{
	_maxTime = args->GetValueToFloat("MaxTime");
	_timer = 0;
	_timeNextRound = _timer + _timeCalm;
	_timerText = _maxTime;
}

void damn::GameManager::RegisterEnemy()
{
	_enemiesLeft++;
	if (_uiManager)
		_uiManager->SetEnemiesLeft(_enemiesLeft);
}

void damn::GameManager::DieEnemy(eden_ec::Entity* e)
{
	if (!e || !e->IsAlive()) return;
	_enemiesLeft--;
	if (_uiManager)
		_uiManager->SetEnemiesLeft(_enemiesLeft);
	AddScore(SCORE_PER_ENEMY);
	if (rand() % 101 <= _ammoBoxChance) {
		eden::SceneManager::getInstance()->InstantiateBlueprint("AmmoBox", e->GetComponent<eden_ec::CTransform>()->GetPosition());
	}
	if (_player && _player->HasComponent("PLAYER_HEALTH") && _uiManager) {
		damn::PlayerHealth* health = _player->GetComponent<PlayerHealth>();
		health->GainHealth(_healthGainPerEnemy);
		_uiManager->UpdateHealthBar((float)(health->GetCurrentHealth()), (float)(health->GetMaxHealth()));
	}
	e->SetAlive(false);
}

void damn::GameManager::AddScore(int score)
{
	_score += score;
	if(_uiManager)
		_uiManager->SetScore(_score);
}

void damn::GameManager::AddWaypoint(eden_ec::CTransform* transform)
{
	_spawnPoints.push_back(transform);
}

void damn::GameManager::setPlayer(eden_ec::Entity* p)
{
	_player = p;
	_weaponManager = _player->GetComponent<WeaponManager>();
	if (_savedPlayerCurrentHealth > 0)
		_player->GetComponent<PlayerHealth>()->SetCurrentHealth(_savedPlayerCurrentHealth);
	UnlockGuns(false);
	//_weaponManager->ChangeWeapon();
}

void damn::GameManager::setUIManager(UIManager* ui)
{
	_uiManager = ui;
	_uiManager->SetScore(_score);
	_uiManager->SetRound(_numRound);
	if(_savedPlayerCurrentHealth > 0) 
		_uiManager->UpdateHealthBar((float)(_savedPlayerCurrentHealth), (float)(_savedPlayerMaxHealth));
}

void damn::GameManager::Play()
{
	_roundState = CALM;
	if (_ent->HasComponent("AUDIO_EMITTER")) {
		_ent->GetComponent<eden_ec::CAudioEmitter>()->ChangeClip("gameTheme.wav");
		_ent->GetComponent<eden_ec::CAudioEmitter>()->Play();
		_ent->GetComponent<eden_ec::CAudioEmitter>()->SetVolume(0.6f);
		_ent->GetComponent<eden_ec::CAudioEmitter>()->SetLoop(true);
	}
}

void damn::GameManager::ChangeScene(std::string sceneName) {
	_savedPlayerCurrentHealth = _player->GetComponent<PlayerHealth>()->GetCurrentHealth();
	_savedPlayerMaxHealth = _player->GetComponent<PlayerHealth>()->GetMaxHealth();
	_player = nullptr; _soundManager = nullptr; _uiManager = nullptr;
	_spawnPoints.clear();
	eden::SceneManager::getInstance()->ChangeScene(sceneName);
}

void damn::GameManager::Pause(bool pause)
{
	if (pause) {
		_lastState = _roundState;
		_roundState = MENU;
	}
	else {
		_roundState = _lastState;
	}
}

void damn::GameManager::GenerateEnemies()
{
	IncreaseDifficulty();
	std::srand((unsigned int)(time(NULL)));
	std::unordered_set<int> numbers = std::unordered_set<int>();
	int i = 0;
	int index = 0;
	while (i < _numEnemies && i < _spawnPoints.size()) {
		index = std::rand() % _spawnPoints.size();
		if (!numbers.contains(index)) {
			if(_numRound <= (2*ROUND_FOR_WINNING)/3)
				eden::SceneManager::getInstance()->InstantiateBlueprint("Enemy", _spawnPoints[index]->GetPosition());
			else
				eden::SceneManager::getInstance()->InstantiateBlueprint("EnemyHarder", _spawnPoints[index]->GetPosition());
			RegisterEnemy();
			numbers.insert(index);
			++i;
		}
	}
	if(_uiManager)
		_uiManager->SetRound(_numRound);
}

void damn::GameManager::Awake()
{
	_extraLevelNames = std::vector<std::string>({ "DamnGame_level1","DamnGame_level2", "DamnGame_level3" });
}

void damn::GameManager::Start()
{
	Setup();
	eden::SceneManager::getInstance()->AddEntityToDontDestroyOnLoad(_ent);
}

void damn::GameManager::UnlockGuns(bool newWeapon)
{
	if (newWeapon && _numWeapons >= WeaponManager::WEAPON::RIFLE + 1) return;
	if (newWeapon) {
		_lastRoundWeaponWasGiven = _numRound;
		_numWeapons++;
	}
	if (_numWeapons > WeaponManager::WEAPON::SHOTGUN) {
		_weaponManager->UnlockShotGun();
	}
	if (_numWeapons > WeaponManager::WEAPON::RIFLE) {
		_weaponManager->UnlockRifle();
	}
}

void damn::GameManager::Setup()
{
	_winCondition = false;

	_enemiesLeft = 0;
	_score = 0;
	_roundState = MENU;

	_currentMap = 0;

	_numRound = 1;
	_lastRoundMapChanged = 1;
	_lastRoundWeaponWasGiven = 1;
	_numWeapons = 1;

	_timer = 0;
	_timerText = _maxTime;

	if (_ent->HasComponent("AUDIO_EMITTER")) {
		_ent->GetComponent<eden_ec::CAudioEmitter>()->ChangeClip("MenuTheme.wav");
		_ent->GetComponent<eden_ec::CAudioEmitter>()->Play();
		_ent->GetComponent<eden_ec::CAudioEmitter>()->SetVolume(0.6f);
		_ent->GetComponent<eden_ec::CAudioEmitter>()->SetLoop(true);
	}
}

bool damn::GameManager::Win()
{
	_winCondition = _numRound == ROUND_FOR_WINNING;
	if (_winCondition) {
		_timer = 0;
		_roundState = WIN_MENU;
	}

	return _winCondition;
}

void damn::GameManager::IncreaseDifficulty()
{
	_ammoBoxChance -= 5;
	if ((_numRound - _lastIncreasedEnemyNum) > 3) {
		_lastIncreasedEnemyNum = _numRound;
		_numEnemies++;
	}
	if (_numRound == _lastRoundMapChanged) {
		_healthGainPerEnemy /= 2;
		if(_timeCalm > 1)
			_timeCalm -= 1;
	}

}

void damn::GameManager::NextMap() {
	_lastRoundMapChanged = _numRound;
	if (++_currentMap >= _extraLevelNames.size()) {
		_currentMap = 0;
	}
	ChangeScene(_extraLevelNames[_currentMap]);
}