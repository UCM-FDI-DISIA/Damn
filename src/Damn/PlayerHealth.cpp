#include "PlayerHealth.h"

void damn::PlayerHealth::LoseHealth(int health)
{
	_currentHealth -= health;
	if (_currentHealth < 0);
}
