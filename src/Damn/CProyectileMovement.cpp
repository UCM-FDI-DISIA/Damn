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
	_tr = _ent->GetComponent<CTransform>();
}

void eden_ec::CProyectileMovement::Update(float t)
{
	_tr->Translate(_direction.Normalized() * _proyectileSpeed * t);
}
