#include "DamnMain.h"
#include "SceneManager.h"
#include "ComponentFactory.h"

#include "ButtonFunctions.h"
#include "MovementController.h"
#include "InputController.h"
#include "ChangeCameraBackground.h"
#include "EnemyAttack.h"
#include "CameraMovement.h"
#include "ProyectileMovement.h"
#include "PlayerHealth.h"
#include "EnemyHealth.h"
#include "WeaponManager.h"
#include "Shotgun.h"
#include "AmmoBoxComponent.h"
#include "UIManager.h"
#include "GameManager.h"
#include "MainMenuCameraRotation.h"
#include "Spawnpoint.h"
#include "Rifle.h"
#include "BulletEnemyDamage.h"
#include "BulletPlayerDamage.h"
#include "MenuBullets.h"
#include "SoundController.h"

void RegisterComponents() {
	eden_ec::ComponentFactory* factory = eden_ec::ComponentFactory::getInstance();
	factory->RegisterComponent<damn::ButtonFunctions>();
	factory->RegisterComponent<damn::MovementController>();
	factory->RegisterComponent<damn::InputController>();
	factory->RegisterComponent<damn::ChangeCameraBackground>();
	factory->RegisterComponent<damn::MainMenuCameraRotation>();
	factory->RegisterComponent<damn::MenuBullets>();
	factory->RegisterComponent<damn::SoundController>();
	factory->RegisterComponent<damn::EnemyAttack>();
	factory->RegisterComponent<damn::CameraMovement>();
	factory->RegisterComponent<damn::ProyectileMovement>();
	factory->RegisterComponent<damn::EnemyHealth>();
	factory->RegisterComponent<damn::PlayerHealth>();
	factory->RegisterComponent<damn::WeaponManager>();
	factory->RegisterComponent<damn::WeaponComponent>();
	factory->RegisterComponent<damn::Shotgun>();
	factory->RegisterComponent<damn::AmmoBoxComponent>();
	factory->RegisterComponent<damn::UIManager>();
	factory->RegisterComponent<damn::GameManager>();
	factory->RegisterComponent<damn::Spawnpoint>();
	factory->RegisterComponent<damn::Rifle>();
	factory->RegisterComponent<damn::BulletEnemyDamage>();
	factory->RegisterComponent<damn::BulletPlayerDamage>();
}

void LoadScene() {
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->PushScene("Menu");
}