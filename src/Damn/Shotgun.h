#ifndef _SHOTGUN_H
#define _SHOTGUN_H

#define ANGLE 45

#include "WeaponComponent.h"

namespace damn {
	class Shotgun : public WeaponComponent
	{
	public:
		Shotgun() = default;
		~Shotgun() = default;
		/// @brief Construye el componente dado unos argumentos. Se obtendran de una lectura de un .lua
		/// @param args Argumentos leidos de .lua
		void Init(eden_script::ComponentArguments* args) override;
		/// @brief Metodo heredado de Component
		void Start() override;
		/// @brief Metodo que se llama cuando pueda disparar el arma
		void Shoot() override final;

		static std::string GetID() { return "SHOTGUN"; }
	protected:
		virtual void PlayIdleAnim() override;
		virtual void PlayShootAnim() override;
		virtual void PlayReloadAnim() override;
		virtual bool isAnyAnimPlaying() override;
	private:
		int _numBalas;
	};
}
#endif