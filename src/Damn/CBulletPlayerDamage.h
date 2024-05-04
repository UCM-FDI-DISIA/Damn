#ifndef BULLET_PLAYER_DAMAGE
#define BULLET_PLAYER_DAMAGE

#include "CBulletDamage.h"

namespace damn {
	class CBulletPlayerDamage : public CBulletDamage {
	public:
		CBulletPlayerDamage() = default;
		~CBulletPlayerDamage() override = default;

		void Start() override;

		static std::string GetID() { return "BULLET_PLAYER_DAMAGE"; }

		void HasHitPlayer();
	};
}


#endif // BULLET_PLAYER_DAMAGE