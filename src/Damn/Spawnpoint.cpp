#include "Spawnpoint.h"
#include "GameManager.h"
#include <Transform.h>
#include <Entity.h>
#include <SceneManager.h>

void damn::Spawnpoint::Start()
{
	gameManager = eden::SceneManager::getInstance()->FindEntity("MANAGERS")->GetComponent<GameManager>();
	gameManager->AddWaypoint(_ent->GetComponent<eden_ec::CTransform>());
}
