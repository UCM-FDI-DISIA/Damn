#include "ProjectileMovement.h"
#include "Entity.h"
#include "ComponentArguments.h"
#include "Transform.h"

void damn::ProjectileMovement::Init(eden_script::ComponentArguments* args)
{
	_proyectileSpeed = args->GetValueToFloat("Speed");
}

void damn::ProjectileMovement::Awake()
{
}

void damn::ProjectileMovement::Start()
{
	_tr = _ent->GetComponent<eden_ec::CTransform>();
}

void damn::ProjectileMovement::Update(float t)
{
	_tr->Translate(_direction.Normalized() * _proyectileSpeed * t);
}
