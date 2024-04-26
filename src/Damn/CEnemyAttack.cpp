#include "CEnemyAttack.h"
#include "Entity.h"
#include "Transform.h"
#include "Quaternion.h"
#include "SceneManager.h"
#include "CProyectileMovement.h"
#include <math.h>
#include <ComponentArguments.h>
#include <iostream>

void eden_ec::CEnemyAttack::Init(eden_script::ComponentArguments* args)
{
	_attackRate = args->GetValueToFloat("AttackRate");
	_rotationSpeed = args->GetValueToFloat("RotationSpeed");
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
		eden_utils::Vector3 newPlayePos(_player->GetComponent<CTransform>()->GetPosition().GetX(), _ent->GetComponent<CTransform>()->GetPosition().GetY(), _player->GetComponent<CTransform>()->GetPosition().GetZ());
		eden_utils::Vector3 dir = (newPlayePos - _ent->GetComponent<CTransform>()->GetPosition()).Normalized();
		float frontAngle = acos(dir.Dot(_ent->GetComponent<CTransform>()->GetForward())) * (180/PI);
		if (frontAngle > 1) {
			float rightAngle = acos(dir.Dot(_ent->GetComponent<CTransform>()->GetRight())) * (180 / PI);
			if (rightAngle > 90) _rotationCoef = -1;
			else _rotationCoef = 1;
			_ent->GetComponent<CTransform>()->Yaw(_rotationSpeed * _rotationCoef);
		}
		if(frontAngle <= 2) {
			_attackTimer += t;
			if (_attackTimer >= _attackRate) {
				_attackTimer = 0;
				Entity* f = eden::SceneManager::getInstance()->InstantiateBlueprint("Bullet");
				f->GetComponent<CTransform>()->SetPosition(_ent->GetComponent<CTransform>()->GetPosition());
				f->GetComponent<CProyectileMovement>()->SetDirection(_ent->GetComponent<CTransform>()->GetForward());
			}
		}
	}
}
