#ifndef DAMN_MENU_BULLETS
#define DAMN_MENU_BULLETS

#include <Component.h>
#include <deque>

namespace eden_ec {
	class CTransform;
	class Entity;
}

namespace damn {
	class CMenuBullets : public eden_ec::Component {
	public:
		CMenuBullets() = default;
		~CMenuBullets() = default;

		void Init(eden_script::ComponentArguments* args) override {}

		static std::string GetID() { return "MENU_BULLETS"; }

	protected:

		eden_ec::CTransform* _cameraTransform;

		std::deque<eden_ec::Entity*> _instantiatedBullets;

		int _minAngle = 225;
		int _maxAngle = 270;
		int _maxBullets = 300;
		int _totalBullets = 0;

		void Awake() override {}
		void Start() override;
		void Update(float dt) override;
	};
}

#endif