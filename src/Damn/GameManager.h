#pragma once
#include <vector>
#include "Component.h"

namespace damn {
	class UIManager;
	class GameManager : public eden_ec::Component
	{
	public:
		GameManager() = default;
		~GameManager() = default;
		void Init(eden_script::ComponentArguments* args) override;
		void RegisterEnemy();
		void DieEnemy();
		void AddScore(int score);
		static std::string GetID() { return "GAMEMANAGER"; }

	private:
		void Update(float dt);
		float _timer;
		float _timerText;
		float _maxTime;
		int _score;
		int _enemiesLeft;
		UIManager* _uiManager;

	protected:
		void Awake() override;
		void Start() override;
	};
}
