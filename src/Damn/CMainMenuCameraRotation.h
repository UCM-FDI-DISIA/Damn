#ifndef DAMN_MAIN_MENU_CAM_ROTATION
#define DAMN_MAIN_MENU_CAM_ROTATION

#include <Component.h>

namespace eden_ec {
	class CTransform;
}

namespace damn {
	class CMainMenuCameraRotation : public eden_ec::Component {
	public:
		CMainMenuCameraRotation() = default;
		CMainMenuCameraRotation(float speed);
		~CMainMenuCameraRotation() = default;

		void Init(eden_script::ComponentArguments* args) override;

		void Awake() override {}

		void Start() override;

		void Update(float t) override;

		inline float GetGlobalRotation() const { return _globalRotation; }

		static std::string GetID() { return "ROTATE_MENU_CAMERA"; }

	private:
		float _movingSpeed;

		static float _globalRotation;
		float _localRotation;

		static bool _isOnMainMenu;

		eden_ec::CTransform* _transform;
	};
}

#endif