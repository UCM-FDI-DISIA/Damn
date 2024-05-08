#include "MainMenuCameraRotation.h"
#include <Entity.h>
#include <Transform.h>
#include <ComponentArguments.h>
#include <SceneManager.h>
#include <Scene.h>

float damn::MainMenuCameraRotation::_globalRotation = 0.0f;
bool damn::MainMenuCameraRotation::_isOnMainMenu = true;

damn::MainMenuCameraRotation::MainMenuCameraRotation(float speed) : _movingSpeed(speed), _transform(nullptr), _localRotation(0.0f) {

}

void damn::MainMenuCameraRotation::Init(eden_script::ComponentArguments* args) {
	_movingSpeed = args->GetValueToFloat("Speed");
}

void damn::MainMenuCameraRotation::Start() {
	_transform = _ent->GetComponent<eden_ec::CTransform>();
	if(_localRotation != _globalRotation) _transform->Yaw(_globalRotation);
	if (eden::SceneManager::getInstance()->GetCurrentScene()->GetSceneID() == "Menu") _isOnMainMenu = true;
	else _isOnMainMenu = false;
}

void damn::MainMenuCameraRotation::Update(float t) {
	if (eden::SceneManager::getInstance()->GetCurrentScene()->GetSceneID() == "Menu" && !_isOnMainMenu) {
		_transform->Yaw(_globalRotation - _localRotation);
		_isOnMainMenu = true;
	}
	_globalRotation += -t * _movingSpeed;
	_localRotation = _globalRotation;
	_transform->Yaw(_movingSpeed * -t);
}