#ifndef _ROME_H
#define _ROME_H

#include <Component.h>

namespace damn {
	class RomeComponent : public eden_ec::Component
	{
	public:
		/// @brief Constructora por defecto
		RomeComponent() = default;
		
		/// @brief Destructora por defecto
		~RomeComponent() = default;

		/// @brief Metodo update heredado de Component 
		/// @param deltaTime El tiempo entre frames calculado por el motor
		void Update(float dt) override {};

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "ROME_COMP"; }

	protected:
		/// @brief Construye el componente dado unos argumentos. Se obtendran de una lectura de un .lua
		/// @param args Argumentos leidos de .lua
		void Init(eden_script::ComponentArguments* args) override {};

		/// @brief Metodo heredado de Component
		void Start() override;

		/// @brief Metodo Awake override de Component
		void Awake() override {};
	};
}
#endif

