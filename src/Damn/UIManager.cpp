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
		_ents[AMMO_TEXT]->GetComponent<eden_ec::CText>()->SetNewText(text, false);
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
		_ents[ENEMIES_LEFT_TEXT]->GetComponent<eden_ec::CText>()->SetNewText(ENEMIES_LEFT + GetFormat(enemies), false);
	}
}

void damn::UIManager::SetTimeLeft(int time)
{
	if (_ents[TIME_TEXT] != nullptr) {
		_ents[TIME_TEXT]->GetComponent<eden_ec::CText>()->SetNewText(TIME_LEFT + GetFormat(time), false);
	}
}

void damn::UIManager::SetScore(int score)
{
	if (_ents[SCORE_TEXT] != nullptr) {
		_ents[SCORE_TEXT]->GetComponent<eden_ec::CText>()->SetNewText(SCORE + GetFormat(score));
	}
}

void damn::UIManager::SetRound(int round)
{
	if (_ents[ROUND_TEXT] != nullptr) {
		if (round > MAX_ROUND_NUMBER) {
			_ents[ROUND_TEXT]->GetComponent<eden_ec::CText>()->SetNewText(std::to_string(MAX_ROUND_NUMBER), false);
			return;
		}

		std::string text = "";
		std::string finalText = "";
		std::string n = std::to_string(round);
		int index = 2;
		for (int i = n.size() - 1; i >= 0; i--) {
			if (n[i] == '4') {
				text.push_back(_numbers[index - 2]);
				text.push_back(_numbers[index - 1]);
			}
			else if (n[i] == '9') {
				text.push_back(_numbers[index - 2]);
				text.push_back(_numbers[index]);
			}
			else if (n[i] != '0') {
				int num = n[i] - '0';
				if (n[i] - '0' >= 5) {
					text.push_back(_numbers[index - 1]);
					for (int i = 0; i < num - 5; ++i) {
						text.push_back(_numbers[index - 2]);
					}
				}
				else {
					for (int i = 0; i < num; ++i) {
						text.push_back(_numbers[index - 2]);
					}
				}
			}
			finalText = text + finalText;
			text.clear();
			index += 2;
		}
		_ents[ROUND_TEXT]->GetComponent<eden_ec::CText>()->SetNewText(finalText, false);
	}
}

void damn::UIManager::Update(float dt)
{
}

std::string damn::UIManager::GetFormat(int value)
{
	if (value > MAX_UI_NUMBER) return std::to_string(MAX_UI_NUMBER);
	else {
		std::string result = "";
		for (int i = (MAX_UI_NUMBER + 1)/10; i >= 10 && value / i <= 0; i /= 10) {
			result.push_back('0');
		}
		result += std::to_string(value);
		return result;
	}
}

void damn::UIManager::Awake()
{
	for (int i = 0; i < _ids.size(); ++i) {
		_ents[i] = eden::SceneManager::getInstance()->FindEntity(_ids[i]);
	}
}
