#include "Health.h"
#include <ComponentArguments.h>

void Health::Init(eden_script::ComponentArguments* args)
{
	_maxHealth = args->GetValueToInt("Maximum Health");
}

void Health::GainHealth(int health)
{
	_currentHealth += health;
	if (_currentHealth > _maxHealth) _currentHealth = _maxHealth;
}

void Health::LoseHealth(int health)
{
	_currentHealth -= health;
	if (_currentHealth < 0);
}

int Health::GetMaxHealth()
{
	return _maxHealth;
}

int Health::GetCurrentHealth()
{
	return _currentHealth;
}

void Health::SetCurrentToMax()
{
	_currentHealth = _maxHealth;
}
