#include "AmmoBoxComponent.h"
#include "Transform.h"
#include "Entity.h" 
#include <math.h>
#include <iostream>
#include <ScriptManager.h>
#include "WeaponManager.h"
#include <LuaManager.h>

void damn::AmmoBoxComponent::Start()
{
	//registrar los métodos en Lua
	eden_script::ScriptManager::getInstance()->GetLuaManager()->Regist(*this, "AmmoCollision", &damn::AmmoBoxComponent::PickUpAmmo, "PickUpAmmo", this);
	eden_script::ScriptManager::getInstance()->GetLuaManager()->SetGlobal(this, "AmmoCollision");
	_transform = _ent->GetComponent<eden_ec::CTransform>();
	if (_transform) {
		_originalScale = _transform->GetScale();
	}
}

void damn::AmmoBoxComponent::Update(float t)
{
	if (_transform) { //Rotación y aumento/disminución de la escala (estético)
		_timeCounter += t;
		_transform->Yaw(_rotationSpeed * t);
		_transform->SetScale(_originalScale * (_scaleGrowth * (abs(sin(_timeCounter))) + _minScale));
	}
	if (_timeCounter >= _lifeTime) { //Tiempo de vida limitado
		_ent->SetAlive(false);
	}
}

void damn::AmmoBoxComponent::PickUpAmmo()
{
	eden_ec::Entity* otherEnt = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "other");
	eden_ec::Entity* selfEnt = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "self");
	if (otherEnt->HasComponent("WEAPON_MANAGER")) {
		otherEnt->GetComponent<damn::WeaponManager>()->AddAmmo(selfEnt->GetComponent<AmmoBoxComponent>()->_ammoGiven);
		selfEnt->SetAlive(false);
	}
}
