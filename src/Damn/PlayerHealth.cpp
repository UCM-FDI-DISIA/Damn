#include "PlayerHealth.h"
#include "SceneManager.h"
#include "Entity.h"
#include "UIManager.h"

void damn::PlayerHealth::Start()
{
	_uiManager = eden::SceneManager::getInstance()->FindEntity("MANAGERS")->GetComponent<UIManager>();
	_currentHealth = _maxHealth;
}

void damn::PlayerHealth::LoseHealth(int health)
{
	_currentHealth -= health;
	if (_currentHealth < 0) _currentHealth = 0;
	_uiManager->UpdateHealthBar(_currentHealth, _maxHealth);
}
