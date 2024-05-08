#include "InputController.h"
#include<ComponentArguments.h>
#include<Entity.h>
#include<InputManager.h>
#include<Vector3.h>
#include "MovementController.h"
#include "WeaponManager.h"
#include "CameraMovement.h"
#include "SceneManager.h"

void damn::InputController::Start()
{
	_movementController = _ent->GetComponent<damn::MovementController>();
	_weaponManager = _ent->GetComponent<WeaponManager>();
	_cameraMovement = _ent->GetComponent<damn::CameraMovement>();
	_transform = _ent->GetComponent<eden_ec::CTransform>();
	_rb = _ent->GetComponent<eden_ec::CRigidBody>();
	_rb->SetTemporalDeactivation(true);
	
}

void damn::InputController::Update(float deltatime)
{
	eden_utils::Vector3 newDir = eden_utils::Vector3(0, 0, 0);

	if (eden_input::InputManager::getInstance()->IsKeyHeld('w')) {
		newDir += _transform->GetForward() * -1;
	}
	else if (eden_input::InputManager::getInstance()->IsKeyHeld('s')) {
		newDir += _transform->GetForward();
	}
	if (eden_input::InputManager::getInstance()->IsKeyHeld('d')) {
		newDir += _transform->GetRight();
	}
	else if (eden_input::InputManager::getInstance()->IsKeyHeld('a')) {
		newDir += _transform->GetRight() * -1;
	}

	if(_movementController)
		_movementController->SetDirection(newDir);

	if(_cameraMovement)
		_cameraMovement->SetMouseDirection(eden_input::InputManager::getInstance()->GetMouseDir());

	if (eden_input::InputManager::getInstance()->IsMouseButtonDown(eden_input::InputManager::MOUSEBUTTON::LEFT)) {
		if(_weaponManager)
			_weaponManager->Shoot();
	}
	if (eden_input::InputManager::getInstance()->IsKeyDown('r')) {
		if (_weaponManager)
			_weaponManager->Reload();
	}
	if (eden_input::InputManager::getInstance()->IsKeyDown(eden_input::InputManager::TAB)) {
		if (_weaponManager)
			_weaponManager->ChangeWeapon();
	}
	
	if (eden_input::InputManager::getInstance()->IsKeyDown(eden_input::InputManager::ESCAPE)) {
		eden::SceneManager::getInstance()->PushScene("PauseMenu");
	}
}

void damn::InputController::Clear()
{
	if(_movementController)
		_movementController->SetDirection(eden_utils::Vector3(0, 0, 0));
	if(_cameraMovement)
		_cameraMovement->SetMouseDirection({ 0,0 });
}
