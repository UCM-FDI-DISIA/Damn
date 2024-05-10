#define _CRTDBG_MAP_ALLOC
#ifndef ENEMY_ATTACK_H
#define ENEMY_ATTACK_H

#include "Component.h"

namespace eden_ec {
	class CTransform;
	class Entity;
}

namespace damn {
	class EnemyAttack : public eden_ec::Component
	{
	public:
		/// @brief Constructora por defecto
		EnemyAttack() = default;

		/// @brief Destructora por defecto
		~EnemyAttack() = default;

		/// @brief Metodo update heredado de Component 
		/// @param t El tiempo entre frames calculado por el motor
		void Update(float t) override;

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "ENEMY_ATTACK"; }

	protected:
		/// @brief Construye el componente dado unos argumentos. Se obtendrán de una lectura de un .lua
		/// @param args Argumentos leídos de .lua
		void Init(eden_script::ComponentArguments* args) override;

		/// @brief Metodo Awake override de Component
		void Awake() override;

		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes
		void Start() override;
	private:
		/// @brief Referencia al jugador
		eden_ec::Entity* _player = nullptr;

		/// @brief Referencia al Transform
		eden_ec::CTransform* _tr = nullptr;

		/// @brief Referencia al Transform del jugador
		eden_ec::CTransform* _playerTr = nullptr;

		/// @brief Cadencia de ataque
		float _attackRate = 1;

		/// @brief Temporizador de ataque
		float _attackTimer = 0;

		/// @brief Velocidad de rotacion
		float _rotationSpeed = 0.4;

		/// @brief Coeficiente de rotacion
		int _rotationCoef = 1;
	};
}
#endif