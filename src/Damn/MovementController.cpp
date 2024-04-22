#include "MovementController.h"
#include <Entity.h>
#include <ComponentArguments.h>

void MovementController::Init(eden_script::ComponentArguments* args)
{
	_speed = args->GetValueToFloat("Speed");
}

void MovementController::Start()
{
	_rigidBody = _ent->GetComponent<eden_ec::CRigidBody>();
}

void MovementController::Update(float deltaTime)
{
	_rigidBody->SetLinealVelocity(_direction * _speed * deltaTime);
}

void MovementController::SetDirection(eden_utils::Vector3 newDir)
{
	_direction = newDir.Normalized();
}
