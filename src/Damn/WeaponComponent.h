#ifndef _WEAPON_COMPONENT_H
#define _WEAPON_COMPONENT_H

#include <Component.h>

namespace eden_ec {
	class CTransform;
	class CAnimator;
}

namespace damn {
	class WeaponComponent : public eden_ec::Component
	{
	public:
		WeaponComponent() = default;
		~WeaponComponent() override = default;

		/// @brief Construye el componente dado unos argumentos. Se obtendran de una lectura de un .lua
		/// @param args Argumentos leidos de .lua
		void Init(eden_script::ComponentArguments* args) override;

		/// @brief Metodo Awake override de Component
		void Awake() override {};

		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes, en este caso el Transform de la entidad
		void Start() override;

		/// @brief Metodo update heredado de Component 
		/// @param deltaTime El tiempo entre frames calculado por el motor
		void Update(float deltaTime) override;

		/// @brief Crea una bala con la rotaci�n y la posici�n de la entidad
		/// @param blueprintID Bala a instanciar
		/// @return Devuelve la bala creada
		eden_ec::Entity* CreateBullet(std::string blueprintID);

		/// @brief Metodo que se llama cuando pueda disparar el arma
		virtual void Shoot();

		/// @brief Metodo que se llama para recargar
		virtual void Reload();

		/// @brief Metodo que se llama para a�adir municion
		/// @param ammo Cantidad de municion que se a�ade
		virtual void AddAmmo(int ammo);

		/// @brief Metodo que se llama para cambiar la visibilidad del arma
		/// @param visible Booleana que establece la visibilidad
		virtual void SetVisible(bool visible);

		/// @brief Devuelva las balas del cargador y las balas actuales
		/// @return N�mero de balas del cargador y las balas restantes
		std::pair<int, int> GetAmmo();

		static std::string GetID() { return "WEAPON_COMPONENT"; }
	protected:
		int _maxAmmo;
		int _magazineSize;
		int _magazineAmmo;
		int _currentAmmo;
		float _cadence;
		float _elapsedTime;
		bool _canShoot;
		eden_ec::CTransform* _cameraTransform;
		eden_ec::CTransform* _tr;
		eden_ec::CAnimator* _animator;


		virtual void PlayIdleAnim();
		virtual void PlayShootAnim();
		virtual void PlayReloadAnim();
		virtual bool isAnyAnimPlaying();
	};
}
#endif 