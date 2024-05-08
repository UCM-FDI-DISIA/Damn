#ifndef BULLET_ENEMY_DAMAGE
#define BULLET_ENEMY_DAMAGE

#include "BulletDamage.h"

namespace damn {
	class BulletEnemyDamage : public BulletDamage {
	public:
		BulletEnemyDamage() = default;
		~BulletEnemyDamage() override = default;

		void HasHitEnemy(); //Método público de cuando la bala colisiona para que sea accesible desde Lua

		static std::string GetID() { return "BULLET_ENEMY_DAMAGE"; }
	protected:
		void Start() override;
	};
}


#endif // BULLET_ENEMY_DAMAGE