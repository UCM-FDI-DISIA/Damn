#ifndef BULLET_COMPONENT_H_
#define BULLET_COMPONENT_H_

#include <Component.h>

namespace damn {
	//Clase padre para las balas del jugador y enemigo
	class BulletDamage : public eden_ec::Component
	{
	public:
		/// @brief Constructora por defecto
		BulletDamage() = default;

		/// @brief Destructora por defecto
		~BulletDamage() override = default;

		/// @brief Construye el componente dado unos argumentos. Se obtendrán de una lectura de un .lua
		/// @param args Argumentos leídos de .lua
		void Init(eden_script::ComponentArguments* args) override;
	
		/// @brief Metodo update heredado de Component 
		/// @param deltaTime El tiempo entre frames calculado por el motor
		void Update(float deltaTime) override;

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "BULLET_DAMAGE"; }
	protected:
		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes
		void Start() override {};

		/// @brief Metodo Awake override de Component
		void Awake() override {};

		/// @brief Danio de la bala
		int _damage = 0;

		/// @brief Tiempo de vida
		float _timeAlive = 0;
		/// @brief Tiempo maximo de vida
		float _lifeTime = 5;
	};
}

#endif // BULLET_COMPONENT_H_