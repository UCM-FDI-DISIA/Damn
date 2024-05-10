#ifndef DAMN_CHANGE_CAMERA_BACKGROUND
#define DAMN_CHANGE_CAMERA_BACKGROUND

#include <Component.h>

namespace damn {
	class ChangeCameraBackground : public eden_ec::Component {
	public:
		/// @brief Constructora por defecto
		ChangeCameraBackground() = default;

		/// @brief Constructora
		/// @param r Cantidad de rojo del color de fondo
		/// @param g Cantidad de verde del color de fondo
		/// @param b Cantidad de azul del color de fondo
		/// @param a Cantidad de alfa del color de fondo
		ChangeCameraBackground(float r, float g, float b, float a = 1.0f);

		/// @brief Destructora por defecto
		~ChangeCameraBackground() override = default;

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "CHANGE_CAMERA_BACKGROUND"; }

	protected:
		// @brief Construye el componente dado unos argumentos. Se obtendran de una lectura de un .lua
		/// @param args Argumentos leidos de .lua
		void Init(eden_script::ComponentArguments* args) override;

		/// @brief Metodo Awake override de Component
		void Awake() override {};

		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes
		void Start() override;

	private:
		/// @brief Color de fondo
		float _r = 0.0f, _g = 0.0f, _b = 0.0f, _a = 0.0f;
	};
}

#endif