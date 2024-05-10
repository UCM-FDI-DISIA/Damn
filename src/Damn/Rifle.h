#ifndef RIFLE_H
#define RIFLE_H

#include "WeaponComponent.h"

namespace damn {
	class Rifle : public WeaponComponent
	{
	public:
		/// @brief Constructora por defecto
		Rifle() = default;

		/// @brief Destructora por defecto
		~Rifle() = default;

		/// @brief Metodo que llama al metodo shoot del arma actual
		void Shoot() override final;

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "RIFLE"; }

	protected:
		/// @brief Construye el componente dado unos argumentos. Se obtendran de una lectura de un .lua
		/// @param args Argumentos leidos de .lua
		void Init(eden_script::ComponentArguments* args) override;

		/// @brief Metodo heredado de Component
		void Start() override;

		/// @brief Empieza la animacion de idle si no se habia empezado antes
		virtual void PlayIdleAnim() override;

		/// @brief Empieza la animacion de shoot si no se habia empezado antes y emite el sonido correspondiente
		virtual void PlayShootAnim() override;

		/// @brief Empieza la animacion de reload si no se habia empezado antes y emite el sonido correspondiente
		virtual void PlayReloadAnim() override;

		/// @brief Comprueba si se estan haciendo las animaciones de recarga o disparo
		virtual bool isAnyAnimPlaying() override;

		/// @brief Danio del rifle
		int _rifleDamage = 0;
	};
}
#endif // !RIFLE_H

