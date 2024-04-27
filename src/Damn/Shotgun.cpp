#include<math.h>

#include "Shotgun.h"
#include"CProyectileMovement.h"
#include<ComponentArguments.h>
#include<SceneManager.h>
#include<Transform.h>
#include<Entity.h>
#include<Vector3.h>
#include<CMeshRenderer.h>
void damn::Shotgun::Init(eden_script::ComponentArguments* args)
{
	_numBalas = args->GetValueToInt("Balas");
	WeaponComponent::Init(args);
}

void damn::Shotgun::Start()
{
	_ent->GetComponent<eden_ec::CMeshRenderer>()->SetInvisible(true);
	WeaponComponent::Start();
}

void damn::Shotgun::Shoot()
{
	if (_canShoot && _magazineAmmo > 0) {
		float alfa = (float) ANGLE / _numBalas;
		eden_utils::Vector3 dir = eden_utils::Vector3(0, 0, 0);
		eden_utils::Vector3 up = _cameraTransform->GetUp();
		eden_utils::Vector3 forward = _cameraTransform->GetForward();
		eden_ec::Entity* bullet;
		float angle = 0;
		for (int i = 0; i < _numBalas; ++i) {
			angle = (float)((-alfa + alfa * i));
			dir = forward.RotatedAroundPoint(up, angle);

			bullet = eden::SceneManager::getInstance()->InstantiateBlueprint("Bullet");
			bullet->GetComponent<eden_ec::CTransform>()->SetPosition(_ent->GetComponent<eden_ec::CTransform>()->GetPosition());
			bullet->GetComponent<eden_ec::CProyectileMovement>()->SetDirection(dir.Normalized() * -1);
		}
		_canShoot = false;
		_elapsedTime = 0;
		_magazineAmmo--;
	}
	else if (_magazineAmmo == 0)
		Reload();
}
