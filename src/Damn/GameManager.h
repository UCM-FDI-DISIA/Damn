#ifndef _GAME_MANAGER_H
#define _GAME_MANAGER_H

#define NUM_ENEMIES 1
#define TIME_CALM 5

#define ROUNDS_FOR_NEXT_MAP 1

#define ROUNDS_FOR_NEXT_GUN 1

#define ROUND_FOR_WINNING 2

#define SCORE_PER_ENEMY 5
#define HEALTH_GAIN_PER_ENEMY 5

#define AMMOBOX_CHANCE 60

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
		

		void setPlayer(eden_ec::Entity* p);
		inline eden_ec::Entity* getPlayer() { return _player; }
		void setUIManager(UIManager* ui);

		void Play(); //Método llamado al empezar a jugar

		static std::string GetID() { return "GAMEMANAGER"; };
	protected:
		void Init(eden_script::ComponentArguments* args) override;
		void Awake() override;
		void Start() override;

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
		enum {ENEMIES, CALM, MENU, WIN_MENU} _roundState;

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
	};
}
#endif