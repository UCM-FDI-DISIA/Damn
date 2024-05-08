#ifndef DAMN_SOUND_CONTROLLER
#define DAMN_SOUND_CONTROLLER

#include <Component.h>

namespace eden_ec {
	class CAudioEmitter;
}

namespace damn {
	class SoundController : public eden_ec::Component {
	public:
		SoundController() = default;
		~SoundController() = default;
		void Init(eden_script::ComponentArguments* args) override {}

		static std::string GetID() { return "SOUND_CONTROLLER"; }
	private:
		static bool _alreadyFound;

		void Awake() override {}
		void Start() override;
	};
}

#endif