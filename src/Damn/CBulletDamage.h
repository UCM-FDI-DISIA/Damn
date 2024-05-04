#ifndef BULLET_COMPONENT_H_
#define BULLET_COMPONENT_H_

#include <Component.h>

namespace damn {
	class CBulletDamage : public eden_ec::Component
	{
	public:
		CBulletDamage() = default;
		~CBulletDamage() override = default;

		void Init(eden_script::ComponentArguments* args) override;
		void Start() override {};
		void Awake() override {};
		void Update(float deltaTime) override {};

		static std::string GetID() { return "BULLET_DAMAGE"; }
	protected:
		int _damage;
	};
}

#endif // BULLET_COMPONENT_H_