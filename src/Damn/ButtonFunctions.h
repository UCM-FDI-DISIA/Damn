#ifndef DAMN_BUTTON_FUNCTIONS
#define DAMN_BUTTON_FUNCTIONS

#include "Component.h"

namespace damn {

	class ButtonFunctions : public eden_ec::Component
	{
	public:
		ButtonFunctions();
		~ButtonFunctions() = default;

		void Update(float t) override;

		static std::string GetID() { return "BUTTON_FUNCTIONS"; }
	protected:
		void Init(eden_script::ComponentArguments* args) override;

		void Awake() override {}

		void Start() override {}
	private:
		int _iterations = 0;

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

		void PlaySound(std::string filename, float volume = 1.0f, bool loop = false);
	};
}

#endif

