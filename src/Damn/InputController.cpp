#include "InputController.h"
#include<ComponentArguments.h>
#include<Entity.h>
#include<InputManager.h>
#include<Vector3.h>
#include "MovementController.h"

void damn::InputController::Init(eden_script::ComponentArguments* args)
{

}

void damn::InputController::Start()
{
	_movementController = _ent->GetComponent<MovementController>();
	_transform = _ent->GetComponent<eden_ec::CTransform>();
}

void damn::InputController::Update(float deltatime)
{
	eden_utils::Vector3 newDir = eden_utils::Vector3(0, 0, 0);

	if (eden_input::InputManager::getInstance()->IsKeyHeld('w')) {
		newDir += _transform->GetForward();
	}
	else if (eden_input::InputManager::getInstance()->IsKeyHeld('s')) {
		newDir += _transform->GetForward() * -1;
	}
	if (eden_input::InputManager::getInstance()->IsKeyHeld('d')) {
		newDir += _transform->GetRight();
	}
	else if (eden_input::InputManager::getInstance()->IsKeyHeld('a')) {
		newDir += _transform->GetRight() * -1;
	}

	_movementController->SetDirection(newDir);

}
