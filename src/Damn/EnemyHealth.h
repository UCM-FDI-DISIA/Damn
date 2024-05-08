#ifndef ENEMY_HEALTH_H_
#define ENEMY_HEALTH_H_

#include "Health.h"

namespace damn {
	class GameManager;
	class EnemyHealth : public Health
	{
	public:
		EnemyHealth() = default;
		~EnemyHealth() override;

		void LoseHealth(int health) override;

		static std::string GetID() { return "ENEMY_HEALTH"; }

	protected:
		void Start() override;

	private:
		GameManager* _gameManager;
	};
}
#endif // ENEMY_HEALTH_H_