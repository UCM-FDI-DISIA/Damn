#include <unordered_set>
#include <random>

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

void damn::GameManager::Update(float dt)
{
	_timer += dt;
	int left = (int)_timer;
	if (_timerText != left) {
		if(_uiManager)
			_uiManager->SetTimeLeft(left);
		_timerText = left;
	}

	if (_roundState == ENEMIES && _enemiesLeft <= 0) {
		_roundState = CALM;
		_numRound++;
		_timeNextRound = _timer + TIME_CALM;
		if (_numRound == 2) {
			ChangeScene("DamnGame_level2");
		}
		else if (_numRound == 3) {
			ChangeScene("DamnGame_level3");
		}
		if (_numRound == 5 && _weaponManager)
			_weaponManager->UnlockShotGun();
		else if (_numRound == 10 && _weaponManager)
			_weaponManager->UnlockRifle();
	}

	if (_roundState == CALM && _timer >= _timeNextRound) {
		_roundState = ENEMIES;
		GenerateEnemies();
	}

	if (_timer <= 0) {
		// ALGO
	}
}

void damn::GameManager::Init(eden_script::ComponentArguments* args)
{
	_maxTime = args->GetValueToFloat("MaxTime");
	_timer = 0;
	_timeNextRound = _timer + TIME_CALM;
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
	AddScore(5);
	if (rand() % 101 <= 60) {
		eden::SceneManager::getInstance()->InstantiateBlueprint("AmmoBox", e->GetComponent<eden_ec::CTransform>()->GetPosition());
	}
	if (_player && _player->HasComponent("PLAYER_HEALTH") && _uiManager) {
		damn::PlayerHealth* health = _player->GetComponent<PlayerHealth>();
		health->GainHealth(5);
		_uiManager->UpdateHealthBar(health->GetCurrentHealth(), health->GetMaxHealth());
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
}

void damn::GameManager::setUIManager(UIManager* ui)
{
	_uiManager = ui;
	_uiManager->SetScore(_score);
	_uiManager->SetRound(_numRound);
	if(_savedPlayerCurrentHealth > 0) 
		_uiManager->UpdateHealthBar(_savedPlayerCurrentHealth, _savedPlayerMaxHealth);
}

void damn::GameManager::ChangeScene(std::string sceneName) {
	_savedPlayerCurrentHealth = _player->GetComponent<PlayerHealth>()->GetCurrentHealth();
	_savedPlayerMaxHealth = _player->GetComponent<PlayerHealth>()->GetMaxHealth();
	_player = nullptr; _soundManager = nullptr; _uiManager = nullptr;
	_spawnPoints.clear();
	eden::SceneManager::getInstance()->ChangeScene(sceneName);
}

void damn::GameManager::GenerateEnemies()
{
	std::srand(time(NULL));

	std::unordered_set<int> numbers = std::unordered_set<int>();
	int i = 0;
	int index = 0;
	while (i < NUM_ENEMIES && i < _spawnPoints.size()) {
		index = std::rand() % _spawnPoints.size();
		if (!numbers.contains(index)) {
			eden::SceneManager::getInstance()->InstantiateBlueprint("Enemy", _spawnPoints[index]->GetPosition());
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
	_enemiesLeft = 0;
	_score = 0;
	_roundState = CALM;
}

void damn::GameManager::Start()
{
	_numRound = 1;
	if (_ent->HasComponent("AUDIO_EMITTER")) {
		_ent->GetComponent<eden_ec::CAudioEmitter>()->ChangeClip("gameTheme.wav");
		_ent->GetComponent<eden_ec::CAudioEmitter>()->Play();
		_ent->GetComponent<eden_ec::CAudioEmitter>()->SetVolume(0.6);
		_ent->GetComponent<eden_ec::CAudioEmitter>()->SetLoop(true);
	}
	eden::SceneManager::getInstance()->AddEntityToDontDestroyOnLoad(_ent);
}

void damn::GameManager::setupReferences() {
	_player = eden::SceneManager::getInstance()->FindEntity("Player_0");
	if (_player) {
		_weaponManager = _player->GetComponent<WeaponManager>();
	}
	else {
		eden_error::ErrorHandler::Instance()->Exception("DamnError", "Player not found");
	}
	eden_ec::Entity* ui = eden::SceneManager::getInstance()->FindEntity("UI_MANAGER");
	if (ui) {
		_uiManager = ui->GetComponent<UIManager>();
		if (_uiManager) {
			_uiManager->SetScore(_score);
			_uiManager->SetTimeLeft(_maxTime);
		}
	}
	else {
		eden_error::ErrorHandler::Instance()->Exception("DamnError", "UI manager not found");
	}
}
