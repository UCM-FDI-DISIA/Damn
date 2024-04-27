#include "CAmmoBoxComponent.h"
#include "Transform.h"
#include "Entity.h" 
#include <math.h>
#include <iostream>

void eden_ec::CAmmoBoxComponent::Init(eden_script::ComponentArguments* args)
{
}

void eden_ec::CAmmoBoxComponent::Awake()
{
}

void eden_ec::CAmmoBoxComponent::Start()
{
	_transform = _ent->GetComponent<CTransform>();
	if (_transform) {
		_originalScale = _transform->GetScale();
	}
}

void eden_ec::CAmmoBoxComponent::Update(float t)
{
	if (_transform) {
		_timeCounter += t;
		_transform->Yaw(_rotationSpeed * t);
		_transform->SetScale(_originalScale * (_scaleGrowth * (abs(sin(_timeCounter))) + _minScale));
	}
}
