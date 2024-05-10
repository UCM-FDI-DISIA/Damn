#ifndef _SPAWNPOINT_H
#define _SPAWNPOINT_H

#include <Component.h>

namespace damn {
	class GameManager;
	class Spawnpoint : public eden_ec::Component
	{
	public:
		/// @brief Constructora por defecto
		Spawnpoint() = default;

		/// @brief Destructora por defecto
		~Spawnpoint() override = default;

		/// @brief Metodo update heredado de Component 
		/// @param deltaTime El tiempo entre frames calculado por el motor
		void Update(float dt) {};

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "SPAWNPOINT"; }

	protected:
		/// @brief Construye el componente dado unos argumentos. Se obtendran de una lectura de un .lua
		/// @param args Argumentos leidos de .lua
		void Init(eden_script::ComponentArguments* args) override {};

		/// @brief Metodo Awake override de Component
		void Awake() override {};

		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes
		void Start() override;

	private:
		/// @brief Referencia al GameManager
		GameManager* gameManager = nullptr;
	};
}
#endif

