#ifndef _SPAWNPOINT_H
#define _SPAWNPOINT_H

#include <Component.h>

namespace damn {
	class GameManager;
	class Spawnpoint : public eden_ec::Component
	{
	public:
		Spawnpoint() = default;
		~Spawnpoint() override = default;
		void Update(float dt) {};
		void Init(eden_script::ComponentArguments* args) override {};
		void Awake() override {};
		void Start() override;

		static std::string GetID() { return "SPAWNPOINT"; }
	private:
		GameManager* gameManager;
	};
}
#endif

