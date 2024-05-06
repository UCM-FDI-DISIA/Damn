#include "CEnemyAttack.h"
#include "Entity.h"
#include "Transform.h"
#include "Quaternion.h"
#include "SceneManager.h"
#include "CProyectileMovement.h"
#include <math.h>
#include <ComponentArguments.h>

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
	_player = eden::SceneManager::getInstance()->FindEntity("Player_0");
	_playerTr = _player->GetComponent<CTransform>();
	_tr = _ent->GetComponent<CTransform>();
}

void eden_ec::CEnemyAttack::Update(float t)
{
	if (_player) {
		eden_utils::Vector3 newPlayePos(_playerTr->GetPosition().GetX(), _tr->GetPosition().GetY(), _playerTr->GetPosition().GetZ());
		eden_utils::Vector3 dir = (newPlayePos - _tr->GetPosition()).Normalized();
		float frontAngle = acos(dir.Dot(_tr->GetForward())) * (180/PI);
		if (frontAngle > 1) {
			float rightAngle = acos(dir.Dot(_tr->GetRight())) * (180 / PI);
			if (rightAngle > 90) _rotationCoef = -1;
			else _rotationCoef = 1;
			_tr->Yaw(_rotationSpeed * _rotationCoef);
		}
		if(frontAngle <= 3) {
			_attackTimer += t;
			if (_attackTimer >= _attackRate) {
				_attackTimer = 0;
				eden_utils::Quaternion rotation = _tr->GetRotation() * eden_utils::Quaternion(180, eden_utils::Vector3(0, 1, 0));
				Entity* f = eden::SceneManager::getInstance()->InstantiateBlueprint("EnemyBullet", _tr->GetPosition() + (_tr->GetForward() * 2), rotation);
				f->GetComponent<CProyectileMovement>()->SetDirection(eden_utils::Vector3(0,0,-1));
			}
		}
	}
}
