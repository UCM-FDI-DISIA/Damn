#ifndef DAMN_MAIN_MENU_CAM_ROTATION
#define DAMN_MAIN_MENU_CAM_ROTATION

#include <Component.h>

namespace eden_ec {
	class CTransform;
}

namespace damn {
	class MainMenuCameraRotation : public eden_ec::Component {
	public:
		/// @brief Constructora por defecto
		MainMenuCameraRotation() = default;

		/// @brief Constructora 
		/// @param speed Velocidad de rotacion
		MainMenuCameraRotation(float speed);

		/// @brief Destructora por defecto
		~MainMenuCameraRotation() = default;

		/// @brief Metodo update heredado de Component 
		/// @param deltaTime El tiempo entre frames calculado por el motor
		void Update(float t) override;

		/// @brief Rotacion global
		/// @return Devuelve la rotacion global
		inline float GetGlobalRotation() const { return _globalRotation; }

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "ROTATE_MENU_CAMERA"; }

	protected:
		/// @brief Construye el componente dado unos argumentos. Se obtendran de una lectura de un .lua
		/// @param args Argumentos leidos de .lua
		void Init(eden_script::ComponentArguments* args) override;

		/// @brief Metodo Awake override de Component
		void Awake() override {}

		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes
		void Start() override;
	private:
		/// @brief Velocidad de movimiento
		float _movingSpeed = 0.0f;

		/// @brief Rotacion global
		static float _globalRotation;

		/// @brief Rotacion local
		float _localRotation = 0.0f;

		/// @brief Booleano que comprueba si esta en el menu inicial o no
		static bool _isOnMainMenu;

		/// @brief Referencia al Transform
		eden_ec::CTransform* _transform = nullptr;
	};
}

#endif