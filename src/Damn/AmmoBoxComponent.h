#define _CRTDBG_MAP_ALLOC
#ifndef AMMO_BOX_COMPONENT_H
#define AMMO_BOX_COMPONENT_H

#include "Component.h"
#include "Vector3.h"

namespace eden_ec {
	class CTransform;
}

namespace damn {
	class AmmoBoxComponent : public eden_ec::Component
	{
	public:
		/// @brief Constructora por defecto
		AmmoBoxComponent() = default;

		/// @brief Destructora por defecto
		~AmmoBoxComponent() = default;

		/// @brief Construye el componente dado unos argumentos. Se obtendrán de una lectura de un .lua
		/// @param args Argumentos leídos de .lua
		void Init(eden_script::ComponentArguments* args) override {};

		/// @brief Metodo update heredado de Component 
		/// @param t El tiempo entre frames calculado por el motor
		void Update(float t) override;

		/// @brief Callback para ecuperar municion al jugador
		void PickUpAmmo();

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "AMMO_BOX_COMPONENT"; }

	protected:
		/// @brief Metodo Awake override de Component
		void Awake() override {};

		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes
		void Start() override;
	private:
		/// @brief Referencia al Transform
		eden_ec::CTransform* _transform;
		
		/// @brief Velocidad de rotacion
		float _rotationSpeed = 70;

		/// @brief Contador de tiempo
		float _timeCounter = 0;

		/// @brief Factor de escala
		float _scaleGrowth = 1.2;

		/// @brief Escala minima
		float _minScale = 1;

		/// @brief Tiempo de vida
		float _lifeTime = 5;

		/// @brief Municion dada
		int _ammoGiven = 3;

		/// @brief Escala inicial
		eden_utils::Vector3 _originalScale;
	};
}
#endif
