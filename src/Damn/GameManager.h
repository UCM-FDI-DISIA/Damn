#ifndef _GAME_MANAGER_H
#define _GAME_MANAGER_H

#define NUM_ENEMIES 1
#define TIME_CALM 5

#include <vector>

#include "Component.h"

namespace eden_ec {
	class Entity;
	class CTransform;
}

namespace damn {
	class UIManager;
	class WeaponManager;
	class GameManager : public eden_ec::Component
	{
	public:
		GameManager() = default;
		~GameManager() = default;
		void Update(float dt);
		void Init(eden_script::ComponentArguments* args) override;
		void Awake() override;
		void Start() override;
		void RegisterEnemy();
		void DieEnemy(eden_ec::Entity* e);
		void AddScore(int score);
		void AddWaypoint(eden_ec::CTransform* transform);
		static std::string GetID() { return "GAMEMANAGER"; };
	private:
		float _timer;
		float _timeNextRound;
		float _timerText;
		float _maxTime;
		int _score;
		int _enemiesLeft;
		UIManager* _uiManager;
		WeaponManager* _weaponManager;
		eden_ec::Entity* _player = nullptr;
		eden_ec::Entity* _soundManager;
		int _numRound;
		std::vector<eden_ec::CTransform*> _spawnPoints;
		enum {ENEMIES, CALM} _roundState;

		void GenerateEnemies();
		void setupReferences();
	protected:
	};
}
#endif