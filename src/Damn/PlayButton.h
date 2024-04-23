#ifndef PLAY_BUTTON_DAMN_EC
#define PLAY_BUTTON_DAMN_EC

#include "Component.h"

#pragma once

namespace eden_script {
	class ComponentArguments;
}

namespace eden_ec {

	class PlayButton : public Component
	{
	public:
		PlayButton() = default;
		~PlayButton() = default;

		void Init(eden_script::ComponentArguments* args) override {};

		static std::string GetID() { return "PLAY_BUTTON"; }
	protected:
		void Awake() override {};
		void Start() override;

		void StartGame();
	};
}

#endif

