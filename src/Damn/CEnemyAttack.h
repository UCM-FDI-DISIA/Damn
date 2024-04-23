#define _CRTDBG_MAP_ALLOC
#ifndef ENEMY_ATTACK_H
#define ENEMY_ATTACK_H

#include "Component.h"

namespace eden_ec {
	class CEnemyAttack : public Component
	{
	public:
		CEnemyAttack() = default;
		~CEnemyAttack() = default;

		static std::string GetID() { return "ENEMY_ATTACK"; }

		void Init(eden_script::ComponentArguments* args) override;

		void Awake() override;

		void Start() override;

		void Update(float t) override;

	protected:
		const static std::string _id;
	private:
		class Entity* _player;
		float _attackRate = 1;
		float _lastAttack = 0;
		float _attackTimer = 0;
	};
}
#endif