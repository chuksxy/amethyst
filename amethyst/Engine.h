#ifndef ENGINE
#define ENGINE

/* Includes------------------------------------------------------------------*/
#include "stdafx.h"
#include "SFML/Graphics.hpp"
#include "SFML\Window.hpp"

class Engine {
public:
	static void start(void);																//This is called at initialisation.
	Engine(void);
	
private:
	static bool exists(void);																//Checks if the game exists
	static void update(void);

	enum GameStates { UNINITIALSED, PAUSED, SPLASHSCREEN, PLAYMODE,
		MENU, EXITING
	};

	static GameStates s_gameState;															//The current state of the game
	static sf::RenderWindow s_mainWindow;													//Draw graphics to the screen
};
#endif // !ENGINE

