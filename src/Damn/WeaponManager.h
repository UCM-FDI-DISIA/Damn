#ifndef _WEAPON_MANAGER_H
#define _WEAPON_MANAGER_H

#define NUM_WEAPONS 3

#include "Component.h"
#include<vector>

namespace damn {
	class WeaponComponent;
	class UIManager;
	class WeaponManager : public eden_ec::Component
	{
	public:
		WeaponManager() = default;
		~WeaponManager() = default;

		/// @brief Construye el componente dado unos argumentos. Se obtendran de una lectura de un .lua
		/// @param args Argumentos leidos de .lua
		void Init(eden_script::ComponentArguments* args) override {}

		/// @brief Metodo Awake override de Component
		void Awake() override {};

		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes, en este caso las armas
		void Start() override;

		/// @brief Metodo update heredado de Component 
		/// @param deltaTime El tiempo entre frames calculado por el motor
		void Update(float deltaTime) override {}

		/// @brief Metodo que llama al metodo shoot del arma actual
		void Shoot();

		/// @brief Metodo que llama al metodo reload del arma actual
		void Reload();

		/// @brief Metodo que llama al metodo AddAmmo del arma actual
		/// @param ammo Cantidad de municion que se añade
		virtual void AddAmmo(int ammo);

		/// @brief Metodo para cambiar de arma
		void ChangeWeapon();

		/// @brief Metodo para desbloquear la escopeta, pone el booleano shotgun en true
		void UnlockShotGun();

		void UnlockRifle();

		void UpdateUIAmmo();

		static std::string GetID() { return "WEAPON_MANAGER"; }
	private:
		enum WEAPON { GUN, SHOTGUN, RIFLE };
		WEAPON _actualWeapon;
		std::vector<WeaponComponent*> _weapons;
		bool _shotgun = false;
		bool _rifle = false;
		UIManager* _uiManager;
	};
}
#endif