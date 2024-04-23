#include "CEnemyAttack.h"
#include "Entity.h"
#include "Transform.h"
#include "Quaternion.h"
#include "SceneManager.h"
#include "CProyectileMovement.h"
#include <math.h>
#include <iostream>

void eden_ec::CEnemyAttack::Init(eden_script::ComponentArguments* args)
{
	
}

void eden_ec::CEnemyAttack::Awake()
{
	
}

void eden_ec::CEnemyAttack::Start()
{
	_player = eden::SceneManager::getInstance()->FindEntity("Player");
}

void eden_ec::CEnemyAttack::Update(float t)
{
	if (_player) {
		//_ent->GetComponent<CTransform>()->Roll(1);
		eden_utils::Vector3 dir = _player->GetComponent<CTransform>()->GetPosition() - _ent->GetComponent<CTransform>()->GetPosition();
		dir.Normalize();
		//std::cout << dir.GetX() << " " << dir.GetY() << " " << dir.GetZ() << '\n';
		//_ent->GetComponent<CTransform>()->Translate(dir * 0.001);
		//_ent->GetComponent<CTransform>()->Yaw(0.5);
		float angle = dir.Dot(_ent->GetComponent<CTransform>()->GetForward());
		angle = atan(angle)* (180/3.1415);
		//angle = acos(angle) * 57.3;
		std::cout << angle << '\n';
		//std::cout << dir.GetX() << " " << dir.GetY() << " " << dir.GetZ() << '\n';
	}
	else {
		std::cout << "No player\n";
		//player = eden::SceneManager::getInstance()->FindEntity("Player");
	}
	
	_attackTimer += t;
	if (_attackTimer >= _attackRate) {
		_attackTimer = 0;
		Entity* f = eden::SceneManager::getInstance()->InstantiateBlueprint("Bullet");
		f->GetComponent<CTransform>()->SetPosition(_ent->GetComponent<CTransform>()->GetPosition());
		f->GetComponent<CProyectileMovement>()->SetDirection(_ent->GetComponent<CTransform>()->GetForward());
	}
}
