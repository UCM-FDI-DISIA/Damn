#include "CMainMenuCameraRotation.h"
#include <Entity.h>
#include <Transform.h>
#include <ComponentArguments.h>
#include <SceneManager.h>
#include <Scene.h>

float damn::CMainMenuCameraRotation::_globalRotation = 0.0f;
bool damn::CMainMenuCameraRotation::_isOnMainMenu = true;

damn::CMainMenuCameraRotation::CMainMenuCameraRotation(float speed) : _movingSpeed(speed), _transform(nullptr), _localRotation(0.0f) {

}

void damn::CMainMenuCameraRotation::Init(eden_script::ComponentArguments* args) {
	_movingSpeed = args->GetValueToFloat("Speed");
}

void damn::CMainMenuCameraRotation::Start() {
	_transform = _ent->GetComponent<eden_ec::CTransform>();
	if(_localRotation != _globalRotation) _transform->Yaw(_globalRotation);
	if (eden::SceneManager::getInstance()->GetCurrentScene()->GetSceneID() == "Menu") _isOnMainMenu = true;
	else _isOnMainMenu = false;
}

void damn::CMainMenuCameraRotation::Update(float t) {
	if (eden::SceneManager::getInstance()->GetCurrentScene()->GetSceneID() == "Menu" && !_isOnMainMenu) {
		_transform->Yaw(_globalRotation - _localRotation);
		_isOnMainMenu = true;
	}
	_globalRotation += -t * _movingSpeed;
	_localRotation = _globalRotation;
	_transform->Yaw(_movingSpeed * -t);
}