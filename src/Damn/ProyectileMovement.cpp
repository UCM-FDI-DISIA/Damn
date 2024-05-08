#include "ProyectileMovement.h"
#include "Entity.h"
#include "ComponentArguments.h"
#include "Transform.h"

void damn::ProyectileMovement::Init(eden_script::ComponentArguments* args)
{
	_proyectileSpeed = args->GetValueToFloat("Speed");
}

void damn::ProyectileMovement::Awake()
{
}

void damn::ProyectileMovement::Start()
{
	_tr = _ent->GetComponent<eden_ec::CTransform>();
}

void damn::ProyectileMovement::Update(float t)
{
	_tr->Translate(_direction.Normalized() * _proyectileSpeed * t);
}
