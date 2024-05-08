#include "BulletDamage.h"

#include "Entity.h"
#include <ComponentArguments.h>

void damn::BulletDamage::Init(eden_script::ComponentArguments* args)
{
	_damage = args->GetValueToInt("Damage");
}

void damn::BulletDamage::Update(float deltaTime)
{
	_timeAlive += deltaTime;
	if (_timeAlive >= _lifeTime) {
		_ent->SetAlive(false);
	}
}
