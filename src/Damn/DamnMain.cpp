#include "DamnMain.h"
#include "SceneManager.h"
#include "ComponentFactory.h"

#include "PlayButton.h"
#include "Hito2MenuPausa.h"
#include "Hito2Prueba.h"
#include "MovementController.h"
#include "InputController.h"
#include "ChangeCameraBackground.h"
#include "CEnemyAttack.h"
#include "CameraMovement.h"
#include "CProyectileMovement.h"

void RegisterComponents() {
	eden_ec::ComponentFactory* factory = eden_ec::ComponentFactory::getInstance();
	factory->RegisterComponent<eden_ec::Hito2MenuPausa>();
	factory->RegisterComponent<eden_ec::Hito2Prueba>();
	factory->RegisterComponent<eden_ec::PlayButton>();
	factory->RegisterComponent<damn::MovementController>();
	factory->RegisterComponent<damn::InputController>();
	factory->RegisterComponent<ChangeCameraBackground>();
	factory->RegisterComponent<eden_ec::CEnemyAttack>();
	factory->RegisterComponent<eden_ec::CameraMovement>();
	factory->RegisterComponent<eden_ec::CProyectileMovement>();
}

void LoadScene() {
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->PushScene("Menu");
}