#ifndef _MOVEMENT_CONTROLLER_H
#define _MOVEMENT_CONTROLLER_H

#include <Component.h>
#include <Vector3.h>
#include <CRigidBody.h>

namespace damn {
	class MovementController : public eden_ec::Component
	{
	public:
		MovementController() = default;

		~MovementController() override = default;

		/// @brief Construye el componente dado unos argumentos. Se obtendran de una lectura de un .lua
		/// @param args Argumentos leidos de .lua
		void Init(eden_script::ComponentArguments* args) override;

		/// @brief Metodo Awake override de Component
		void Awake() override {};

		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes, en este caso el RigidBody de la entidad
		void Start() override;

		/// @brief Metodo update heredado de Component 
		/// @param deltaTime El tiempo entre frames calculado por el motor
		void Update(float deltaTime) override;

		/// @brief Establece la direccion en la que va a avanzar la entidad
		/// @param newDir Nueva direccion de la entidad
		void SetDirection(eden_utils::Vector3 newDir);

		static std::string GetID() { return "MOVEMENT_CONTROLLER"; }
	private:
		eden_utils::Vector3 _direction;
		float _speed;
		eden_ec::CRigidBody* _rigidBody;
	};
}


#endif