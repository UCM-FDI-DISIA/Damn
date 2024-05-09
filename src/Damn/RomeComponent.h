#ifndef _ROME_H
#define _ROME_H

#include <Component.h>

namespace damn {
	class RomeComponent : public eden_ec::Component
	{
	public:
		RomeComponent() = default;
		~RomeComponent() = default;

		void Update(float dt) override {};

		static std::string GetID() { return "ROME_COMP"; }

	protected:
		/// @brief Construye el componente dado unos argumentos. Se obtendran de una lectura de un .lua
		/// @param args Argumentos leidos de .lua
		void Init(eden_script::ComponentArguments* args) override {};
		/// @brief Metodo heredado de Component
		void Start() override;

		void Awake() override {};
	};
}
#endif

