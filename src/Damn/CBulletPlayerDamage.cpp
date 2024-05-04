#include "CBulletPlayerDamage.h"

#include <ScriptManager.h>
#include <LuaManager.h>
#include <Entity.h>

#include "Health.h"
#include "PlayerHealth.h"

void damn::CBulletPlayerDamage::Start()
{
	eden_script::LuaManager* _luaMngr = eden_script::ScriptManager::getInstance()->GetLuaManager();
	_luaMngr->Regist(*this, "BulletHitsPlayer", &damn::CBulletPlayerDamage::HasHitPlayer, "HasHitPlayer", this);
	_luaMngr->SetGlobal(*this, "BulletHitsPlayer");
	_luaMngr = nullptr;
}

void damn::CBulletPlayerDamage::HasHitPlayer()
{
	eden_ec::Entity* _other = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "other");
	damn::Health* _healthComponent = nullptr;

	if (_other->HasComponent("PLAYER_HEALTH")) {
		_healthComponent = _other->GetComponent<PlayerHealth>();
		_healthComponent->LoseHealth(_damage);
		_ent->SetAlive(false);
	}
}