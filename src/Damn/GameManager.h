#ifndef _GAME_MANAGER_H
#define _GAME_MANAGER_H

#define NUM_ENEMIES 1
#define TIME_CALM 5

#define ROUNDS_FOR_NEXT_MAP 1

#define ROUNDS_FOR_NEXT_GUN 1

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

		void setPlayer(eden_ec::Entity* p);
		inline eden_ec::Entity* getPlayer() { return _player; }
		void setUIManager(UIManager* ui);

	private:

		// Timers
		float _timer;
		float _timeNextRound;
		float _timerText;
		float _maxTime;

		// Parámetros de rondas
		int _score;
		int _enemiesLeft;
		int _numRound, _lastRoundMapChanged, _lastRoundWeaponWasGiven;
		enum {ENEMIES, CALM} _roundState;

		int _numIteration;

		// Jugador
		int _numWeapons;

		// Niveles
		int _currentMap;
		std::vector<std::string> _extraLevelNames;
		
		// Referencias
		UIManager* _uiManager = nullptr;
		WeaponManager* _weaponManager = nullptr;
		eden_ec::Entity* _player = nullptr;
		eden_ec::Entity* _soundManager = nullptr;
		
		// Jugador
		int _savedPlayerCurrentHealth = -1, _savedPlayerMaxHealth;

		std::vector<eden_ec::CTransform*> _spawnPoints;

		// Niveles
		void NextMap();
		
		// General
		void ChangeScene(std::string sceneName);
		
		// Enemigos
		void GenerateEnemies();

		// Referencias
		void setupReferences();

		// Jugador
		void UnlockGuns(bool newWeapon);

		void OnMapChanged();
		void Setup();
	protected:
	};
}
#endif