#include<math.h>

#include "Shotgun.h"
#include"CProyectileMovement.h"
#include<ComponentArguments.h>
#include<SceneManager.h>
#include<Transform.h>
#include<Entity.h>
#include<Vector3.h>
void damn::Shotgun::Init(eden_script::ComponentArguments* args)
{
	_numBalas = args->GetValueToInt("Balas");
	WeaponComponent::Init(args);
}

void damn::Shotgun::Shoot()
{
	if (_canShoot && _magazineAmmo > 0) {
		float alfa = (float) ANGLE / _numBalas;
		float angle = 0;
		eden_ec::Entity* bullet;
		eden_utils::Vector3 dir = eden_utils::Vector3(0, 0, 0);
		eden_utils::Vector3 up = _cameraTransform->GetUp();
		eden_utils::Vector3 forward = _cameraTransform->GetForward();

		for (int i = 0; angle = ( - ANGLE / 2 + alfa * i) < ANGLE / 2; ++i) {
			dir = eden_utils::Vector3((up.GetX() * up.GetX()) + (1  - (up.GetX() * up.GetX()) * cos(angle)) * forward.GetX()
				+ (up.GetX() * up.GetY() + (1 - cos(angle)) - up.GetZ() * sin(angle)) * forward.GetY()
				+ (up.GetX() * up.GetZ() * (1 - cos(angle)) + up.GetY() * sin(angle)) * forward.GetZ(),

				(up.GetX() * up.GetY() * (1 - cos(angle)) + up.GetZ() * sin(angle)) * forward.GetX()
				+ ((up.GetY() * up.GetY()) + (1 - (up.GetY() * up.GetY())) * cos(angle)) * forward.GetY()
				+ (up.GetY()* up.GetZ() * (1 - cos(angle)) - up.GetX() * sin(angle)) * forward.GetZ(),

				(up.GetX() * up.GetZ() * (1 - cos(angle)) - up.GetY() * sin(angle)) * forward.GetX()
				+ (up.GetY() * up.GetZ() * (1 - cos(angle)) + up.GetX() * sin(angle)) * forward.GetY()
				+ ((up.GetZ() * up.GetZ()) + (1 - up.GetZ() * up.GetZ()) * cos(angle)) * forward.GetZ());

			bullet = eden::SceneManager::getInstance()->InstantiateBlueprint("Bullet");
			bullet->GetComponent<eden_ec::CTransform>()->SetPosition(_ent->GetComponent<eden_ec::CTransform>()->GetPosition());
			bullet->GetComponent<eden_ec::CProyectileMovement>()->SetDirection(dir.Normalized());
		}
		_canShoot = false;
		_magazineAmmo--;
	}
	else if (_magazineAmmo == 0)
		Reload();
}
