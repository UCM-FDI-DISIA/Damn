#include "CAmmoBoxComponent.h"
#include "Transform.h"
#include "Entity.h" 
#include <math.h>
#include <iostream>
#include <ScriptManager.h>
#include "WeaponManager.h"
#include <LuaManager.h>

void eden_ec::CAmmoBoxComponent::Init(eden_script::ComponentArguments* args)
{
}

void eden_ec::CAmmoBoxComponent::Awake()
{
}

void eden_ec::CAmmoBoxComponent::Start()
{
	//registrar los métodos en Lua
	eden_script::ScriptManager::getInstance()->GetLuaManager()->Regist(*this, "AmmoCollision", &eden_ec::CAmmoBoxComponent::PickUpAmmo, "PickUpAmmo", this);
	eden_script::ScriptManager::getInstance()->GetLuaManager()->SetGlobal(this, "AmmoCollision");
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

void eden_ec::CAmmoBoxComponent::PickUpAmmo()
{
	Entity* otherEnt = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "other");
	if (otherEnt->HasComponent("WEAPON_MANAGER")) {
		otherEnt->GetComponent<damn::WeaponManager>()->AddAmmo(_ammoGiven);
		//_ent->SetAlive(false);
	}
}
