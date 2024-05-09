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
		InputController() = default;
		~InputController() override = default;

		/// @brief Metodo update heredado de Component 
		void Update(float deltatime) override;

		/// @brief Limpia el estado de las direcciones dadas a los diferentes componentes
		void Clear();

		static std::string GetID() { return "INPUT_CONTROLLER"; }

	protected:
		/// @brief Construye el componente dado unos argumentos. Se obtendrán de una lectura de un .lua
		/// @param args Argumentos leídos de .lua
		void Init(eden_script::ComponentArguments* args) override {};

		/// @brief Metodo Awake override de Component
		void Awake() override {};

		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes, en este caso el MovementController de la entidad
		void Start() override;

	private:
		MovementController* _movementController;
		WeaponManager* _weaponManager;
		CameraMovement* _cameraMovement;
		eden_ec::CTransform* _transform;
		eden_input::InputManager* _inputManager;
	};
}
#endif 
