#include "WeaponManager.h"
#include "WeaponComponent.h"
#include "Shotgun.h"
#include "Rifle.h"
#include <SceneManager.h>
#include "CAudioEmitter.h"
#include <Scene.h>
#include <Entity.h>
#include "UIManager.h"
#include "GameManager.h"

void damn::WeaponManager::Start()
{
	eden::SceneManager* mngr = eden::SceneManager::getInstance();
	if(!_uiManager) _uiManager = mngr->FindEntity("UI_MANAGER")->GetComponent<UIManager>();
	_actualWeapon = GUN;
	_weapons = std::vector<WeaponComponent*>();
	UnlockBaseWeapon();
	mngr->FindEntity("GAME_MANAGER")->GetComponent<GameManager>()->setPlayer(_ent);
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

void damn::WeaponManager::AddAmmo()
{
	_ent->GetComponent<eden_ec::CAudioEmitter>()->Play();
	int ammo = 0;
	switch (_actualWeapon)
	{
	case damn::WeaponManager::GUN:
		ammo = 6;
		break;
	case damn::WeaponManager::SHOTGUN:
		ammo = 4;
		break;
	case damn::WeaponManager::RIFLE:
		ammo = 2;
		break;
	default:
		break;
	}
	_weapons[_actualWeapon]->AddAmmo(ammo);
	UpdateUIAmmo();
}

void damn::WeaponManager::ChangeWeapon()
{
	//Si se están reproduciendo animaciones no se puede cambiar
	if (_weapons[_actualWeapon] && _weapons[_actualWeapon]->isAnyAnimPlaying()) return;
	_weapons[_actualWeapon]->SetVisible(false);
	_actualWeapon = static_cast<WEAPON>((static_cast<int>(_actualWeapon) + 1) % _numWeapons);
	_weapons[_actualWeapon]->SetVisible(true);
	std::pair<int,int> ammo = _weapons[_actualWeapon]->GetAmmo();
	if (_uiManager)
		_uiManager->ChangeWeapon(ammo.first, ammo.second, _actualWeapon);
}

void damn::WeaponManager::UnlockShotGun()
{
	if (!_hasDefaultWeapon) UnlockBaseWeapon();
	_weapons.push_back(eden::SceneManager::getInstance()->GetCurrentScene()->GetEntityByID("Shotgun")->GetComponent<Shotgun>());
	_numWeapons++;
	_weapons[_actualWeapon]->SetVisible(false);
	_actualWeapon = static_cast<WEAPON>((static_cast<int>(_numWeapons-1)));
	_weapons[_actualWeapon]->SetVisible(true);
	std::pair<int, int> ammo = _weapons[_actualWeapon]->GetAmmo();
	if (_uiManager)
		_uiManager->ChangeWeapon(ammo.first, ammo.second, _actualWeapon);
}

void damn::WeaponManager::UnlockRifle()
{
	if (!_hasDefaultWeapon) UnlockBaseWeapon();
	_weapons.push_back(eden::SceneManager::getInstance()->GetCurrentScene()->GetEntityByID("Rifle")->GetComponent<Rifle>());
	_numWeapons++;
	_weapons[_actualWeapon]->SetVisible(false);
	_actualWeapon = static_cast<WEAPON>((static_cast<int>(_numWeapons - 1)));
	_weapons[_actualWeapon]->SetVisible(true);
	std::pair<int, int> ammo = _weapons[_actualWeapon]->GetAmmo();
	if (_uiManager)
		_uiManager->ChangeWeapon(ammo.first, ammo.second, _actualWeapon);
}

void damn::WeaponManager::UpdateUIAmmo()
{
	std::pair<int, int> ammo = _weapons[_actualWeapon]->GetAmmo();
	if(_uiManager)
		_uiManager->UpdateAmmo(ammo.first, ammo.second);

}

void damn::WeaponManager::UnlockBaseWeapon()
{
	if (_hasDefaultWeapon) return; 
	_weapons.push_back(eden::SceneManager::getInstance()->GetCurrentScene()->GetEntityByID("Gun")->GetComponent<WeaponComponent>());
	_numWeapons++;
	_actualWeapon = static_cast<WEAPON>((static_cast<int>(_numWeapons - 1)));
	_weapons[_actualWeapon]->SetVisible(true);
	std::pair<int, int> ammo = _weapons[_actualWeapon]->GetAmmo();
	if (_uiManager)
		_uiManager->ChangeWeapon(ammo.first, ammo.second, _actualWeapon);
	_hasDefaultWeapon = true; 
}
