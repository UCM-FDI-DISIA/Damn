#ifndef DAMN_BUTTON_FUNCTIONS
#define DAMN_BUTTON_FUNCTIONS

#include "Component.h"

namespace damn {

	class ButtonFunctions : public eden_ec::Component
	{
	public:
		ButtonFunctions() = default;
		~ButtonFunctions() = default;

		void Init(eden_script::ComponentArguments* args) override {};

		static std::string GetID() { return "BUTTON_FUNCTIONS"; }
	protected:
		void Awake() override {};
		void Start() override;

		void StartGame();

		void OptionsMenu();

		void Exit();
	};
}

#endif

