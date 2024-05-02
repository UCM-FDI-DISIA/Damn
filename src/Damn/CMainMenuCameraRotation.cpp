#include "CMainMenuCameraRotation.h"
#include <Entity.h>
#include <Transform.h>
#include <ComponentArguments.h>

damn::CMainMenuCameraRotation::CMainMenuCameraRotation(float speed) : _movingSpeed(speed), _transform(nullptr) {

}

void damn::CMainMenuCameraRotation::Init(eden_script::ComponentArguments* args) {
	_movingSpeed = args->GetValueToFloat("Speed");
}

void damn::CMainMenuCameraRotation::Start() {
	_transform = _ent->GetComponent<eden_ec::CTransform>();
}

void damn::CMainMenuCameraRotation::Update(float t) {
	_transform->Yaw(-t * _movingSpeed);
}