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

void damn::PlayerHealth::LoseHealth(int health)
{
	Health::LoseHealth(health);
	if(_uiManager)
		_uiManager->UpdateHealthBar(_currentHealth, _maxHealth);

}

void damn::PlayerHealth::Die() {
	if (_dead) return;
	Health::Die();
	eden_ec::Entity* ent = eden::SceneManager::getInstance()->FindEntity("GAME_MANAGER");
	if (ent) {
		GameManager* gm = ent->GetComponent<GameManager>();
		if (gm) {
			gm->LoseGame();
			_dead = true;
		}
	}
}
