#ifndef BULLET_ENEMY_DAMAGE
#define BULLET_ENEMY_DAMAGE

#include "BulletDamage.h"

namespace damn {
	class BulletEnemyDamage : public BulletDamage {
	public:
		/// @brief Constructora por defecto
		BulletEnemyDamage() = default;

		/// @brief Destructora por defecto
		~BulletEnemyDamage() override = default;

		/// @brief Callback de colision con el enemigo
		void HasHitEnemy();

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "BULLET_ENEMY_DAMAGE"; }
	protected:
		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes
		void Start() override;
	};
}


#endif // BULLET_ENEMY_DAMAGE