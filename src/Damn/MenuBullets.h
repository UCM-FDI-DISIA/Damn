#ifndef DAMN_MENU_BULLETS
#define DAMN_MENU_BULLETS

#include <Component.h>
#include <deque>

namespace eden_ec {
	class CTransform;
	class Entity;
}

namespace damn {
	class MenuBullets : public eden_ec::Component {
	public:
		/// @brief Constructora por defecto
		MenuBullets() = default;

		/// @brief Destructora por defecto
		~MenuBullets() = default;

		/// @brief Metodo update heredado de Component 
		/// @param deltaTime El tiempo entre frames calculado por el motor
		void Update(float dt) override;

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "MENU_BULLETS"; }

	protected:
		/// @brief Construye el componente dado unos argumentos. Se obtendran de una lectura de un .lua
		/// @param args Argumentos leidos de .lua
		void Init(eden_script::ComponentArguments* args) override {}

		/// @brief Metodo Awake override de Component
		void Awake() override {}

		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes
		void Start() override;

		/// @brief Referencia al Transform
		eden_ec::CTransform* _cameraTransform = nullptr;

		/// @brief Cola doblemente enlazada para almacenar las balas instanciadas y borrarlas en funcion de la altura
		std::deque<eden_ec::Entity*> _instantiatedBullets;

		/// @brief Angulo minimo
		int _minAngle = 0;

		/// @brief Angulo maximo
		int _totalAngle = 70;

		/// @brief Numero maximo de balas
		int _maxBullets = 300;

		/// @brief Balas actuales
		int _totalBullets = 0;

		/// @brief Tiempo de aparicion de balas
		float _spawnTime = 0.05f;

		/// @brief Contador de tiempo
		float _timer = 0;
		
	};
}

#endif