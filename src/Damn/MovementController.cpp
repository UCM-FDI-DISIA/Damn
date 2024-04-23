#include "MovementController.h"
#include <Entity.h>
#include <ComponentArguments.h>

void damn::MovementController::Init(eden_script::ComponentArguments* args)
{
	_speed = args->GetValueToFloat("Speed");
}

void damn::MovementController::Start()
{
	_rigidBody = _ent->GetComponent<eden_ec::CRigidBody>();
}

void damn::MovementController::Update(float deltaTime)
{
	_rigidBody->SetLinealVelocity(_direction * _speed);
}

void damn::MovementController::SetDirection(eden_utils::Vector3 newDir)
{
	_direction = newDir.Normalized();
}
