#include "CProyectileMovement.h"
#include "Entity.h"
#include "ComponentArguments.h"
#include "Transform.h"

void eden_ec::CProyectileMovement::Init(eden_script::ComponentArguments* args)
{
	_proyectileSpeed = args->GetValueToFloat("Speed");
}

void eden_ec::CProyectileMovement::Awake()
{
}

void eden_ec::CProyectileMovement::Start()
{
}

void eden_ec::CProyectileMovement::Update(float t)
{
	_ent->GetComponent<CTransform>()->Translate(_direction.Normalized() * _proyectileSpeed);
}
