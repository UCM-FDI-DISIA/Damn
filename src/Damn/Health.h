#ifndef HEALTH_H_
#define HEALTH_H_

#include <Component.h>

namespace damn {
	class Health : public eden_ec::Component
	{
	public:
		/// @brief Constructora por defecto
		Health() = default;

		/// @brief Destructora por defecto
		~Health() override = default;
		
		/// @brief Metodo update heredado de Component 
		/// @param deltaTime El tiempo entre frames calculado por el motor
		void Update(float deltaTime) override {};

		/// @brief Pone la vida del jugador al valor dado
		/// @param value Vida que se le va a poner al jugador
		inline void SetCurrentHealth(int value) { _currentHealth = value; }
		
		/// @brief Recupera vida, sin sobrepasar la vida maxima
		/// @param health Cantidad de vida que va a recuperar el jugador
		void GainHealth(int health);

		/// @brief Quita vida. Si la vida baja a 0, se llama al metodo Die
		/// @param health Cantidad de vida que se va a quitar
		virtual void LoseHealth(int health);

		/// @brief Devuelve la vida maxima
		/// @return Devuelve la vida maxima
		int GetMaxHealth();

		/// @brief Devuelve la vida actual
		/// @return Devuelve la vida actual
		int GetCurrentHealth();

		/// @brief Pone la vida maxima a la entidad
		void SetCurrentToMax();

		/// @brief ID del componente
		/// @return Devuelve el ID del componente
		static std::string GetID() { return "HEALTH"; }

	protected:
		/// @brief Construye el componente dado unos argumentos. Se obtendrán de una lectura de un .lua
		/// @param args Argumentos leídos de .lua
		void Init(eden_script::ComponentArguments* args) override;

		/// @brief Metodo heredado de Component que se usa para coger referencias a otros componentes
		void Start() override;

		/// @brief Metodo Awake override de Component
		void Awake() override {};
		
		/// @brief Metodo que se llama al quedarte sin vida
		inline virtual void Die() { _currentHealth = 0; };

		/// @brief Vida maxima
		int _maxHealth = 0;

		/// @brief Vida actual
		int _currentHealth = 0;
	};
}
#endif // HEALTH_H_