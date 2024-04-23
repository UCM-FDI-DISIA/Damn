#ifndef HEALTH_H_
#define HEALTH_H_

#include <Component.h>

class Health : public eden_ec::Component 
{
public:
	Health() = default;
	virtual ~Health() override = default;

	void Init(eden_script::ComponentArguments* args) override;
	void Awake() override {};
	void Update(float deltaTime) override {};

	void GainHealth(int health);
	void LoseHealth(int health);

	int GetMaxHealth();
	int GetCurrentHealth();

	void SetCurrentToMax();
private:
	int _maxHealth;
	int _currentHealth;
};

#endif // HEALTH_H_