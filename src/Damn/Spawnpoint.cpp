#include "Spawnpoint.h"
#include "GameManager.h"
#include <Transform.h>
#include <Entity.h>
#include <SceneManager.h>

void damn::Spawnpoint::Start()
{
	eden_ec::Entity* gM = eden::SceneManager::getInstance()->FindEntity("GAME_MANAGER");
	if (gM != nullptr) {
		gameManager = gM->GetComponent<GameManager>();
		if (gameManager) {
			gameManager->AddWaypoint(_ent->GetComponent<eden_ec::CTransform>());
		}
	}
}
