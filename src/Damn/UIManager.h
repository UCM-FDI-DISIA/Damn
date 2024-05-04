#pragma once
#include <vector>
#include "Component.h"
#define TIME_LEFT "TIME: "
#define ENEMIES_LEFT "ENEMIES: "
#define SCORE "SCORE: "
#define MAX_UI_NUMBER 99999
#define MAX_ROUND_NUMBER 1000

namespace damn {
	class UIManager : public eden_ec::Component
	{
	public:
		UIManager() = default;
		~UIManager() = default;
		void UpdateHealthBar(float value, float maxValue);
		void UpdateAmmo(int magazineAmmo, int leftAmmo);
		void ChangeWeapon(int magazineAmmo, int leftAmmo, int numWeapon);
		void SetEnemiesLeft(int enemies);
		void SetTimeLeft(int time);
		void SetScore(int score);
		void SetRound(int round);
		static std::string GetID() { return "UIMANAGER"; }
		void Init(eden_script::ComponentArguments* args){}

	private:
		void Update(float dt);
		std::string GetFormat(int value);
		//void Init(eden_script::ComponentArguments* args) override;
		const std::vector<std::string> _ids = { "AUI_HEALTH_BAR", "AUI_AMMO_TEXT", "AUI_GUN_IMAGE", "AUI_TIME_TEXT", "AUI_ENEMIES_LEFT_TEXT", "AUI_SCORE_TEXT", "AUI_ROUND_TEXT"};
		const std::vector<std::string> _weaponImages = { "Pistol.png", "Shotgun.png", "Sniper.png"};
		std::vector<eden_ec::Entity*> _ents = std::vector< eden_ec::Entity*>(_ids.size());
		enum UIEnts {HEALTH_BAR, AMMO_TEXT, GUN_IMAGE, TIME_TEXT, ENEMIES_LEFT_TEXT, SCORE_TEXT, ROUND_TEXT };
		const std::vector<char> _numbers = { 'I', 'V', 'X', 'L', 'C', 'D', 'M'};

	protected:
		void Awake() override;
		void Start() override {};
	};
}
