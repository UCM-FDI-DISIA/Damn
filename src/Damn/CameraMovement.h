#include "Component.h"

#pragma once

namespace eden_script {
	class ComponentArguments;
}

namespace eden_input {
	class InputManager;
}

namespace eden_ec {
	class CTransform;
	class CRigidBody;

	class CameraMovement : public Component
	{
	public:
		CameraMovement() = default;
		CameraMovement(float sensivity);
		~CameraMovement() = default;

		void Init(eden_script::ComponentArguments* args) override;

		void Update(float dt);

		static std::string GetID() { return "CAMERA_MOVEMENT"; }

	protected:

		void Awake() override {};
		void Start() override;

	private:
		CTransform* _transform = nullptr;
		CRigidBody* _rb = nullptr;

		eden_input::InputManager* _inputMngr = nullptr;

		float _sensivity = 5.0f;
	};
}


