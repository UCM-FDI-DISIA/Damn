#include "UIManager.h"
#include "SceneManager.h"
#include "Entity.h"
#include "CBar.h"
#include "CText.h"
#include "CImage.h"

void damn::UIManager::UpdateHealthBar(float value, float maxValue)
{
	if (_ents[HEALTH_BAR] != nullptr) {
		_ents[HEALTH_BAR]->GetComponent<eden_ec::CBar>()->SetBarPercentage(value / maxValue * 100);
	}
}

void damn::UIManager::UpdateAmmo(int magazineAmmo, int leftAmmo)
{
	if (_ents[AMMO_TEXT] != nullptr) {
		std::string text = std::to_string(magazineAmmo) + "/" + std::to_string(leftAmmo);
		_ents[AMMO_TEXT]->GetComponent<eden_ec::CText>()->SetNewText(text);
	}
}

void damn::UIManager::ChangeWeapon(int magazineAmmo, int leftAmmo, int numWeapon)
{
	UpdateAmmo(magazineAmmo, leftAmmo);
	if (_ents[GUN_IMAGE] != nullptr && numWeapon >= 0 && numWeapon < _weaponImages.size()) {
		_ents[GUN_IMAGE]->GetComponent<eden_ec::CImage>()->SetMaterial(_weaponImages[numWeapon]);
	}
}

void damn::UIManager::SetEnemiesLeft(int enemies)
{
	if (_ents[ENEMIES_LEFT_TEXT] != nullptr) {
		_ents[ENEMIES_LEFT_TEXT]->GetComponent<eden_ec::CText>()->SetNewText(ENEMIES_LEFT + std::to_string(enemies));
	}
}

void damn::UIManager::SetTimeLeft(int time)
{
	if (_ents[TIME_TEXT] != nullptr) {
		_ents[TIME_TEXT]->GetComponent<eden_ec::CText>()->SetNewText(TIME_LEFT + std::to_string(time));
	}
}

void damn::UIManager::Update(float dt)
{
}

void damn::UIManager::Awake()
{
	for (int i = 0; i < _ids.size(); ++i) {
		_ents[i] = eden::SceneManager::getInstance()->FindEntity(_ids[i]);
	}
}
