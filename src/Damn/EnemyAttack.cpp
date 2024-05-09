#include "EnemyAttack.h"
#include "Entity.h"
#include "Transform.h"
#include "Quaternion.h"
#include "SceneManager.h"
#include "ProyectileMovement.h"
#include <math.h>
#include <iostream>
#include <ComponentArguments.h>

void damn::EnemyAttack::Init(eden_script::ComponentArguments* args)
{
	_attackRate = args->GetValueToFloat("AttackRate");
	_rotationSpeed = args->GetValueToFloat("RotationSpeed");
}

void damn::EnemyAttack::Awake()
{
	
}

void damn::EnemyAttack::Start()
{
	_player = eden::SceneManager::getInstance()->FindEntity("Player_0");
	if(_player) _playerTr = _player->GetComponent<eden_ec::CTransform>();
	_tr = _ent->GetComponent<eden_ec::CTransform>();
}

void damn::EnemyAttack::Update(float t)
{
	if (_player) {
		eden_utils::Vector3 newPlayePos(_playerTr->GetPosition().GetX(), _tr->GetPosition().GetY(), _playerTr->GetPosition().GetZ());
		eden_utils::Vector3 dir = (newPlayePos - _tr->GetPosition()).Normalized();
		float frontAngle = acos(dir.Dot(_tr->GetForward())) * (180/PI); //Calcula el ángulo que forma el jugador con el forward del enemigo 
		if (frontAngle > 1) { //Si el jugador está a un a más de un grado de diferencia, el enemigo sigue rotando
			float rightAngle = acos(dir.Dot(_tr->GetRight())) * (180 / PI); //Usando el vector derecha del enemigo determinamos el lado hacia el que tiene que rotar
			if (rightAngle > 90) _rotationCoef = -1;
			else _rotationCoef = 1;
			_tr->Yaw(_rotationSpeed * _rotationCoef * t);
		}
		
		if(frontAngle <= 3) { //Si el ángulo formado es menor a 3 grados, el enemigo puede disparar
			_attackTimer += t;
			if (_attackTimer >= _attackRate) {
				_attackTimer = 0;
				eden_utils::Quaternion rotation = _tr->GetRotation() * eden_utils::Quaternion(180, eden_utils::Vector3(0, 1, 0));
				eden_ec::Entity* f = eden::SceneManager::getInstance()->InstantiateBlueprint("EnemyBullet", _tr->GetPosition() + (_tr->GetForward() * 2), rotation);
				eden_utils::Vector3 proyectileDir = (_playerTr->GetPosition() - _tr->GetPosition()).Normalized(); //Vector que calcula la dirección teniendo en cuenta la altura
				f->GetComponent<damn::ProyectileMovement>()->SetDirection(eden_utils::Vector3(0, proyectileDir.GetY(), -1));
			}
		}
	}
}
