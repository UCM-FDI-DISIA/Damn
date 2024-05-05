#include "CBulletDamage.h"

#include "Entity.h"
#include <ComponentArguments.h>

void damn::CBulletDamage::Init(eden_script::ComponentArguments* args)
{
	_damage = args->GetValueToInt("Damage");
}

void damn::CBulletDamage::Update(float deltaTime)
{
	_timeAlive += deltaTime;
	if (_timeAlive >= _lifeTime) {
		_ent->SetAlive(false);
	}
}
