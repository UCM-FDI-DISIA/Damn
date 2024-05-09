#ifndef _GAME_MANAGER_H
#define _GAME_MANAGER_H

//#define NUM_ENEMIES 1
//#define TIME_CALM 5

#define ROUNDS_FOR_NEXT_MAP 5

#define ROUNDS_FOR_NEXT_GUN 6

#define ROUND_FOR_WINNING 15

#define SCORE_PER_ENEMY 5
//#define HEALTH_GAIN_PER_ENEMY 5

//#define AMMOBOX_CHANCE 60

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
		
		void RegisterEnemy();
		void DieEnemy(eden_ec::Entity* e);
		void AddScore(int score);
		void AddWaypoint(eden_ec::CTransform* transform);

		void LoseGame();

		void setPlayer(eden_ec::Entity* p);
		inline eden_ec::Entity* getPlayer() { return _player; }
		void setUIManager(UIManager* ui);

		void Play(); //M�todo llamado al empezar a jugar

		void Pause(bool pause);

		static std::string GetID() { return "GAMEMANAGER"; };
	protected:

		void EndGame(std::string endSong);

		void Init(eden_script::ComponentArguments* args) override;
		void Awake() override;
		void Start() override;

	private:
		// Timers
		float _timer;
		float _timeNextRound;
		float _timerText;
		float _maxTime;

		// Par�metros de rondas
		int _score;
		int _enemiesLeft;
		int _numEnemies = 1;
		int _lastIncreasedEnemyNum = 0;
		int _timeCalm = 5;
		int _ammoBoxChance = 80;
		int _healthGainPerEnemy = 30;
		int _numRound, _lastRoundMapChanged, _lastRoundWeaponWasGiven;
		enum states {ENEMIES, CALM, MENU, WIN_MENU, LOSE_MENU} _roundState;
		states _lastState;

		// Jugador
		int _numWeapons;

		// Niveles
		int _currentMap;
		std::vector<std::string> _extraLevelNames;
		bool _winCondition;
		
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

		// Jugador
		void UnlockGuns(bool newWeapon);

		void Setup();

		void ManageTimer(float dt);

		bool Win();

		void IncreaseDifficulty(); 
	};
}
#endif