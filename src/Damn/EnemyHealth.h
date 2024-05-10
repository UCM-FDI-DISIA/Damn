#ifndef ENEMY_HEALTH_H_
#define ENEMY_HEALTH_H_

#include "Health.h"

namespace damn {
	class GameManager;
	class EnemyHealth : public Health
	{
	public:
		/// @brief Constructora por defecto
		EnemyHealth() = default;

		/// @brief Destructora por defecto
		~EnemyHealth() override;

		/// @brief Quita vida al enemigo
		/// @param health Cantidad de vida que va a perder
		void LoseHealth(int health) override;

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "ENEMY_HEALTH"; }

	protected:
		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes
		void Start() override;

		/// @brief En caso de morir, se le comunica al GameManager
		void Die() override;

	private:
		/// @brief Referencia al GameManager
		GameManager* _gameManager = nullptr;
	};
}
#endif // ENEMY_HEALTH_H_