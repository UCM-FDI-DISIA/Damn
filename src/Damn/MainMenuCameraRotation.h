#ifndef DAMN_MAIN_MENU_CAM_ROTATION
#define DAMN_MAIN_MENU_CAM_ROTATION

#include <Component.h>

namespace eden_ec {
	class CTransform;
}

namespace damn {
	class MainMenuCameraRotation : public eden_ec::Component {
	public:
		MainMenuCameraRotation() = default;
		MainMenuCameraRotation(float speed);
		~MainMenuCameraRotation() = default;

		void Update(float t) override;

		inline float GetGlobalRotation() const { return _globalRotation; }

		static std::string GetID() { return "ROTATE_MENU_CAMERA"; }

	protected:
		void Init(eden_script::ComponentArguments* args) override;

		void Awake() override {}

		void Start() override;
	private:
		float _movingSpeed;
		static float _globalRotation;
		float _localRotation;
		static bool _isOnMainMenu;

		eden_ec::CTransform* _transform;
	};
}

#endif