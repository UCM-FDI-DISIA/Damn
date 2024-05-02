#include "ButtonFunctions.h"

#include "ScriptManager.h"
#include "LuaManager.h"
#include "SceneManager.h"
#include <EdenMaster.h>

void damn::ButtonFunctions::Start() {
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();
	scriptM->Regist(*this, "MainMenu", &damn::ButtonFunctions::StartGame, "StartGame", this);
	scriptM->Regist(*this, "MainMenu", &damn::ButtonFunctions::Exit, "Exit", this);
	scriptM->SetGlobal(this, "MainMenu");
}

void damn::ButtonFunctions::StartGame() {
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->ChangeScene("DamnGame");
}

void damn::ButtonFunctions::OptionsMenu() {

}

void damn::ButtonFunctions::Exit() {
	eden::Master::getInstance()->CloseApplication();
}