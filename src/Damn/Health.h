#ifndef HEALTH_H_
#define HEALTH_H_

#include <Component.h>

const int DAMAGE_TAKEN = 20;

namespace eden_script {
	class LuaManager;
}

namespace damn {
	class Health : public eden_ec::Component
	{
	public:
		Health() = default;
		~Health() override = default;

		void Init(eden_script::ComponentArguments* args) override;
		void Start() override;
		void Awake() override {};
		void Update(float deltaTime) override;

		static std::string GetID() { return "HEALTH"; }

		void GainHealth(int health); // jugador
		virtual void LoseHealth(int health); // jugador y enemigo

		int GetMaxHealth();
		int GetCurrentHealth();

		void SetCurrentToMax(); // jugador
		void HasBeenHit();
	protected:
		int _maxHealth;
		int _currentHealth;
	};
}

#endif // HEALTH_H_