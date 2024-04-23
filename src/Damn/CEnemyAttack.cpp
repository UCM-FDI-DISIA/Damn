#include "CEnemyAttack.h"
#include "Entity.h"
#include "Transform.h"
#include "Quaternion.h"
#include "SceneManager.h"
#include <iostream>

const std::string eden_ec::CEnemyAttack::_id = "ENEMY_ATTACK";
void eden_ec::CEnemyAttack::Init(eden_script::ComponentArguments* args)
{
	
}

void eden_ec::CEnemyAttack::Awake()
{
	
}

void eden_ec::CEnemyAttack::Start()
{
	player = eden::SceneManager::getInstance()->FindEntity("Player");
}

void eden_ec::CEnemyAttack::Update(float t)
{
	if (player) {
		//_ent->GetComponent<CTransform>()->Roll(1);
		eden_utils::Vector3 dir = player->GetComponent<CTransform>()->GetPosition() - _ent->GetComponent<CTransform>()->GetPosition();
		//std::cout << dir.GetX() << " " << dir.GetY() << " " << dir.GetZ() << '\n';
		//_ent->GetComponent<CTransform>()->Translate(dir * 0.001);
		_ent->GetComponent<CTransform>()->Roll(0.5);

		
		
		float angle = dir.Dot(_ent->GetComponent<CTransform>()->GetRight());
		angle = angle * (180 / 3.1415);
		std::cout << angle << '\n';
		//std::cout << _ent->GetComponent<CTransform>()->GetRight().GetX() << " " << _ent->GetComponent<CTransform>()->GetRight().GetY() << " " << _ent->GetComponent<CTransform>()->GetRight().GetZ() << '\n';
	}
	else {
		std::cout << "No player\n";
		player = eden::SceneManager::getInstance()->FindEntity("Player");
	}
	
}
