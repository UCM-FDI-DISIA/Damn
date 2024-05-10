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
}

namespace damn {
	class CameraMovement : public eden_ec::Component
	{
	public:
		/// @brief Constructora por defecto
		CameraMovement() = default;

		/// @brief Constructora
		/// @param sensivity Sensibilidad de movimiento
		CameraMovement(float sensivity);

		/// @brief Destructora por defecto
		~CameraMovement() = default;

		/// @brief Construye el componente dado unos argumentos. Se obtendrán de una lectura de un .lua
		/// @param args Argumentos leídos de .lua
		void Init(eden_script::ComponentArguments* args) override;

		/// @brief Metodo update heredado de Component 
		/// @param dt El tiempo entre frames calculado por el motor
		void Update(float dt);

		/// @brief Guarda el input del raton
		void SetMouseDirection(std::pair<int, int> mouseDir);

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "CAMERA_MOVEMENT"; }

	protected:
		/// @brief Metodo Awake override de Component
		void Awake() override {};

		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes
		void Start() override;

	private:
		/// @brief Referencia al Transform
		eden_ec::CTransform* _transform = nullptr;

		/// @brief Referencia al Rigidbody
		eden_ec::CRigidBody* _rb = nullptr;

		/// @brief Referencia al InputManager
		eden_input::InputManager* _inputMngr = nullptr;

		/// @brief Sensibilidad de la camara
		float _sensivity = 5.0f;

		/// @brief Input guardado
		std::pair<int, int> _mouseDirection;
	};
}


