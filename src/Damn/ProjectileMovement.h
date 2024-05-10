#define _CRTDBG_MAP_ALLOC
#ifndef PROYECTILE_MOVEMENT_H
#define PROYECTILE_MOVEMENT_H

#include "Component.h"
#include "Vector3.h"

namespace eden_ec {
	class CTransform;
}

namespace damn {
	
	class ProjectileMovement : public eden_ec::Component
	{
	public:
		/// @brief Constructora por defecto
		ProjectileMovement() = default;

		/// @brief Destructora por defecto
		~ProjectileMovement() = default;

		/// @brief Metodo update heredado de Component 
		/// @param deltaTime El tiempo entre frames calculado por el motor
		void Update(float t) override;

		/// @brief Pone la direccion en la que se va a mover la entidad mediante su transform
		/// @param newDirection Direccion en la que se va a mover
		inline void SetDirection(eden_utils::Vector3 newDirection) { _direction = newDirection;}

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "PROYECTILE_MOVEMENT"; }

	protected:
		/// @brief Construye el componente dado unos argumentos. Se obtendran de una lectura de un .lua
		/// @param args Argumentos leidos de .lua
		void Init(eden_script::ComponentArguments* args) override;

		/// @brief Metodo Awake override de Component
		void Awake() override;

		/// @brief Metodo heredado de Component
		void Start() override;

		/// @brief Referencia al transform
		eden_ec::CTransform* _tr = nullptr;
	private:
		/// @brief Direccion de movimiento
		eden_utils::Vector3 _direction;

		/// @brief Velocidad de movimiento
		float _proyectileSpeed = 0;
	};
}

#endif

