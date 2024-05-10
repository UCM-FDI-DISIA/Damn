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
		/// @brief Constructora por defecto
		GameManager() = default;

		/// @brief Destructora por defecto
		~GameManager() = default;

		/// @brief Metodo update heredado de Component 
		/// @param dt El tiempo entre frames calculado por el motor
		void Update(float dt);
		
		/// @brief Aniade 1 al contador de enemigos
		void RegisterEnemy();

		/// @brief Borra el enemigo e y decrementa el numero de enemigos
		/// @param e Entidad a borrar
		void DieEnemy(eden_ec::Entity* e);

		/// @brief Aniade puntuacion y la actualiza en el HUD
		/// @param score Puntuacion a aniadir
		void AddScore(int score);

		/// @brief Aniade un punto de spawn de enemigos
		/// @param transform Posicion del punto de spawn
		void AddWaypoint(eden_ec::CTransform* transform);

		/// @brief Pone el estado de derrota
		void LoseGame();

		/// @brief Guarda referencia del jugador
		/// @param p Referencia del Jugador
		void setPlayer(eden_ec::Entity* p);

		/// @brief Devuelve la referencia del jugador
		/// @return Devuelve la referencia del jugador
		inline eden_ec::Entity* getPlayer() { return _player; }

		/// @brief Guarda la referencia al UIManager
		/// @param ui Referencia del ui
		void setUIManager(UIManager* ui);

		/// @brief Metodo que se llama al empezar a jugar
		void Play(); 

		/// @brief Metodo para pausar el estado de juego
		/// @param pause True si quieres poner pausa, false en caso contrario
		void Pause(bool pause);

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "GAMEMANAGER"; };
	protected:
		/// @brief Metodo llamado al terminar la partida. Suena la musica correspondiente al estado final y notifica al UIManager que se ha acabado la partida
		void EndGame(std::string endSong);

		/// @brief Construye el componente dado unos argumentos. Se obtendrán de una lectura de un .lua
		/// @param args Argumentos leídos de .lua
		void Init(eden_script::ComponentArguments* args) override;

		/// @brief Metodo Awake override de Component
		void Awake() override;

		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes
		void Start() override;

	private:
		/// @brief Timer
		float _timer;

		/// @brief Tiempo limite
		float _timeNextRound;

		/// @brief Timer
		float _timerText;

		/// @brief Tiempo maximo de los textos
		float _maxTime;

		/// @brief Puntuacion
		int _score;

		/// @brief Enemigos restantes
		int _enemiesLeft;

		/// @brief Numero de enemigos
		int _numEnemies = 1;

		/// @brief Anterior numero de enemigos 
		int _lastIncreasedEnemyNum = 0;

		/// @brief Tiempo en estado calm
		int _timeCalm = 5;

		/// @brief Probabilidad de aparecer caja de municion al matar enemigos
		int _ammoBoxChance = 80;

		/// @brief Vida que se recupera al matar un enemigo
		int _healthGainPerEnemy = 30;

		/// @brief Ronda actual
		int _numRound = 1;

		/// @brief Ultima ronda del anterior mapa
		int _lastRoundMapChanged = 1;

		/// @brief Ultima ronda en la que se dio un arma al jugador
		int _lastRoundWeaponWasGiven = 1;

		/// @brief Estados de juego
		enum states {ENEMIES, CALM, MENU, WIN_MENU, LOSE_MENU} _roundState;
		
		/// @brief Estado anterior a pausar el juego
		states _lastState = ENEMIES;

		/// @brief Numero de armas del jugador
		int _numWeapons = 0;

		/// @brief Mapa actual
		int _currentMap = 0;

		/// @brief Nombre de las escenas de juego
		std::vector<std::string> _extraLevelNames;

		/// @brief Almacena si se ha cumplido la condicion para ganar la partida
		bool _winCondition = false;
		
		/// @brief Referencia al UIManager
		UIManager* _uiManager = nullptr;

		/// @brief Referencia al WeaponManager del jugador
		WeaponManager* _weaponManager = nullptr;

		/// @brief Referencia al jugador
		eden_ec::Entity* _player = nullptr;

		/// @brief Referencia al manager de sonido
		eden_ec::Entity* _soundManager = nullptr;
		
		/// @brief Vida del jugador guardada entre mapas
		int _savedPlayerCurrentHealth = -1;

		/// @brief Vida del jugador maxima guardada
		int _savedPlayerMaxHealth = -1;

		/// @brief Puntos de aparicion de enemigos
		std::vector<eden_ec::CTransform*> _spawnPoints;

		/// @brief Cambia de mapa al siguiente
		void NextMap();
		
		/// @brief Cambia de escena guardando las variables necesarias para volver al estado de juego
		/// @param sceneName Nombre de la escena a la que se quiere cambiar
		void ChangeScene(std::string sceneName);
		
		/// @brief Genera los enemigos de la ronda
		void GenerateEnemies();

		/// @brief Desbloquea las armas que tiene el jugador
		/// @param newWeapon True si se quieren desbloquear las armas que ya tenia y una nueva, false en caso contrario
		void UnlockGuns(bool newWeapon);

		/// @brief Inicializa valores del GameManager 
		void Setup();

		/// @brief Controla el tiempo de la partida y se lo pasa al manager de UI
		/// @param dt Deltatime, tiempo entre frames
		void ManageTimer(float dt);

		/// @brief Comprueba si el jugador ha ganado la partida
		/// @return True si el jugador ha ganado, false en caso contrario
		bool Win();

		/// @brief Aumenta la dificultad
		void IncreaseDifficulty(); 
	};
}
#endif