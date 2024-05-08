#ifndef DAMN_MENU_BULLETS
#define DAMN_MENU_BULLETS

#include <Component.h>
#include <deque>

namespace eden_ec {
	class CTransform;
	class Entity;
}

namespace damn {
	class MenuBullets : public eden_ec::Component {
	public:
		MenuBullets() = default;
		~MenuBullets() = default;

		void Update(float dt) override;

		static std::string GetID() { return "MENU_BULLETS"; }

	protected:
		void Init(eden_script::ComponentArguments* args) override {}

		void Awake() override {}

		void Start() override;

		eden_ec::CTransform* _cameraTransform;

		std::deque<eden_ec::Entity*> _instantiatedBullets;

		int _minAngle = 0;
		int _totalAngle = 70;
		int _maxBullets = 300;
		int _totalBullets = 0;

		
	};
}

#endif