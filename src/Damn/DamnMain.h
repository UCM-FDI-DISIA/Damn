#ifndef DAMN_MAIN_H_
#define DAMN_MAIN_H_
#include <string>

namespace eden {
	class SceneManager;
}

namespace eden_ec {
	class ComponentFactory;
}

namespace eden_input {
	class InputManager;
}

extern "C" __declspec(dllexport) void RegisterComponents();
extern "C" __declspec(dllexport) void LoadScene();

#endif // !DAMN_MAIN_H_