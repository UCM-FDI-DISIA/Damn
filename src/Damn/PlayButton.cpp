#include "PlayButton.h"

#include "ScriptManager.h"
#include "LuaManager.h"
#include "SceneManager.h"

namespace eden_ec {
	void PlayButton::Start() {
		eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();
		scriptM->Regist(*this, "PlayButton", &eden_ec::PlayButton::StartGame, "StartGame", this);
		scriptM->SetGlobal(this, "PlayButton");
	}

	void PlayButton::StartGame() {
		eden::SceneManager* scnManager = eden::SceneManager::getInstance();
		scnManager->ChangeScene("DamnGame");
	}
}