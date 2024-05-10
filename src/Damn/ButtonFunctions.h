#ifndef DAMN_BUTTON_FUNCTIONS
#define DAMN_BUTTON_FUNCTIONS

#include "Component.h"

namespace damn {

	class ButtonFunctions : public eden_ec::Component
	{
	public:
		/// @brief Constructora, registra las funciones de lua
		ButtonFunctions();
		
		/// @brief Destructora por defecto
		~ButtonFunctions() = default;

		void Update(float t) override;

		static std::string GetID() { return "BUTTON_FUNCTIONS"; }
	protected:
		void Init(eden_script::ComponentArguments* args) override;

		void Awake() override {}

		void Start() override {}
	private:
		/// @brief Control de las iteraciones realizadas
		int _iterations = 0;

		/// @brief Callbacks al hacer click en un boton
		void Click();

		/// @brief Registra todas las funciones de lua
		void Register();

		/// @brief Callback de empezar juego
		void StartGame();

		/// @brief Callback de entrar al menu de opciones
		void OptionsMenu();

		/// @brief Callback de cerrar juego
		void Exit();

		/// @brief Callback de volver a la escena anterior
		void Return();

		/// @brief Callback para poner/quitar pantalla completa
		void SetFullscreen();

		/// @brief Callback para cambiar la resolucion a la siguiente almacenada
		void NextResolution();

		/// @brief Callback para cambiar la resolucion a la anterior almacenada
		void PreviousResolution();

		/// @brief Cambia la resolucion a la actual
		void ChangeResolution();

		/// @brief Cambia el texto de la resolucion en funcion de la resolucion actual
		void ChangeResolutionText();

		/// @brief Cambia el volumen
		/// @param num Nivel de volumen
		void ChangeVolume(float num);

		/// @brief Aumenta el volumen
		void VolumeUp();

		/// @brief Decrementa el volumen
		void VolumeDown();

		/// @brief Cambia la barra de volumen
		void ChangeVolumeBar();

		/// @brief Vuelve al menu inicial
		void BackToMainMenu();

		/// @brief Reproduce un sonido
		/// @param filename Nombre del sonido
		/// @param volume Nivel de volumen
		/// @param loop Establece si el sonido suena en bucle o no
		void PlaySound(std::string filename, float volume = 1.0f, bool loop = false);
	};
}

#endif

