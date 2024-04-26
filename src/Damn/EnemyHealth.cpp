#include "EnemyHealth.h"

void damn::EnemyHealth::LoseHealth(int health)
{
	_currentHealth -= health;
	if (_currentHealth < 0);
}
