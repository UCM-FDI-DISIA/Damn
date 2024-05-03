#include "WeaponComponent.h"
#include "CProyectileMovement.h"
#include <Transform.h>
#include "Entity.h"
#include "SceneManager.h"
#include "Scene.h"
#include <ComponentArguments.h>
#include "CAnimator.h"
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
	_ent->GetComponent<eden_ec::CTransform>()->SetParent(eden::SceneManager::getInstance()->GetCurrentScene()->GetEntityByID("Player_0")->GetComponent<eden_ec::CTransform>());
	_cameraTransform = _ent->GetComponent<eden_ec::CTransform>()->GetParent();
	PlayIdleAnim();
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
	
	if (_canShoot && _magazineAmmo > 0 && !isAnyAnimPlaying()) {
		eden_ec::Entity* bullet = eden::SceneManager::getInstance()->InstantiateBlueprint("Bullet");
		bullet->GetComponent<eden_ec::CTransform>()->SetPosition(_ent->GetComponent<eden_ec::CTransform>()->GetPosition());
		bullet->GetComponent<eden_ec::CProyectileMovement>()->SetDirection(_ent->GetComponent<eden_ec::CTransform>()->GetForward() * -1);

		_canShoot = false;
		_elapsedTime = 0;
		_magazineAmmo--;
		PlayShootAnim();
	}
	else if (_magazineAmmo == 0)
		Reload();
}

void damn::WeaponComponent::Reload()
{
	if (isAnyAnimPlaying() || _magazineAmmo >= _magazineSize) return;
	if (_currentAmmo - (_magazineSize - _magazineAmmo) >= 0) {
		_currentAmmo -= (_magazineSize - _magazineAmmo);
		_magazineAmmo += ((_magazineSize - _magazineAmmo));
	}
	else if (_currentAmmo > 0) {
		_magazineAmmo += _currentAmmo;
		_currentAmmo = 0;
	}
	PlayReloadAnim();
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

void damn::WeaponComponent::PlayIdleAnim()
{
	if (!_ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("idlePistol")) {
		_ent->GetComponent<eden_ec::CAnimator>()->PlayAnim("idlePistol");
	}
}

void damn::WeaponComponent::PlayShootAnim()
{
	if (!_ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("shootPistol")) {
		_ent->GetComponent<eden_ec::CAnimator>()->PlayAnim("shootPistol");
	}
}

void damn::WeaponComponent::PlayReloadAnim()
{
	if (!_ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("reloadPistol") && !_ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("reloadSpecialPistol")) {
		int x = rand() % 101;
		if (x < 90) {
			_ent->GetComponent<eden_ec::CAnimator>()->PlayAnim("reloadPistol");
		}
		else {
			_ent->GetComponent<eden_ec::CAnimator>()->PlayAnim("reloadSpecialPistol");
		}
	}
}

bool damn::WeaponComponent::isAnyAnimPlaying()
{
	return (_ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("reloadPistol") || _ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("reloadSpecialPistol") || _ent->GetComponent<eden_ec::CAnimator>()->IsPlaying("shootPistol"));
}
