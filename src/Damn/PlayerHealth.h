#ifndef PLAYER_HEALTH_H_
#define PLAYER_HEALTH_H_

#include "Health.h"

namespace damn {
	class UIManager;
	class PlayerHealth : public Health
	{
	public:
		/// @brief Constructora por defecto
		PlayerHealth() = default;

		/// @brief Destructora por defecto
		~PlayerHealth() override = default;

		/// @brief Metodo heredado de Component
		void Start() override;

		/// @brief Metodo Awake override de Component
		void Awake() override {};

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "PLAYER_HEALTH"; }

		/// @brief Quita vida al jugador
		void LoseHealth(int health) override; 

		/// @brief Avisa al GameManager de que el jugador ha muerto
		void Die() override;

		/// @brief Comprueba si el jugador esta muerto
		/// @return True si el jugador esta muerto, false en caso contrario
		inline bool isDead() { return _dead; }

	private:
		/// @brief Referencia al UIManager
		UIManager* _uiManager = nullptr;

		/// @brief Contador de tiempo
		float _timer = 0;

		/// @brief Booleano para controlar el estado de vida del jugador
		bool _dead = false;
	};
}

#endif // PLAYER_HEALTH_H_