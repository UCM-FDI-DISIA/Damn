#ifndef DAMN_BUTTON_FUNCTIONS
#define DAMN_BUTTON_FUNCTIONS

#include "Component.h"

namespace damn {

	class ButtonFunctions : public eden_ec::Component
	{
	public:
		ButtonFunctions();
		~ButtonFunctions() = default;

		void Init(eden_script::ComponentArguments* args) override;

		static std::string GetID() { return "BUTTON_FUNCTIONS"; }
	protected:
		void Awake() override {}
		void Start() override {}

		void Update(float t) override;

		void Click();

		void Register();

		void StartGame();

		void OptionsMenu();

		void Exit();

		void Return();

		void SetFullscreen();

		void NextResolution();

		void PreviousResolution();

		void ChangeResolution();

		void ChangeResolutionText();

		void ChangeVolume(float num);

		void VolumeUp();

		void VolumeDown();

		void ChangeVolumeBar();

		void BackToMainMenu();
	private:
		int _iterations = 0;
	};
}

#endif

