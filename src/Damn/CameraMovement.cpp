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

namespace eden_ec {

	CameraMovement::CameraMovement(float sensivity) : _sensivity(sensivity), _mouseDirection(std::pair<int, int>()) {};

	void CameraMovement::Start() {
		_transform = _ent->GetComponent<CTransform>();
		_rb = _ent->GetComponent<CRigidBody>();
		_inputMngr = eden_input::InputManager::getInstance();

		eden_render::RenderManager* renderMngr = eden_render::RenderManager::getInstance();
		renderMngr->SetRelativeMouseMode(true);

		eden_ec::CCamera* cam = _ent->GetComponent<eden_ec::CCamera>();
		if (cam) {
			cam->SetNearClipDistance(0.1);
		}

		_transform->SetRotation(eden_utils::Quaternion::Identity());
	}
	void CameraMovement::Init(eden_script::ComponentArguments* args) {
		_sensivity = args->GetValueToFloat("Sensivity");
	}
	void CameraMovement::SetMouseDirection(std::pair<int, int> mouseDir)
	{
		_mouseDirection = mouseDir;
	}

	void CameraMovement::Update(float dt) {
		 
		_transform->Yaw(-dt * _mouseDirection.first * _sensivity);
		_transform->LocalPitch(-dt * _mouseDirection.second * _sensivity);
		if (abs(_transform->GetRotation().ToEuler().GetX()) > 1) { //Limita el pitch de la c�mara
			_transform->LocalPitch(dt * _mouseDirection.second * _sensivity);
		}
		/*eden_utils::Vector3 movement = { 0,0,0 };

		//bool vectorChanged = false;

		//if (_inputMngr->IsKeyHeld('w')) {
		//	movement += eden_utils::Vector3(0, 0, -1);
		//	vectorChanged = true;
		//}
		//if (_inputMngr->IsKeyHeld('s')) {
		//	movement += eden_utils::Vector3(0, 0, 1);
		//	vectorChanged = true;
		//}
		//if (_inputMngr->IsKeyHeld('d')) {
		//	movement += eden_utils::Vector3(1, 0, 0);
		//	vectorChanged = true;
		//}
		//if (_inputMngr->IsKeyHeld('a')) {
		//	movement += eden_utils::Vector3(-1, 0, 0);
		//	vectorChanged = true;
		//}

		//if (vectorChanged) movement.Normalize();

		//_rb->ApplyForce(_transform->GetRotation() * movement * 2000 * dt);

		// _transform->Translate(movement * dt);
#pragma endregion
#ifdef _DEBUG
		//std::cout << "MOUSE DIR:\nX: " + std::to_string(mouseDir.first) + "\nY: " + std::to_string(mouseDir.second) + '\n';
#endif
	}
	void CameraMovement::SetMouseDirection(std::pair<int, int> mouseDir)
	{
		_mouseDirection = mouse
}*/
	}
}