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
		EnemyAttack() = default;
		~EnemyAttack() = default;

		void Update(float t) override;

		static std::string GetID() { return "ENEMY_ATTACK"; }

	protected:
		void Init(eden_script::ComponentArguments* args) override;

		void Awake() override;

		void Start() override;

		const static std::string _id;
	private:
		eden_ec::Entity* _player;
		eden_ec::CTransform* _tr;
		eden_ec::CTransform* _playerTr;

		float _attackRate = 1;
		float _attackTimer = 0;
		float _rotationSpeed = 0.4;
		int _rotationCoef = 1;
	};
}
#endif