#ifndef _WEAPON_MANAGER_H
#define _WEAPON_MANAGER_H

#include "Component.h"
#include<vector>

namespace damn {
	class WeaponComponent;
	class UIManager;
	class WeaponManager : public eden_ec::Component
	{
	public:
		/// @brief Constructora por defecto
		WeaponManager() = default;
		
		/// @brief Destructora por defecto
		~WeaponManager() = default;
		
		/// @brief Metodo update heredado de Component 
		/// @param deltaTime El tiempo entre frames calculado por el motor
		void Update(float deltaTime) override {}

		/// @brief Metodo que llama al metodo shoot del arma actual
		void Shoot();

		/// @brief Metodo que llama al metodo reload del arma actual
		void Reload();

		/// @brief Metodo que llama al metodo AddAmmo del arma actual
		/// @param ammo Cantidad de municion que se añade
		virtual void AddAmmo();

		/// @brief Metodo para cambiar de arma
		void ChangeWeapon();

		/// @brief Metodo para desbloquear la escopeta
		void UnlockShotGun();

		/// @brief Metodo para desbloquear el rifle
		void UnlockRifle();

		/// @brief Actualiza el HUD del juego con la municion del arma actual
		void UpdateUIAmmo();

		/// @brief Enumerado para facilitar el acceso al vector de armas
		enum WEAPON { GUN, SHOTGUN, RIFLE };

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "WEAPON_MANAGER"; }

	protected:
		/// @brief Construye el componente dado unos argumentos. Se obtendran de una lectura de un .lua
		/// @param args Argumentos leidos de .lua
		void Init(eden_script::ComponentArguments* args) override {}

		/// @brief Metodo Awake override de Component
		void Awake() override {};

		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes, en este caso las armas
		void Start() override;

	private:
		/// @brief Metodo para desbloquear la pistola, se llama al empezar el juego
		void UnlockBaseWeapon();

		/// @brief Booleano para controlar si ya se ha añadido el arma principal al jugador
		bool _hasDefaultWeapon = false;

		/// @brief Enumerado de arma actual
		WEAPON _actualWeapon = GUN;

		/// @brief Vector de armas que tiene el jugador
		std::vector<WeaponComponent*> _weapons;

		/// @brief Numero de armas actuales
		int _numWeapons = 0;

		/// @brief Referencia al UIManager para actualizar la HUD
		UIManager* _uiManager = nullptr;
	};
}
#endif