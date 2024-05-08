#include "SoundController.h"
#include <SceneManager.h>
#include <Entity.h>
#include <CAudioEmitter.h>

bool damn::SoundController::_alreadyFound = false;

void damn::SoundController::Start() {
	if (!_alreadyFound) {
		eden::SceneManager::getInstance()->AddEntityToDontDestroyOnLoad(_ent, true);
		_alreadyFound = true;
	}
}