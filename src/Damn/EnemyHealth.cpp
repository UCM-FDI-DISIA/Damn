#include "EnemyHealth.h"
#include "SceneManager.h"
#include "Entity.h"
#include "GameManager.h"
#include <iostream>

damn::EnemyHealth::~EnemyHealth()
{
}

void damn::EnemyHealth::Start()
{
	Health::Start();
	if(_gameManager == nullptr)
		_gameManager = eden::SceneManager::getInstance()->FindEntity("GAME_MANAGER")->GetComponent<GameManager>();
}

void damn::EnemyHealth::LoseHealth(int health)
{
	Health::LoseHealth(health);
	if (_currentHealth <= 0 && _gameManager) {
		_gameManager->DieEnemy(_ent);
	}
}
