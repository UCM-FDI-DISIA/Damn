#include "CBulletDamage.h"

#include <ComponentArguments.h>

void damn::CBulletDamage::Init(eden_script::ComponentArguments* args)
{
	_damage = args->GetValueToInt("Damage");
}
