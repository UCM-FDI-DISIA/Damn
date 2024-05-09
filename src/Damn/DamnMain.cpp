#include "DamnMain.h"
#include "SceneManager.h"
#include "ComponentFactory.h"
#include <RenderManager.h>

#include "ButtonFunctions.h"
#include "MovementController.h"
#include "InputController.h"
#include "ChangeCameraBackground.h"
#include "EnemyAttack.h"
#include "CameraMovement.h"
#include "ProjectileMovement.h"
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
#include "RomeComponent.h"

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
	factory->RegisterComponent<damn::ProjectileMovement>();
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
	factory->RegisterComponent<damn::RomeComponent>();
}

void LoadScene() {
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	// Desactiva los mensajes en consola al crear entidades 
	scnManager->SetDebugLog(false);
	eden_render::RenderManager::getInstance()->SetWindowName("DAMN");
	eden_render::RenderManager::getInstance()->SetWindowIcon("damnlogo64.bmp");
	scnManager->PushScene("Menu");
}