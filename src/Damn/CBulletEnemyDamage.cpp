#include "CBulletEnemyDamage.h"

#include <ScriptManager.h>
#include <LuaManager.h>
#include <Entity.h>

#include "Health.h"
#include "EnemyHealth.h"

void damn::CBulletEnemyDamage::Start()
{
	eden_script::LuaManager* _luaMngr = eden_script::ScriptManager::getInstance()->GetLuaManager();
	_luaMngr->Regist(*this, "BulletHitsEnemy", &damn::CBulletEnemyDamage::HasHitEnemy, "HasHitEnemy", this);
	_luaMngr->SetGlobal(*this, "BulletHitsEnemy");
	_luaMngr = nullptr;
}

void damn::CBulletEnemyDamage::HasHitEnemy()
{
	eden_ec::Entity* _other = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "other");
	damn::Health* _healthComponent = nullptr;

	if (_other->HasComponent("ENEMY_HEALTH")) {
		_healthComponent = _other->GetComponent<EnemyHealth>();
		_healthComponent->LoseHealth(_damage);
		_ent->SetAlive(false);
	}
}
