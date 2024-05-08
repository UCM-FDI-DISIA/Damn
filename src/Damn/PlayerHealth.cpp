#include "PlayerHealth.h"
#include "SceneManager.h"
#include "Entity.h"
#include "UIManager.h"
#include "GameManager.h"

void damn::PlayerHealth::Start()
{
	Health::Start();
	_uiManager = eden::SceneManager::getInstance()->FindEntity("UI_MANAGER")->GetComponent<UIManager>();

}

void damn::PlayerHealth::Awake()
{
	eden_ec::Entity* gM = eden::SceneManager::getInstance()->FindEntity("GAME_MANAGER");
	if (gM) {
		gM->GetComponent<GameManager>()->setPlayer(_ent);
	}
}

void damn::PlayerHealth::LoseHealth(int health)
{
	Health::LoseHealth(health);
	if (_currentHealth < 0) _currentHealth = 0;
	_uiManager->UpdateHealthBar(_currentHealth, _maxHealth);
}
