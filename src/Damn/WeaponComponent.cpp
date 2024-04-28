#include "WeaponComponent.h"
#include "CProyectileMovement.h"
#include <Transform.h>
#include "Entity.h"
#include "SceneManager.h"
#include "Scene.h"
#include <ComponentArguments.h>
#include <CMeshRenderer.h>

void damn::WeaponComponent::Init(eden_script::ComponentArguments* args)
{
	_maxAmmo = args->GetValueToInt("MaxAmmo");
	_magazineSize = args->GetValueToInt("MagazineSize");
	_cadence = args->GetValueToFloat("Cadence");

	_magazineAmmo = _magazineSize;
	_currentAmmo = _maxAmmo;
	_elapsedTime = 0;
	_canShoot = true;
}

void damn::WeaponComponent::Start()
{
	_ent->GetComponent<eden_ec::CTransform>()->SetParent(eden::SceneManager::getInstance()->GetCurrentScene()->GetEntityByID("Player")->GetComponent<eden_ec::CTransform>());
	_cameraTransform = _ent->GetComponent<eden_ec::CTransform>()->GetParent();
}

void damn::WeaponComponent::Update(float deltaTime)
{
	if (!_canShoot) {
		_elapsedTime += deltaTime;
		_canShoot = _elapsedTime >= _cadence;
	}
}

void damn::WeaponComponent::Shoot()
{
	if (_canShoot && _magazineAmmo > 0) {
		eden_ec::Entity* bullet = eden::SceneManager::getInstance()->InstantiateBlueprint("Bullet");
		bullet->GetComponent<eden_ec::CTransform>()->SetPosition(_ent->GetComponent<eden_ec::CTransform>()->GetPosition());
		bullet->GetComponent<eden_ec::CProyectileMovement>()->SetDirection(_ent->GetComponent<eden_ec::CTransform>()->GetForward() * -1);

		_canShoot = false;
		_elapsedTime = 0;
		_magazineAmmo--;
	}
	else if (_magazineAmmo == 0)
		Reload();
}

void damn::WeaponComponent::Reload()
{
	if (_currentAmmo - (_magazineSize - _magazineAmmo) >= 0) {
		_magazineAmmo += ((_magazineSize - _magazineAmmo));
		_currentAmmo -= (_magazineSize - _magazineAmmo);
	}
	else if (_currentAmmo > 0) {
		_magazineAmmo += _currentAmmo;
		_currentAmmo = 0;
	}
}

void damn::WeaponComponent::AddAmmo(int ammo)
{
	_currentAmmo + ammo > _maxAmmo ? _currentAmmo = _maxAmmo : _currentAmmo += ammo;
}

void damn::WeaponComponent::SetVisible(bool visible)
{
	_ent->GetComponent<eden_ec::CMeshRenderer>()->SetInvisible(!visible);
}

std::pair<int, int> damn::WeaponComponent::GetAmmo()
{
	return std::pair<int, int>(_magazineAmmo, _currentAmmo);
}
