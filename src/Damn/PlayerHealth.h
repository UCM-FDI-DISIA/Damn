#ifndef PLAYER_HEALTH_H_
#define PLAYER_HEALTH_H_

#include "Health.h"

namespace damn {
	class UIManager;
	class PlayerHealth : public Health
	{
	public:
		PlayerHealth() = default;
		~PlayerHealth() override = default;

		void Start() override;
		void Awake() override {};

		static std::string GetID() { return "PLAYER_HEALTH"; }

		void LoseHealth(int health) override; // jugador y enemigo

		void Die() override;

		inline bool isDead() { return _dead; }

		// void SetCurrentToMax(); // jugador
	private:
		UIManager* _uiManager;
		float _timer = 0;
		bool _dead = false;
	};
}

#endif // PLAYER_HEALTH_H_