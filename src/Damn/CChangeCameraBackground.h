#ifndef DAMN_CHANGE_CAMERA_BACKGROUND
#define DAMN_CHANGE_CAMERA_BACKGROUND

#include <Component.h>

namespace damn {
	class CChangeCameraBackground : public eden_ec::Component {
	public:
		CChangeCameraBackground() = default;
		CChangeCameraBackground(float r, float g, float b, float a = 1.0f);
		~CChangeCameraBackground() override = default;

		// @brief Construye el componente dado unos argumentos. Se obtendran de una lectura de un .lua
		/// @param args Argumentos leidos de .lua
		void Init(eden_script::ComponentArguments* args) override;
	
		void Awake() override {};

		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes, en este caso el RigidBody de la entidad
		void Start() override;

		static std::string GetID() { return "CHANGE_CAMERA_BACKGROUND"; }

	private:
		float _r, _g, _b, _a;
	};
}

#endif