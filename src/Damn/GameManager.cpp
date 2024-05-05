#include <unordered_set>
#include <random>

#include "GameManager.h"
#include "UIManager.h"
#include "SceneManager.h"
#include "PlayerHealth.h"
#include "CAudioEmitter.h"
#include "Entity.h"
#include <Transform.h>

void damn::GameManager::Update(float dt)
{
	_timer += dt;
	int left = (int)_timer;
	if (_timerText != left) {
		_uiManager->SetTimeLeft(left);
		_timerText = left;
	}

	if (_roundState == ENEMIES && _enemiesLeft <= 0) {
		_roundState = CALM;
		_numRound++;
		_timeNextRound = _timer + TIME_CALM;
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
	_uiManager->SetEnemiesLeft(_enemiesLeft);
}

void damn::GameManager::DieEnemy(eden_ec::Entity* e)
{
	if (!e || !e->IsAlive()) return;
	_enemiesLeft--;
	_uiManager->SetEnemiesLeft(_enemiesLeft);
	AddScore(5);
	if (rand() % 101 <= 60) {
		eden::SceneManager::getInstance()->InstantiateBlueprint("AmmoBox", e->GetComponent<eden_ec::CTransform>()->GetPosition());
	}
	if (_player && _player->HasComponent("PLAYER_HEALTH")) {
		damn::PlayerHealth* health = _player->GetComponent<PlayerHealth>();
		health->GainHealth(5);
		_uiManager->UpdateHealthBar(health->GetCurrentHealth(), health->GetMaxHealth());
	}
	e->SetAlive(false);
}

void damn::GameManager::AddScore(int score)
{
	_score += score;
	_uiManager->SetScore(_score);
}

void damn::GameManager::AddWaypoint(eden_ec::CTransform* transform)
{
	_spawnPoints.push_back(transform);
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
	_uiManager->SetRound(_numRound);
}

void damn::GameManager::Awake()
{
	_enemiesLeft = 0;
	_score = 0;
	_uiManager = _ent->GetComponent<UIManager>();
	_uiManager->SetScore(_score);
	_uiManager->SetTimeLeft(_maxTime);
	_roundState = CALM;
}

void damn::GameManager::Start()
{
	_numRound = 1;
	_player = eden::SceneManager::getInstance()->FindEntity("Player_0"); 
	if (_ent->HasComponent("AUDIO_EMITTER")) {
		_ent->GetComponent<eden_ec::CAudioEmitter>()->ChangeClip("gameTheme.wav");
		_ent->GetComponent<eden_ec::CAudioEmitter>()->Play();
		_ent->GetComponent<eden_ec::CAudioEmitter>()->SetVolume(0.6);
		_ent->GetComponent<eden_ec::CAudioEmitter>()->SetLoop(true);
	}
}
