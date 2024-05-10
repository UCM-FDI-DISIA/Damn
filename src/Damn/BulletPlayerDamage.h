#ifndef BULLET_PLAYER_DAMAGE
#define BULLET_PLAYER_DAMAGE

#include "BulletDamage.h"

namespace damn {
	class BulletPlayerDamage : public BulletDamage {
	public:
		/// @brief Constructora por defecto
		BulletPlayerDamage() = default;

		/// @brief Destructora por defecto
		~BulletPlayerDamage() override = default;

		/// @brief Callback de colision con el jugador
		void HasHitPlayer(); 

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "BULLET_PLAYER_DAMAGE"; }

	protected:
		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes
		void Start() override;
	};
}
#endif // BULLET_PLAYER_DAMAGE