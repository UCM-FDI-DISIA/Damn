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
}

void damn::MovementController::Update(float deltaTime)
{
	std::cout << _rigidBody->GetLinearVelocity().GetX() << " " << _rigidBody->GetLinearVelocity().GetY() << " " << _rigidBody->GetLinearVelocity().GetZ() << std::endl;
	eden_utils::Vector3 vel = _rigidBody->GetLinearVelocity();
	vel = eden_utils::Vector3(_direction.GetX() * _speed, vel.GetY(), _direction.GetZ() * _speed);
	_rigidBody->SetLinealVelocity(vel);
	//_rigidBody->ApplyForce(_direction * _speed * deltaTime);
}

void damn::MovementController::SetDirection(eden_utils::Vector3 newDir)
{
	_direction = newDir.Normalized();
}
