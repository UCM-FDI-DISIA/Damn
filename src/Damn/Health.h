#ifndef HEALTH_H_
#define HEALTH_H_

#include <Component.h>

namespace damn {
	class Health : public eden_ec::Component
	{
	public:
		Health() = default;
		~Health() override = default;
		
		void Update(float deltaTime) override {};

		void GainHealth(int health); // jugador
		virtual void LoseHealth(int health); // jugador y enemigo
		int GetMaxHealth();
		int GetCurrentHealth();
		void SetCurrentToMax(); // jugador

		static std::string GetID() { return "HEALTH"; }

	protected:

		void Init(eden_script::ComponentArguments* args) override;
		void Start() override;
		void Awake() override {};
		
		inline virtual void Die() { _currentHealth = 0; };

		int _maxHealth;
		int _currentHealth;
	};
}
#endif // HEALTH_H_