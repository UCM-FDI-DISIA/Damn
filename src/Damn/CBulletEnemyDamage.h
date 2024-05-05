#ifndef BULLET_ENEMY_DAMAGE
#define BULLET_ENEMY_DAMAGE

#include "CBulletDamage.h"

namespace damn {
	class CBulletEnemyDamage : public CBulletDamage {
	public:
		CBulletEnemyDamage() = default;
		~CBulletEnemyDamage() override = default;

		void Start() override;

		static std::string GetID() { return "BULLET_ENEMY_DAMAGE"; }

		void HasHitEnemy();
	};
}


#endif // BULLET_ENEMY_DAMAGE