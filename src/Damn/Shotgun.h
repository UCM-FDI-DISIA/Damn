#ifndef _SHOTGUN_H
#define _SHOTGUN_H

#define ANGLE 22.5

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
		/// @brief Metodo que se llama cuando pueda disparar el arma
		void Shoot() override final;

		static std::string GetID() { return "SHOTGUN"; }
	private:
		int _numBalas;
	};
}
#endif