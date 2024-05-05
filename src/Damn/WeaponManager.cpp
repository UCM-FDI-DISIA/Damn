#include "WeaponManager.h"
#include "WeaponComponent.h"
#include "Shotgun.h"
#include "Rifle.h"
#include <SceneManager.h>
#include "CAudioEmitter.h"
#include <Scene.h>
#include <Entity.h>
#include "UIManager.h"

void damn::WeaponManager::Start()
{
	_uiManager = eden::SceneManager::getInstance()->FindEntity("MANAGERS")->GetComponent<UIManager>();
	_actualWeapon = GUN;
	_shotgun = false;

#ifdef _DEBUG
	_shotgun = true;
	_rifle = true;
#endif

	/*_weapons = std::vector<WeaponComponent*>(eden::SceneManager::getInstance()->GetCurrentScene()->GetEntityByID("Gun")->GetComponent<WeaponComponent>(),
		eden::SceneManager::getInstance()->GetCurrentScene()->GetEntityByID("Shotgun")->GetComponent<WeaponComponent>());*/
	_weapons = std::vector<WeaponComponent*>();
	_weapons.push_back(eden::SceneManager::getInstance()->GetCurrentScene()->GetEntityByID("Gun")->GetComponent<WeaponComponent>());
	_weapons.push_back(eden::SceneManager::getInstance()->GetCurrentScene()->GetEntityByID("Shotgun")->GetComponent<Shotgun>());
	_weapons.push_back(eden::SceneManager::getInstance()->GetCurrentScene()->GetEntityByID("Rifle")->GetComponent<Rifle>());
	std::pair<int,int> ammo = _weapons[_actualWeapon]->GetAmmo();
	_uiManager->ChangeWeapon(ammo.first, ammo.second, _actualWeapon);
}

void damn::WeaponManager::Shoot()
{
	_weapons[_actualWeapon]->Shoot();
	UpdateUIAmmo();
}

void damn::WeaponManager::Reload()
{
	_weapons[_actualWeapon]->Reload();
	UpdateUIAmmo();
}

void damn::WeaponManager::AddAmmo(int ammo)
{
	_ent->GetComponent<eden_ec::CAudioEmitter>()->Play();
	_weapons[_actualWeapon]->AddAmmo(ammo);
	UpdateUIAmmo();
}

void damn::WeaponManager::ChangeWeapon()
{
	//Si se están reproduciendo animaciones no se puede cambiar
	if (_weapons[_actualWeapon]->isAnyAnimPlaying()) return;
	_weapons[_actualWeapon]->SetVisible(false);
	_actualWeapon = static_cast<WEAPON>((static_cast<int>(_actualWeapon) + 1) % NUM_WEAPONS);
	_weapons[_actualWeapon]->SetVisible(true);
	std::pair<int,int> ammo = _weapons[_actualWeapon]->GetAmmo();
	_uiManager->ChangeWeapon(ammo.first, ammo.second, _actualWeapon);
}

void damn::WeaponManager::UnlockShotGun()
{
	_shotgun = true;
}

void damn::WeaponManager::UnlockRifle()
{
	_rifle = true;
}

void damn::WeaponManager::UpdateUIAmmo()
{
	std::pair<int, int> ammo = _weapons[_actualWeapon]->GetAmmo();
	_uiManager->UpdateAmmo(ammo.first, ammo.second);
}
