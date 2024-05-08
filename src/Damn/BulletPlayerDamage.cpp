#include "BulletPlayerDamage.h"

#include <ScriptManager.h>
#include <LuaManager.h>
#include <Entity.h>

#include "Health.h"
#include "PlayerHealth.h"

void damn::BulletPlayerDamage::Start()
{
	eden_script::LuaManager* _luaMngr = eden_script::ScriptManager::getInstance()->GetLuaManager();
	_luaMngr->Regist(*this, "BulletHitsPlayer", &damn::BulletPlayerDamage::HasHitPlayer, "HasHitPlayer", this);
	_luaMngr->SetGlobal(*this, "BulletHitsPlayer");
	_luaMngr = nullptr;
}

void damn::BulletPlayerDamage::HasHitPlayer()
{
	eden_ec::Entity* _other = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "other");
	eden_ec::Entity* _self = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "self");
	damn::Health* _healthComponent = nullptr;

	if (_other->HasComponent("PLAYER_HEALTH")) {
		_healthComponent = _other->GetComponent<PlayerHealth>();
		_healthComponent->LoseHealth(_self->GetComponent<BulletPlayerDamage>()->_damage);
		_self->SetAlive(false);
	}
	else if (!_other->HasComponent("BULLET_ENEMY_DAMAGE") && !_other->HasComponent("BULLET_PLAYER_DAMAGE")) {
		_self->SetAlive(false);
	}
}