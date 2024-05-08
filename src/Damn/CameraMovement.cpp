#include "CameraMovement.h"

#include "Entity.h"

#include "Transform.h"
#include "CRigidBody.h"
#include "CCamera.h"

#include "ComponentArguments.h"

#include "RenderManager.h"
#include "InputManager.h"

#include <math.h>

#ifdef _DEBUG
#include <iostream>
#endif

damn::CameraMovement::CameraMovement(float sensivity) : _sensivity(sensivity), _mouseDirection(std::pair<int, int>()) {};

void damn::CameraMovement::Start() {
	_transform = _ent->GetComponent<eden_ec::CTransform>();
	_rb = _ent->GetComponent<eden_ec::CRigidBody>();
	_inputMngr = eden_input::InputManager::getInstance();

	eden_render::RenderManager* renderMngr = eden_render::RenderManager::getInstance();
	renderMngr->SetRelativeMouseMode(true);

	eden_ec::CCamera* cam = _ent->GetComponent<eden_ec::CCamera>();
	if (cam) {
		cam->SetNearClipDistance(0.1);
	}

	_transform->SetRotation(eden_utils::Quaternion::Identity());
}
void damn::CameraMovement::Init(eden_script::ComponentArguments* args) {
	_sensivity = args->GetValueToFloat("Sensivity");
}
void damn::CameraMovement::SetMouseDirection(std::pair<int, int> mouseDir)
{
	_mouseDirection = mouseDir;
}

void damn::CameraMovement::Update(float dt) {

	_transform->Yaw(-dt * _mouseDirection.first * _sensivity);
	_transform->LocalPitch(-dt * _mouseDirection.second * _sensivity);
	if (abs(_transform->GetRotation().ToEuler().GetX()) > 1) //Limita el pitch de la cámara
	{ 
		_transform->LocalPitch(dt * _mouseDirection.second * _sensivity);
	}
}