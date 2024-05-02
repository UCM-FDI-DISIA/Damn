#include "DamnMain.h"
#include "SceneManager.h"
#include "ComponentFactory.h"

#include "ButtonFunctions.h"
#include "Hito2MenuPausa.h"
#include "Hito2Prueba.h"
#include "MovementController.h"
#include "InputController.h"
#include "CChangeCameraBackground.h"
#include "CEnemyAttack.h"
#include "CameraMovement.h"
#include "CProyectileMovement.h"
#include "PlayerHealth.h"
#include "EnemyHealth.h"
#include "WeaponManager.h"
#include "Shotgun.h"
#include "CAmmoBoxComponent.h"
#include "UIManager.h"
#include "GameManager.h"
#include "CMainMenuCameraRotation.h"

void RegisterComponents() {
	eden_ec::ComponentFactory* factory = eden_ec::ComponentFactory::getInstance();
	factory->RegisterComponent<eden_ec::Hito2MenuPausa>();
	factory->RegisterComponent<eden_ec::Hito2Prueba>();
	factory->RegisterComponent<damn::ButtonFunctions>();
	factory->RegisterComponent<damn::MovementController>();
	factory->RegisterComponent<damn::InputController>();
	factory->RegisterComponent<damn::CChangeCameraBackground>();
	factory->RegisterComponent<damn::CMainMenuCameraRotation>();
	factory->RegisterComponent<eden_ec::CEnemyAttack>();
	factory->RegisterComponent<eden_ec::CameraMovement>();
	factory->RegisterComponent<eden_ec::CProyectileMovement>();
	factory->RegisterComponent<damn::EnemyHealth>();
	factory->RegisterComponent<damn::PlayerHealth>();
	factory->RegisterComponent<damn::WeaponManager>();
	factory->RegisterComponent<damn::WeaponComponent>();
	factory->RegisterComponent<damn::Shotgun>();
	factory->RegisterComponent<eden_ec::CAmmoBoxComponent>();
	factory->RegisterComponent<damn::UIManager>();
	factory->RegisterComponent<damn::GameManager>();
}

void LoadScene() {
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->PushScene("Menu");
}