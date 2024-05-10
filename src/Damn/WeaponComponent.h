#ifndef _WEAPON_COMPONENT_H
#define _WEAPON_COMPONENT_H

#include <Component.h>

namespace eden_ec {
	class Entity;
	class CTransform;
	class CAnimator;
	class CParticleEmitter;
}

namespace damn {
	class WeaponComponent : public eden_ec::Component
	{
	public:
		/// @brief Constructora por defecto
		WeaponComponent() = default;

		/// @brief Destructora por defecto
		~WeaponComponent() override = default;

		/// @brief Metodo update heredado de Component 
		/// @param deltaTime El tiempo entre frames calculado por el motor
		void Update(float deltaTime) override;

		/// @brief Crea una bala con la rotación y la posición de la entidad
		/// @param blueprintID Bala a instanciar
		/// @return Devuelve la bala creada
		eden_ec::Entity* CreateBullet(std::string blueprintID);

		/// @brief Metodo que se llama cuando pueda disparar el arma, si no quedan balas en el cargador recarga
		virtual void Shoot();

		/// @brief Metodo que se llama para recargar
		virtual void Reload();

		/// @brief Metodo que se llama para añadir municion
		/// @param ammo Cantidad de municion que se añade
		virtual void AddAmmo(int ammo);

		/// @brief Metodo que se llama para cambiar la visibilidad del arma
		/// @param visible Booleana que establece la visibilidad
		virtual void SetVisible(bool visible);

		/// @brief Devuelva las balas del cargador y las balas actuales
		/// @return Número de balas del cargador y las balas restantes
		std::pair<int, int> GetAmmo();

		/// @brief Método que permite saber si se están reproduciendo las animaciones de disparo o recarga de un arma en concreto
		virtual bool isAnyAnimPlaying();

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "WEAPON_COMPONENT"; }

	protected:
		/// @brief Construye el componente dado unos argumentos. Se obtendran de una lectura de un .lua
		/// @param args Argumentos leidos de .lua
		void Init(eden_script::ComponentArguments* args) override;

		/// @brief Metodo Awake override de Component
		void Awake() override {};

		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes
		void Start() override;

		/// @brief Empieza la animacion de idle si no se habia empezado antes
		virtual void PlayIdleAnim();
		
		/// @brief Empieza la animacion de shoot si no se habia empezado antes y emite el sonido correspondiente
		virtual void PlayShootAnim();
		
		/// @brief Empieza la animacion de reload si no se habia empezado antes y emite el sonido correspondiente
		virtual void PlayReloadAnim();

		/// @brief Capacidad de las reservas
		int _maxAmmo = 0;
		
		/// @brief Tamanio de cargador
		int _magazineSize = 0;
		
		/// @brief Municion total
		int _magazineAmmo = 0; 
		
		/// @brief Municion cargada
		int _currentAmmo = 0; 
		
		/// @brief Cadencia de disparo
		float _cadence = 0.0f;
		
		/// @brief Contador de tiempo
		float _elapsedTime = 0.0f;
		
		/// @brief Booleano para comprobar si se puede disparar
		bool _canShoot = true;
		
		/// @brief Referencia al transform de la camara
		eden_ec::CTransform* _cameraTransform = nullptr;
		
		/// @brief Referencia al transform propio
		eden_ec::CTransform* _tr = nullptr;
		
		/// @brief Referencia al componente CAnimator del arma
		eden_ec::CAnimator* _animator = nullptr;
		
		/// @brief Referencia al jugador
		eden_ec::Entity* _player = nullptr;
		
		/// @brief Referencia al componente CParticleEmitter
		eden_ec::CParticleEmitter* _particle = nullptr;

	};
}
#endif 