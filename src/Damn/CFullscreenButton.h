#ifndef DAMN_FULLSCREEN_BUTTON
#define DAMN_FULLSCREEN_BUTTON

#include <Component.h>

namespace eden_ec {
	class Entity;
}

namespace damn {
	class CFullscreenButton : public eden_ec::Component {
	public:
		CFullscreenButton() = default;
		~CFullscreenButton() = default;

		void Init(eden_script::ComponentArguments* args) override;

		static void SetIsFullscreen();

		static std::string GetID() { return "BUTTON_FULLSCREEN"; }
	private:
		std::string _button;
		static bool _isFullscreen;

		void Awake() override {}
		void Start() override;

		void Update(float t) override;
	};
}

#endif