#ifndef _SHOTGUN_H
#define _SHOTGUN_H

#define ANGLE 45

#include "WeaponComponent.h"

namespace damn {
	class Shotgun : public WeaponComponent
	{
	public:
		/// @brief Constructora por defecto
		Shotgun() = default;

		/// @brief Destructora por defecto
		~Shotgun() = default;
		
		/// @brief Metodo que llama al metodo shoot del arma actual
		void Shoot() override final;

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "SHOTGUN"; }

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

	private:
		/// @brief Numero de balas que dispara la escopeta
		int _numBalas = 0;
	};
}
#endif