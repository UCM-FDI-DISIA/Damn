#include "WeaponManager.h"
#include "WeaponComponent.h"
#include "Shotgun.h"
#include <SceneManager.h>
#include <Scene.h>
#include <Entity.h>

void damn::WeaponManager::Start()
{
	_actualWeapon = GUN;
	_shotgun = false;

#ifdef _DEBUG
	_shotgun = true;
#endif

	/*_weapons = std::vector<WeaponComponent*>(eden::SceneManager::getInstance()->GetCurrentScene()->GetEntityByID("Gun")->GetComponent<WeaponComponent>(),
		eden::SceneManager::getInstance()->GetCurrentScene()->GetEntityByID("Shotgun")->GetComponent<WeaponComponent>());*/
	_weapons = std::vector<WeaponComponent*>();
	_weapons.push_back(eden::SceneManager::getInstance()->GetCurrentScene()->GetEntityByID("Gun")->GetComponent<WeaponComponent>());
	_weapons.push_back(eden::SceneManager::getInstance()->GetCurrentScene()->GetEntityByID("Shotgun")->GetComponent<Shotgun>());
}

void damn::WeaponManager::Shoot()
{
	_weapons[_actualWeapon]->Shoot();
}

void damn::WeaponManager::Reload()
{
	_weapons[_actualWeapon]->Reload();
}

void damn::WeaponManager::AddAmmo(int ammo)
{
	_weapons[_actualWeapon]->AddAmmo(ammo);
}

void damn::WeaponManager::ChangeWeapon()
{
	_actualWeapon = static_cast<WEAPON>((static_cast<int>(_actualWeapon) + 1) % NUM_WEAPONS);
}

void damn::WeaponManager::UnlockShotGun()
{
	_shotgun = true;
}
