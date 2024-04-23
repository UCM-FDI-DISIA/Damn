#include "DamnMain.h"
#include "SceneManager.h"
#include "ComponentFactory.h"

#include "PlayButton.h"
#include "Hito2MenuPausa.h"
#include "Hito2Prueba.h"
#include "ChangeCameraBackground.h"

void RegisterComponents() {
	eden_ec::ComponentFactory* factory = eden_ec::ComponentFactory::getInstance();
	factory->RegisterComponent<eden_ec::Hito2MenuPausa>();
	factory->RegisterComponent<eden_ec::Hito2Prueba>();
	factory->RegisterComponent<eden_ec::PlayButton>();
	factory->RegisterComponent<ChangeCameraBackground>();
}

void LoadScene() {
	eden::SceneManager* scnManager = eden::SceneManager::getInstance();
	scnManager->PushScene("Menu");
}