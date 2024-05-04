#define _CRTDBG_MAP_ALLOC
#ifndef ENEMY_ATTACK_H
#define ENEMY_ATTACK_H

#include "Component.h"

namespace eden_ec {
	class CTransform;
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
		Entity* _player;
		CTransform* _tr;
		CTransform* _playerTr;


		float _attackRate = 1;
		float _attackTimer = 0;
		float _rotationSpeed = 0.4;
		int _rotationCoef = 1;
	};
}
#endif