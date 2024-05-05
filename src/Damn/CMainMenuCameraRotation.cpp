#include "CMainMenuCameraRotation.h"
#include <Entity.h>
#include <Transform.h>
#include <ComponentArguments.h>

damn::CMainMenuCameraRotation::CMainMenuCameraRotation(float speed) : _movingSpeed(speed), _transform(nullptr), _yawBeginning(0.0f) {

}

void damn::CMainMenuCameraRotation::Init(eden_script::ComponentArguments* args) {
	_movingSpeed = args->GetValueToFloat("Speed");
	_yawBeginning = args->GetValueToFloat("Beginning");
}

void damn::CMainMenuCameraRotation::Start() {
	_transform = _ent->GetComponent<eden_ec::CTransform>();
	_transform->Yaw(_yawBeginning);
}

void damn::CMainMenuCameraRotation::Update(float t) {
	_transform->Yaw(-t * _movingSpeed);
}