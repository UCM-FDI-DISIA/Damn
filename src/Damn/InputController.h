#ifndef _INPUT_MANAGER_H
#define _INPUT_MANAGER_H

#include <Component.h>
#include<Transform.h>

namespace eden_ec {
	class CRigidBody;
}

namespace eden_input {
	class InputManager;
}

namespace damn {
	class MovementController;
	class WeaponManager;
	class CameraMovement;

	class InputController : public eden_ec::Component
	{
	public:
		/// @brief Constructora por defecto
		InputController() = default;

		/// @brief Destructora por defecto
		~InputController() override = default;

		/// @brief Metodo update heredado de Component 
		/// @param deltaTime El tiempo entre frames calculado por el motor
		void Update(float deltatime) override;

		/// @brief Limpia el estado de las direcciones dadas a los diferentes componentes
		void Clear();

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "INPUT_CONTROLLER"; }

	protected:
		/// @brief Construye el componente dado unos argumentos. Se obtendrán de una lectura de un .lua
		/// @param args Argumentos leídos de .lua
		void Init(eden_script::ComponentArguments* args) override {};

		/// @brief Metodo Awake override de Component
		void Awake() override {};

		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes
		void Start() override;

	private:
		/// @brief Referencia al componente de movimiento del jugador
		MovementController* _movementController = nullptr;

		/// @brief Referencia al manager de armas del jugador
		WeaponManager* _weaponManager = nullptr;

		/// @brief Referencia al componente para mover la camara
		CameraMovement* _cameraMovement = nullptr;

		/// @brief Referencia al Transform del jugador
		eden_ec::CTransform* _transform = nullptr;

		/// @brief Referencia al InputManager
		eden_input::InputManager* _inputManager = nullptr;
		
		/// @brief Referencia al RigidBody
		eden_ec::CRigidBody* _rb = nullptr;
	};
}
#endif 
