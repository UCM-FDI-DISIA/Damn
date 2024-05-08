#define _CRTDBG_MAP_ALLOC
#ifndef AMMO_BOX_COMPONENT_H
#define AMMO_BOX_COMPONENT_H

#include "Component.h"
#include "Vector3.h"

namespace eden_ec {
	class CTransform;
}

namespace damn {
	class AmmoBoxComponent : public eden_ec::Component
	{
	public:
		AmmoBoxComponent() = default;
		~AmmoBoxComponent() = default;

		void Init(eden_script::ComponentArguments* args) override {};

		void Update(float t) override;

		void PickUpAmmo();

		static std::string GetID() { return "AMMO_BOX_COMPONENT"; }

	protected:
		void Awake() override {};

		void Start() override;

		const static std::string _id;
	private:
		eden_ec::CTransform* _transform;
		float _rotationSpeed = 70;
		float _timeCounter = 0;
		float _scaleGrowth = 1.2;
		float _minScale = 1;
		float _lifeTime = 5;
		int _ammoGiven = 3;
		eden_utils::Vector3 _originalScale;
	};
}
#endif
