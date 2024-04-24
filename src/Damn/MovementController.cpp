#include "MovementController.h"
#include <Entity.h>
#include <ComponentArguments.h>
#include <iostream>

void damn::MovementController::Init(eden_script::ComponentArguments* args)
{
	_speed = args->GetValueToFloat("Speed");
}

void damn::MovementController::Start()
{
	_rigidBody = _ent->GetComponent<eden_ec::CRigidBody>();
	_rigidBody->SetGravity(eden_utils::Vector3(0, 0, 0));
}

void damn::MovementController::Update(float deltaTime)
{
	std::cout << _rigidBody->GetLinearVelocity().GetX() << " " << _rigidBody->GetLinearVelocity().GetY() << " " << _rigidBody->GetLinearVelocity().GetZ() << std::endl;
	_rigidBody->SetLinealVelocity(_direction * _speed);
	//_rigidBody->ApplyForce(_direction * _speed * deltaTime);
}

void damn::MovementController::SetDirection(eden_utils::Vector3 newDir)
{
	_direction = newDir.Normalized();
}
