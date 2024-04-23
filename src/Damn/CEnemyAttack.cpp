#include "CEnemyAttack.h"
#include "Entity.h"
#include "Transform.h"
#include "Quaternion.h"

const std::string eden_ec::CEnemyAttack::_id = "ENEMY_ATTACK";
void eden_ec::CEnemyAttack::Init(eden_script::ComponentArguments* args)
{

}

void eden_ec::CEnemyAttack::Awake()
{

}

void eden_ec::CEnemyAttack::Start()
{

}

void eden_ec::CEnemyAttack::Update(float t)
{
	_ent->GetComponent<CTransform>()->Roll(1);
}
