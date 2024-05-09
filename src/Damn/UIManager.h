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
		UIManager() = default;
		~UIManager() = default;

		void Update(float dt) override {};

		void UpdateHealthBar(float value, float maxValue);
		void UpdateAmmo(int magazineAmmo, int leftAmmo);
		void ChangeWeapon(int magazineAmmo, int leftAmmo, int numWeapon);
		void SetEnemiesLeft(int enemies);
		void SetTimeLeft(int time);
		void SetScore(int score);
		void SetRound(int round);

		void SetupWinMenu(int score);
		void StepWinMenu(float timePassed);

		void SetupLoseMenu(int score);
		void StepLoseMenu(float timePassed);

		static std::string GetID() { return "UIMANAGER"; }

	protected:
		void Init(eden_script::ComponentArguments* args){}
		void Awake() override;
		void Start() override {};

	private:
		void InstantiateMainMenuButton();
		std::string GetFormat(int value);
		const std::vector<std::string> _ids = { "AUI_HEALTH_BAR", "AUI_AMMO_TEXT", "AUI_GUN_IMAGE", "AUI_TIME_TEXT", "AUI_ENEMIES_LEFT_TEXT", "AUI_SCORE_TEXT", "AUI_ROUND_TEXT"};
		const std::vector<std::string> _weaponImages = { "Pistol.png", "Shotgun.png", "Sniper.png"};
		std::vector<eden_ec::Entity*> _ents = std::vector< eden_ec::Entity*>(_ids.size());
		eden_ec::Entity* _healthVignette;
		enum UIEnts {HEALTH_BAR, AMMO_TEXT, GUN_IMAGE, TIME_TEXT, ENEMIES_LEFT_TEXT, SCORE_TEXT, ROUND_TEXT };
		const std::vector<char> _numbers = { 'I', 'V', 'X', 'L', 'C', 'D', 'M'};

		enum WinMenuStates {VIGNETTE, WIN_TEXT, FINAL_SCORE_TEXT, WIN_SCORE_TEXT, MAIN_MENU_BUTTON, WIN_END };
		WinMenuStates _winMenuState;
		enum LoseMenuStates { CAMERA_ROTATION, LOSE_TEXT, FINAL_LOSE_SCORE, LOSE_SCORE_TEXT, MAIN_MENU_LOSE, LOSE_END };
		LoseMenuStates _loseMenuState;
		int _finalScore;
	};
}
