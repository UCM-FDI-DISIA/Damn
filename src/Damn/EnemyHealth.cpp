#include "EnemyHealth.h"
#include "SceneManager.h"
#include "Entity.h"
#include "GameManager.h"
#include <iostream>

damn::GameManager* damn::EnemyHealth::_gameManager = nullptr;


damn::EnemyHealth::~EnemyHealth()
{
	
}

void damn::EnemyHealth::Start()
{
	if(_gameManager == nullptr)
		_gameManager = eden::SceneManager::getInstance()->FindEntity("MANAGERS")->GetComponent<GameManager>();
}

void damn::EnemyHealth::LoseHealth(int health)
{
	_currentHealth -= health;
	if (_currentHealth <= 0) {
		_gameManager->DieEnemy();
		_ent->SetAlive(false);
	}
}
