#ifndef ENEMY_HEALTH_H_
#define ENEMY_HEALTH_H_

#include "Health.h"

namespace damn {
	class EnemyHealth : public Health
	{
	public:
		EnemyHealth() = default;
		~EnemyHealth() override = default;

		// void Init(eden_script::ComponentArguments* args) override;
		// void Start() override;
		// void Awake() override {};
		// void Update(float deltaTime) override;

		static std::string GetID() { return "ENEMY_HEALTH"; }

		void LoseHealth(int health) override;
	};
}

#endif // ENEMY_HEALTH_H_