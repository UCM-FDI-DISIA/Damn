#include "ButtonFunctions.h"

#include "ScriptManager.h"
#include "LuaManager.h"
#include "SceneManager.h"
#include <InputManager.h>
#include <RenderManager.h>
#include <CText.h>
#include <Entity.h>
#include <AudioManager.h>
#include <CBar.h>
#include <CButton.h>
#include <Scene.h>
#include <RenderManager.h>

damn::ButtonFunctions::ButtonFunctions() {
	Register();
}

void damn::ButtonFunctions::Init(eden_script::ComponentArguments* args) {
	Register();
}

void damn::ButtonFunctions::Update(float t) {
	if (eden::SceneManager::getInstance()->GetCurrentScene()->GetSceneID() == "OptionsMenu" || eden::SceneManager::getInstance()->GetCurrentScene()->GetSceneID() == "PauseMenu") {
		if (_iterations == 1) {
			eden_ec::Entity* offButton = eden::SceneManager::getInstance()->FindEntity("FullscreenButtonOff");
			eden_ec::Entity* onButton = eden::SceneManager::getInstance()->FindEntity("FullscreenButtonOn");
			if (!eden_render::RenderManager::getInstance()->IsFullScreen()) {
				offButton->GetComponent<eden_ec::CButton>()->Show();
				onButton->GetComponent<eden_ec::CButton>()->Hide();
			}
			else {
				offButton->GetComponent<eden_ec::CButton>()->Hide();
				onButton->GetComponent<eden_ec::CButton>()->Show();
			}
		}
		_iterations++;
		ChangeResolutionText();
	}
}

void damn::ButtonFunctions::Register() {
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();
	scriptM->Regist(*this, "Buttons", &damn::ButtonFunctions::Click, "Click", this);
	scriptM->SetGlobal(this, "Buttons");
}

void damn::ButtonFunctions::Click() {
	eden_ec::Entity* other = luabridge::getGlobal(eden_script::ScriptManager::getInstance()->GetLuaManager()->GetLuaState(), "selfButton");

	if (other->GetEntityID() == "PlayButton") StartGame();
	else if (other->GetEntityID() == "SettingsButton") OptionsMenu();
	else if (other->GetEntityID() == "ExitButton") Exit();
	else if (other->GetEntityID() == "FullscreenButtonOff" || other->GetEntityID() == "FullscreenButtonOn") SetFullscreen();
	else if (other->GetEntityID() == "BackButton") Return();
	else if (other->GetEntityID() == "ResolutionsPreviousButton") PreviousResolution();
	else if (other->GetEntityID() == "ResolutionsForwardButton") NextResolution();
	else if (other->GetEntityID() == "VolumeDownButton") VolumeDown();
	else if (other->GetEntityID() == "VolumeUpButton") VolumeUp();
	else if (other->GetEntityID() == "MainMenuButton") BackToMainMenu();
}

void damn::ButtonFunctions::StartGame() {
	eden::SceneManager::getInstance()->ChangeScene("DamnGame_level1");
}

void damn::ButtonFunctions::OptionsMenu() {
	eden::SceneManager::getInstance()->PushScene("OptionsMenu");
}

void damn::ButtonFunctions::Exit() {
	eden_input::InputManager::getInstance()->SetCloseWindow();
}

void damn::ButtonFunctions::Return() {
	eden::SceneManager::getInstance()->PopScene();
}

void damn::ButtonFunctions::SetFullscreen() {
	eden_ec::Entity* offButton = eden::SceneManager::getInstance()->FindEntity("FullscreenButtonOff");
	eden_ec::Entity* onButton = eden::SceneManager::getInstance()->FindEntity("FullscreenButtonOn");
	if (eden_render::RenderManager::getInstance()->IsFullScreen()) {
		offButton->GetComponent<eden_ec::CButton>()->Show();
		onButton->GetComponent<eden_ec::CButton>()->Hide();
	}
	else {
		offButton->GetComponent<eden_ec::CButton>()->Hide();
		onButton->GetComponent<eden_ec::CButton>()->Show();
	}
	offButton->GetComponent<eden_ec::CButton>()->Resize();
	onButton->GetComponent<eden_ec::CButton>()->Resize();
	eden_render::RenderManager::getInstance()->FullScreen();
}

void damn::ButtonFunctions::NextResolution() {
	eden_render::RenderManager::getInstance()->NextResolutuion();
	ChangeResolution();
}

void damn::ButtonFunctions::PreviousResolution() {
	eden_render::RenderManager::getInstance()->PreviousResolution();
	ChangeResolution();
}

void damn::ButtonFunctions::ChangeResolution() {
	eden_render::RenderManager::getInstance()->ChangeResolution();
	ChangeResolutionText();
}

void damn::ButtonFunctions::ChangeResolutionText() {
	std::pair aux = eden_render::RenderManager::getInstance()->GetResolution();
	std::string text = std::to_string(aux.first) + "x" + std::to_string(aux.second);
	eden_ec::Entity* _res = eden::SceneManager::getInstance()->FindEntity("ResolutionsText");
	if (_res != nullptr) {
		_res->GetComponent<eden_ec::CText>()->SetNewText(text);
	}
}

void damn::ButtonFunctions::VolumeUp() {
	ChangeVolume(0.05);
}

void damn::ButtonFunctions::VolumeDown() {
	ChangeVolume(-0.05);
}

void damn::ButtonFunctions::ChangeVolume(float num) {
	float aux = eden_audio::AudioManager::GetInstance()->GetGlobalVolume() + num;
	eden_audio::AudioManager::GetInstance()->SetGlobalVolume(aux);
	ChangeVolumeBar();
}

void damn::ButtonFunctions::ChangeVolumeBar() {
	eden_ec::Entity* _vol = eden::SceneManager::getInstance()->FindEntity("VolumeBar");
	if (_vol != nullptr) {
		_vol->GetComponent<eden_ec::CBar>()->SetBarPercentage(eden_audio::AudioManager::GetInstance()->GetGlobalVolume() * 100);
	}
}

void damn::ButtonFunctions::BackToMainMenu() {
	eden::SceneManager::getInstance()->ChangeScene("Menu");
}