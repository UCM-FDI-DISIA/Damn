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
#include <CAudioEmitter.h>
#include "GameManager.h"

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
	
	std::string tmp = other->GetEntityID();
	std::string id = "";
	for (int i = 0;i < tmp.size() && tmp[i] != '_'; ++i) {
		id.push_back(tmp[i]);
	}

	if (id == "PlayButton") StartGame();
	else if (id == "SettingsButton") OptionsMenu();
	else if (id == "ExitButton") Exit();
	else if (id == "FullscreenButtonOff" || id == "FullscreenButtonOn") SetFullscreen();
	else if (id == "BackButton") Return();
	else if (id == "ResolutionsPreviousButton") PreviousResolution();
	else if (id == "ResolutionsForwardButton") NextResolution();
	else if (id == "VolumeDownButton") VolumeDown();
	else if (id == "VolumeUpButton") VolumeUp();
	else if (id == "MainMenuButton") BackToMainMenu();

	PlaySound("buttonsound.wav", 0.3f);
}

void damn::ButtonFunctions::StartGame() {
	eden::SceneManager* mngr = eden::SceneManager::getInstance();
	mngr->ChangeScene("DamnGame_level1");
	mngr->FindEntity("GAME_MANAGER")->GetComponent<GameManager>()->Play();
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
	eden::SceneManager* mngr = eden::SceneManager::getInstance();
	mngr->ChangeScene("Menu");
	eden_ec::Entity* tmp = mngr->FindEntity("GAME_MANAGER");
	if (tmp) tmp->SetAlive(false);
}

void damn::ButtonFunctions::PlaySound(std::string filename, float volume, bool loop) {
	eden_ec::CAudioEmitter* _emitter = eden::SceneManager::getInstance()->FindEntity("SoundsControllerEntity")->GetComponent<eden_ec::CAudioEmitter>();
	_emitter->ChangeClip(filename);
	_emitter->Play();
	_emitter->SetVolume(volume);
	_emitter->SetLoop(loop);
}