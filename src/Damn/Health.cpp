#include "Health.h"
#include <iostream>
#include <ComponentArguments.h>

void damn::Health::Init(eden_script::ComponentArguments* args)
{
	_maxHealth = args->GetValueToInt("MaximumHealth");
}

void damn::Health::Start()
{
	_currentHealth = _maxHealth;
}

void damn::Health::Update(float deltaTime)
{
	// std::cout << "Vida actual: " << _currentHealth << ", vida maxima: " << _maxHealth << std::endl;
}

void damn::Health::GainHealth(int health)
{
	_currentHealth += health;
	if (_currentHealth > _maxHealth) _currentHealth = _maxHealth;
}

void damn::Health::LoseHealth(int health)
{
	_currentHealth -= health;
	if (_currentHealth < 0);
}

int damn::Health::GetMaxHealth()
{
	return _maxHealth;
}

int damn::Health::GetCurrentHealth()
{
	return _currentHealth;
}

void damn::Health::SetCurrentToMax()
{
	_currentHealth = _maxHealth;
}
