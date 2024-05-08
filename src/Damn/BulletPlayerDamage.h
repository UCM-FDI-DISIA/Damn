#ifndef BULLET_PLAYER_DAMAGE
#define BULLET_PLAYER_DAMAGE

#include "BulletDamage.h"

namespace damn {
	class BulletPlayerDamage : public BulletDamage {
	public:
		BulletPlayerDamage() = default;
		~BulletPlayerDamage() override = default;

		void HasHitPlayer(); //Método público para comprobación de colisión con el jugador accesible desde Lua

		static std::string GetID() { return "BULLET_PLAYER_DAMAGE"; }

	protected:
		void Start() override;
	};
}
#endif // BULLET_PLAYER_DAMAGE