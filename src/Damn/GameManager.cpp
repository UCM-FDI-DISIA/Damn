#include "GameManager.h"
#include "UIManager.h"
#include "SceneManager.h"
#include "Entity.h"

void damn::GameManager::Update(float dt)
{
	_timer -= dt;
	int left = (int)_timer;
	if (_timerText != left) {
		_uiManager->SetTimeLeft(left);
		_timerText = left;
	}

	if (_timer <= 0) {
		// ALGO
	}
}

void damn::GameManager::Init(eden_script::ComponentArguments* args)
{
	_maxTime = args->GetValueToFloat("MaxTime");
	_timer = _maxTime;
	_timerText = _maxTime;
}

void damn::GameManager::RegisterEnemy()
{
	_enemiesLeft++;
	_uiManager->SetEnemiesLeft(_enemiesLeft);
}

void damn::GameManager::DieEnemy()
{
	_enemiesLeft--;
	_uiManager->SetEnemiesLeft(_enemiesLeft);
}

void damn::GameManager::AddScore(int score)
{
	_score += score;
	_uiManager->SetScore(_score);
}

void damn::GameManager::Awake()
{
	_enemiesLeft = 0;
	_score = 0;
	_uiManager = _ent->GetComponent<UIManager>();
	_uiManager->SetScore(_score);
	_uiManager->SetTimeLeft(_maxTime);
}

void damn::GameManager::Start()
{
	
}
