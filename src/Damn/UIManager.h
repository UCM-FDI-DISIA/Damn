#pragma once
#include <vector>
#include "Component.h"
#define TIME_LEFT "TIME: "
#define ENEMIES_LEFT "ENEMIES: "
#define SCORE "SCORE: "
#define MAX_UI_NUMBER 99999
#define MAX_ROUND_NUMBER 1000

#define NEXT_WINMENU_STEP 1.0f

namespace damn {
	class UIManager : public eden_ec::Component
	{
	public:
		/// @brief Constructora por defecto
		UIManager() = default;

		/// @brief Destructora por defecto
		~UIManager() = default;

		/// @brief Metodo update heredado de Component 
		/// @param dt El tiempo entre frames calculado por el motor
		void Update(float dt) override {};

		/// @brief Actualiza el porcentaje de la barra de vida en funcion de los valores dados
		/// @param value Valor actual de la barra de vida
		/// @param maxValue Valor maximo alcanzable por la variable value
		void UpdateHealthBar(float value, float maxValue);

		/// @brief Actualiza el texto de la municion restante del arma en funcion de los valores dados
		/// @param magazineAmmo Municion del cargador actual
		/// @param leftAmmo Municion restante
		void UpdateAmmo(int magazineAmmo, int leftAmmo);

		/// @brief Cambia la imagen del arma y actualiza el texto de municion en funcion de los valores dados
		/// @param magazineAmmo Municion del cargador actual
		/// @param leftAmmo Municion restante
		/// @param numWeapon Numero del arma actual (correspondiente al enumerado de las armas de la clase WeaponManager)
		void ChangeWeapon(int magazineAmmo, int leftAmmo, int numWeapon);

		/// @brief Cambia el texto de los enemigos restantes en funcion del valor dado
		/// @param enemies Numero de enemigos restantes
		void SetEnemiesLeft(int enemies);

		/// @brief Cambia el texto del tiempo actual en funcion del valor dado
		/// @param time Tiempo actual
		void SetTimeLeft(int time);

		/// @brief Cambia el texto de la puntuacion actual en funcion del valor dado
		/// @param score Puntuacion actual
		void SetScore(int score);

		/// @brief Cambia el texto de la ronda actual en funcion del valor dado
		/// @param round Ronda actual
		void SetRound(int round);

		/// @brief Pone el estado de victoria y borra el resto de elementos del interfaz de juego (HUD)
		/// @param score Guarda la puntuacion actual
		void SetupWinMenu(int score);

		/// @brief Actualiza el estado de victoria para que se vaya mostrando progresivamente el menu
		/// @param timePassed Tiempo que ha pasado desde el inicio del estado de victoria
		void StepWinMenu(float timePassed);

		/// @brief Pone el estado de derrota y borra el resto de elementos del interfaz de juego (HUD)
		/// @param score Guarda la puntuacion actual
		void SetupLoseMenu(int score);

		/// @brief Actualiza el estado de derrota para que se vaya mostrando progresivamente el menu
		/// @param timePassed Tiempo que ha pasado desde el inicio del estado de derrota
		void StepLoseMenu(float timePassed);

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "UIMANAGER"; }

	protected:
		/// @brief Construye el componente dado unos argumentos. Se obtendran de una lectura de un .lua
		/// @param args Argumentos leidos de .lua
		void Init(eden_script::ComponentArguments* args){}
		
		/// @brief Metodo Awake override de Component
		void Awake() override;
		
		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes
		void Start() override {};

	private:
		/// @brief Instancia el boton para volver al menu inicial, permite el movimiento con el cursor e instancia un cursor
		void InstantiateMainMenuButton();

		/// @brief Crea una cadena con el formato 000..X siendo X el valor que queremos poner al texto, precedido con tantos ceros necesarios hasta llegar a tantos digitos como MAX_UI_NUMBER 
		/// @param value Valor que queremos obtener con formato
		/// @return Cadena con el formato deseado
		std::string GetFormat(int value);

		/// @brief Nombres de las entidades de HUD de la escena
		std::vector<std::string> _ids = { "AUI_HEALTH_BAR", "AUI_AMMO_TEXT", "AUI_GUN_IMAGE", "AUI_TIME_TEXT", "AUI_ENEMIES_LEFT_TEXT", "AUI_SCORE_TEXT", "AUI_ROUND_TEXT"};
		
		/// @brief Nombres de las imagenes que se usan en el HUD asociadas a las armas
		std::vector<std::string> _weaponImages = { "Pistol.png", "Shotgun.png", "Sniper.png"};

		/// @brief Entidades del HUD
		std::vector<eden_ec::Entity*> _ents = std::vector< eden_ec::Entity*>(_ids.size());
		
		/// @brief Entidad para oscurecer la pantalla en caso de tener poca vida
		eden_ec::Entity* _healthVignette = nullptr;

		/// @brief Enumerado para facilitar el acceso al vector de entidades
		enum UIEnts {HEALTH_BAR, AMMO_TEXT, GUN_IMAGE, TIME_TEXT, ENEMIES_LEFT_TEXT, SCORE_TEXT, ROUND_TEXT };

		/// @brief Letras de los numeros romanos para crear el numero de ronda actual
		std::vector<char> _numbers = { 'I', 'V', 'X', 'L', 'C', 'D', 'M'};

		/// @brief Estados de victoria
		enum WinMenuStates {VIGNETTE, WIN_TEXT, FINAL_SCORE_TEXT, WIN_SCORE_TEXT, MAIN_MENU_BUTTON, WIN_END };
		
		/// @brief Estado actual de victoria
		WinMenuStates _winMenuState = VIGNETTE;

		/// @brief Estados de derrota
		enum LoseMenuStates { CAMERA_ROTATION, LOSE_TEXT, FINAL_LOSE_SCORE, LOSE_SCORE_TEXT, MAIN_MENU_LOSE, LOSE_END };
		
		/// @brief Estado actual de derrota
		LoseMenuStates _loseMenuState = CAMERA_ROTATION;

		/// @brief Puntuacion final
		int _finalScore = 0;
	};
}
