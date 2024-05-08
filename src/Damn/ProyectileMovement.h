#define _CRTDBG_MAP_ALLOC
#ifndef PROYECTILE_MOVEMENT_H
#define PROYECTILE_MOVEMENT_H

#include "Component.h"
#include "Vector3.h"

namespace eden_ec {
	class CTransform;
}

namespace damn {
	
	class ProyectileMovement : public eden_ec::Component
	{
	public:
		ProyectileMovement() = default;
		~ProyectileMovement() = default;

		void Update(float t) override;

		inline void SetDirection(eden_utils::Vector3 newDirection) { _direction = newDirection;}

		static std::string GetID() { return "PROYECTILE_MOVEMENT"; }

	protected:

		void Init(eden_script::ComponentArguments* args) override;

		void Awake() override;

		void Start() override;

		eden_ec::CTransform* _tr;
		const static std::string _id;
	private:
		eden_utils::Vector3 _direction;
		float _proyectileSpeed = 0;
	};
}

#endif

