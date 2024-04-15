#define _CRTDBG_MAP_ALLOC
#include "Hito2MenuPausa.h"

#include <InputManager.h>
#include <ScriptManager.h>
#include <LuaManager.h>

#include"CLuaBehaviour.h"
#include "SceneManager.h"

const std::string eden_ec::Hito2MenuPausa::_id = "PAUSA";

eden_ec::Hito2MenuPausa::Hito2MenuPausa() {

	////PRUEBA BOTON
	eden_script::LuaManager* scriptM = eden_script::ScriptManager::getInstance()->GetLuaManager();
	scriptM->Regist(*this, "Pausa", &eden_ec::Hito2MenuPausa::ResumeGame, "Resume", this);
	scriptM->Regist(*this, "Pausa", &eden_ec::Hito2MenuPausa::ExitGame, "Exit", this);
	scriptM->Regist(*this, "Pausa", &eden_ec::Hito2MenuPausa::BackToMenu, "BackMenu", this);
	scriptM->SetGlobal(this, "Pausa");
	scriptM = nullptr;
}
void eden_ec::Hito2MenuPausa::Init(eden_script::ComponentArguments* args) {
}
void eden_ec::Hito2MenuPausa::Start() {
	inputManager = eden_input::InputManager::getInstance();
	
}

void eden_ec::Hito2MenuPausa::HandleInput() {

}

void eden_ec::Hito2MenuPausa::ResumeGame()
{
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->PopScene();
}

void eden_ec::Hito2MenuPausa::ExitGame()
{
	inputManager->SetCloseWindow();
}

void eden_ec::Hito2MenuPausa::BackToMenu()
{
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->ChangeScene("Menu");
}

void eden_ec::Hito2MenuPausa::Update(float dt) {

}