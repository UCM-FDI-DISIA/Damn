#include "EnemyHealth.h"
#include "SceneManager.h"
#include "Entity.h"
#include "GameManager.h"
#include <iostream>

damn::GameManager* damn::EnemyHealth::_gameManager = nullptr;


damn::EnemyHealth::~EnemyHealth()
{
	//_gameManager->DieEnemy();
}

void damn::EnemyHealth::Start()
{
	if(_gameManager == nullptr)
		_gameManager = eden::SceneManager::getInstance()->FindEntity("MANAGERS")->GetComponent<GameManager>();

	_gameManager->RegisterEnemy();
}

void damn::EnemyHealth::LoseHealth(int health)
{
	_currentHealth -= health;
	std::cout << "ahora tengo " << _currentHealth << " puntos de vida" << std::endl;
	if (_currentHealth < 0);
}
