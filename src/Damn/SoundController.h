#ifndef DAMN_SOUND_CONTROLLER
#define DAMN_SOUND_CONTROLLER

#include <Component.h>

namespace eden_ec {
	class CAudioEmitter;
}

namespace damn {
	class SoundController : public eden_ec::Component {
	public:
		/// @brief Constructora por defecto
		SoundController() = default;

		/// @brief Destructora por defecto
		~SoundController() = default;
		
		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "SOUND_CONTROLLER"; }

	protected:
		/// @brief Construye el componente dado unos argumentos. Se obtendran de una lectura de un .lua
		/// @param args Argumentos leidos de .lua
		void Init(eden_script::ComponentArguments* args) override {}

		/// @brief Metodo Awake override de Component
		void Awake() override {}

		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes
		void Start() override;

	private:
		/// @brief Booleano para comprobar si se ha añadido a la escena de dont destroy on load
		static bool _alreadyFound;
	};
}

#endif