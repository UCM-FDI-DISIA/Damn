#pragma once
#include "Singleton.h"
#include "Component.h"

namespace Damn {
	class UIManager : public Singleton<UIManager>, eden_ec::Component
	{
	public:

	private:
		UIManager() = default;
		~UIManager() = default;
		void Update(float dt);
		static std::string GetID() { return "UI_MANAGER"; }
		//void Init(eden_script::ComponentArguments* args) override;

	protected:
		void Awake() override {};
		void Start() override {};

	};
}
