#include "InputController.h"
#include<ComponentArguments.h>
#include<Entity.h>
#include<InputManager.h>
#include<Vector3.h>
#include "MovementController.h"
#include "CameraMovement.h"

void damn::InputController::Init(eden_script::ComponentArguments* args)
{

}

void damn::InputController::Start()
{
	_movementController = _ent->GetComponent<damn::MovementController>();
	_cameraMovement = _ent->GetComponent<eden_ec::CameraMovement>();
	_transform = _ent->GetComponent<eden_ec::CTransform>();
}

void damn::InputController::Update(float deltatime)
{
	eden_utils::Vector3 newDir = eden_utils::Vector3(0, 0, 0);

	//if (eden_input::InputManager::getInstance()->IsKeyHeld('w')) {
	//	newDir += _transform->GetForward() * -1;
	//}
	//else if (eden_input::InputManager::getInstance()->IsKeyHeld('s')) {
	//	newDir += _transform->GetForward();
	//}
	//if (eden_input::InputManager::getInstance()->IsKeyHeld('d')) {
	//	newDir += _transform->GetRight();
	//}
	//else if (eden_input::InputManager::getInstance()->IsKeyHeld('a')) {
	//	newDir += _transform->GetRight() * -1;
	//}

	if (eden_input::InputManager::getInstance()->IsKeyHeld('w')) {
		newDir = eden_utils::Vector3(0, 0, -1);
	}
	else if (eden_input::InputManager::getInstance()->IsKeyHeld('s')) {
		newDir = eden_utils::Vector3(0, 0, 1);
	}
	if (eden_input::InputManager::getInstance()->IsKeyHeld('d')) {
		newDir = eden_utils::Vector3(1, 0, 0);
	}
	else if (eden_input::InputManager::getInstance()->IsKeyHeld('a')) {
		newDir = eden_utils::Vector3(-1, 0, 0);
	}
	newDir = _transform->GetRotation() * newDir;

	_movementController->SetDirection(newDir);

	_cameraMovement->SetMouseDirection(eden_input::InputManager::getInstance()->GetMouseDir());
}
