#ifndef BULLET_COMPONENT_H_
#define BULLET_COMPONENT_H_

#include <Component.h>

namespace damn {
	//Clase padre para las balas del jugador y enemigo
	class BulletDamage : public eden_ec::Component
	{
	public:
		BulletDamage() = default;
		~BulletDamage() override = default;

		void Init(eden_script::ComponentArguments* args) override;
	
		void Update(float deltaTime) override;

		static std::string GetID() { return "BULLET_DAMAGE"; }
	protected:

		void Start() override {};
		void Awake() override {};

		int _damage;
		float _timeAlive = 0;
		float _lifeTime = 5;
	};
}

#endif // BULLET_COMPONENT_H_