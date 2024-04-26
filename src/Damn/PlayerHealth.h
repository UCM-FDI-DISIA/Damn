#ifndef PLAYER_HEALTH_H_
#define PLAYER_HEALTH_H_

#include "Health.h"

namespace damn {
	class PlayerHealth : public Health
	{
	public:
		PlayerHealth() = default;
		~PlayerHealth() override = default;

		//void Init(eden_script::ComponentArguments* args) override;
		//void Start() override;
		//void Awake() override {};
		//void Update(float deltaTime) override;

		static std::string GetID() { return "PLAYER_HEALTH"; }

		// void GainHealth(int health); // jugador
		void LoseHealth(int health) override; // jugador y enemigo

		// void SetCurrentToMax(); // jugador
	};
}

#endif // PLAYER_HEALTH_H_