#pragma once
#include <vector>
#include "Component.h"
#define TIME_LEFT "TIME LEFT: "
#define ENEMIES_LEFT "ENEMIES LEFT: "

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
		static std::string GetID() { return "UIMANAGER"; }
		void Init(eden_script::ComponentArguments* args){}

	private:
		void Update(float dt);
		//void Init(eden_script::ComponentArguments* args) override;
		const std::vector<std::string> _ids = { "HEALTH_BAR", "AMMO_TEXT", "GUN_IMAGE", "TIME_TEXT", "ENEMIES_LEFT_TEXT"};
		const std::vector<std::string> _weaponImages = { "Pistol.png", "Shotgun.png" };
		std::vector<eden_ec::Entity*> _ents = std::vector< eden_ec::Entity*>(_ids.size());
		enum UIEnts {HEALTH_BAR, AMMO_TEXT, GUN_IMAGE, TIME_TEXT, ENEMIES_LEFT_TEXT};

	protected:
		void Awake() override;
		void Start() override {};
	};
}
