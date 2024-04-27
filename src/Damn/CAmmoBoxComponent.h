#define _CRTDBG_MAP_ALLOC
#ifndef AMMO_BOX_COMPONENT_H
#define AMMO_BOX_COMPONENT_H

#include "Component.h"
#include "Vector3.h"


namespace eden_ec {
	class CAmmoBoxComponent : public Component
	{
	public:
		CAmmoBoxComponent() = default;
		~CAmmoBoxComponent() = default;

		static std::string GetID() { return "AMMO_BOX_COMPONENT"; }

		void Init(eden_script::ComponentArguments* args) override;

		void Awake() override;

		void Start() override;

		void Update(float t) override;

	protected:
		const static std::string _id;
	private:
		class CTransform* _transform;
		float _rotationSpeed = 70;
		float _timeCounter = 0;
		float _scaleGrowth = 1.2;
		float _minScale = 1;
		eden_utils::Vector3 _originalScale;
	};
}
#endif
