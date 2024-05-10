#include "UIManager.h"
#include "SceneManager.h"
#include "Entity.h"
#include "CBar.h"
#include "CText.h"
#include "CImage.h"
#include "GameManager.h"
#include "Scene.h"
#include "CameraMovement.h"
#include "Transform.h"

#include "RenderManager.h"

void damn::UIManager::UpdateHealthBar(float value, float maxValue)
{
	if (_ents[HEALTH_BAR] != nullptr) {
		_ents[HEALTH_BAR]->GetComponent<eden_ec::CBar>()->SetBarPercentage(value / maxValue * 100);
		if (_healthVignette == nullptr) _healthVignette = eden::SceneManager::getInstance()->FindEntity("healthEffect_0");
		if (value <= 0) {
			_healthVignette->GetComponent<eden_ec::CImage>()->SetMaterial("loseHealth100.png");
			_healthVignette->SetActive(true);
		}
		else if (value <= maxValue*0.25) {
			_healthVignette->GetComponent<eden_ec::CImage>()->SetMaterial("loseHealth75.png");
			_healthVignette->SetActive(true);
		}
		else if (value <= maxValue*0.5) {
			_healthVignette->GetComponent<eden_ec::CImage>()->SetMaterial("loseHealth50.png");
			_healthVignette->SetActive(true);
		}
		else if (value <= maxValue*0.75) {
			_healthVignette->GetComponent<eden_ec::CImage>()->SetMaterial("loseHealth25.png");
			_healthVignette->SetActive(true);
		}
		else {
			_healthVignette->SetActive(false);
		}
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
		for (int i = (int)(n.size()) - 1; i >= 0; i--) {
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

void damn::UIManager::SetupWinMenu(int score)
{
	_winMenuState = VIGNETTE;
	_finalScore = score;

	for (int i = 0; i < _ents.size(); ++i) {
		if(_ents[i]) _ents[i]->SetAlive(false);
		_ents[i] = nullptr;
	}
}

void damn::UIManager::SetupLoseMenu(int score)
{
	_loseMenuState = CAMERA_ROTATION;
	_finalScore = score;

	for (int i = 0; i < _ents.size(); ++i) {
		if (_ents[i]) _ents[i]->SetAlive(false);
		_ents[i] = nullptr;
	}
}

void damn::UIManager::StepWinMenu(float timePassed)
{
	if (timePassed >= NEXT_WINMENU_STEP && _winMenuState == VIGNETTE) {
		eden::SceneManager::getInstance()->InstantiateBlueprint("VignetteEffect");
		_winMenuState = WIN_TEXT;
	}
	if (timePassed >= NEXT_WINMENU_STEP*2 && _winMenuState == WIN_TEXT) {
		eden_ec::Entity* ent = eden::SceneManager::getInstance()->InstantiateBlueprint("WinText");
		_winMenuState = FINAL_SCORE_TEXT;
	}
	if (timePassed >= NEXT_WINMENU_STEP*3 && _winMenuState == FINAL_SCORE_TEXT) {
		eden::SceneManager::getInstance()->InstantiateBlueprint("FinalScoreText");
		_winMenuState = WIN_SCORE_TEXT;
	}
	if (timePassed >= NEXT_WINMENU_STEP*4 && _winMenuState == WIN_SCORE_TEXT) {
		eden::SceneManager::getInstance()->InstantiateBlueprint("ScoreText")->GetComponent<eden_ec::CText>()->SetNewText(std::to_string(_finalScore));
		_winMenuState = MAIN_MENU_BUTTON;
	}
	if (timePassed >= NEXT_WINMENU_STEP*5 && _winMenuState == MAIN_MENU_BUTTON) {
		InstantiateMainMenuButton();
		_winMenuState = WIN_END;
	}
}

void damn::UIManager::StepLoseMenu(float timePassed) {
	if (timePassed >= NEXT_WINMENU_STEP && _loseMenuState == CAMERA_ROTATION) {
		_loseMenuState = LOSE_TEXT;
	}
	if (timePassed >= NEXT_WINMENU_STEP * 2 && _loseMenuState == LOSE_TEXT) {
		eden_ec::Entity* ent = eden::SceneManager::getInstance()->InstantiateBlueprint("LoseText");
		_loseMenuState = FINAL_LOSE_SCORE;
	}
	if (timePassed >= NEXT_WINMENU_STEP * 3 && _loseMenuState == FINAL_LOSE_SCORE) {
		eden::SceneManager::getInstance()->InstantiateBlueprint("FinalScoreText");
		_loseMenuState = LOSE_SCORE_TEXT;
	}
	if (timePassed >= NEXT_WINMENU_STEP * 4 && _loseMenuState == LOSE_SCORE_TEXT) {
		eden::SceneManager::getInstance()->InstantiateBlueprint("ScoreText")->GetComponent<eden_ec::CText>()->SetNewText(std::to_string(_finalScore));
		_loseMenuState = MAIN_MENU_LOSE;
	}
	if (timePassed >= NEXT_WINMENU_STEP * 5 && _loseMenuState == MAIN_MENU_LOSE) {
		InstantiateMainMenuButton();
		_loseMenuState = LOSE_END;
	}
}

void damn::UIManager::InstantiateMainMenuButton() {
	eden::SceneManager::getInstance()->InstantiateBlueprint("MainMenuButton");
	eden::SceneManager::getInstance()->InstantiateBlueprint("UI_Cursor");
	eden_render::RenderManager* renderMngr = eden_render::RenderManager::getInstance();
	renderMngr->SetRelativeMouseMode(false);
	renderMngr->SetWindowGrab(false);
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
	_healthVignette = nullptr;
	for (int i = 0; i < _ids.size(); ++i) {
		_ents[i] = eden::SceneManager::getInstance()->FindEntity(_ids[i]);
	}
	eden_ec::Entity* gM = eden::SceneManager::getInstance()->FindEntity("GAME_MANAGER");
	if (gM) {
		gM->GetComponent<GameManager>()->setUIManager(this);
	}

	if (!_healthVignette) {
		eden::SceneManager* mngr = eden::SceneManager::getInstance();
		_healthVignette = mngr->FindEntity("healthEffect_0");
		_healthVignette->SetActive(false);
	}
}
