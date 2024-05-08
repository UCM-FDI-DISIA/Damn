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
		
		static std::string GetID() { return "SOUND_CONTROLLER"; }

	protected:
		void Init(eden_script::ComponentArguments* args) override {}
		void Awake() override {}
		void Start() override;

	private:
		static bool _alreadyFound;
	};
}

#endif