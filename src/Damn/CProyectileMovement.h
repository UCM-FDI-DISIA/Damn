#define _CRTDBG_MAP_ALLOC
#ifndef PROYECTILE_MOVEMENT_H
#define PROYECTILE_MOVEMENT_H
#include "Component.h"
#include "Vector3.h"

namespace eden_ec {
	class CTransform;
	class CProyectileMovement : public Component
	{
	public:
		CProyectileMovement() = default;
		~CProyectileMovement() = default;

		static std::string GetID() { return "PROYECTILE_MOVEMENT"; }

		void Init(eden_script::ComponentArguments* args) override;

		void Awake() override;

		void Start() override;

		void Update(float t) override;

		inline void SetDirection(eden_utils::Vector3 newDirection) { _direction = newDirection;}

	protected:
		CTransform* _tr;
		const static std::string _id;
	private:
		eden_utils::Vector3 _direction;
		float _proyectileSpeed = 0;
	};
}

#endif

