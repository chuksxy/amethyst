#include "stdafx.h"
#include "Engine.h"

/* 
 * A class representing our game engine 
 */
 void Engine::start() {
	 if ( s_gameState != UNINITIALSED ) {
		 return;
	 }

	 s_mainWindow.create(sf::VideoMode(680, 240, 32), "amethyst");
	 s_gameState= PLAYMODE;

	 while ( exists() ) {
		 update();
	 }

	 s_mainWindow.close();
}

 bool Engine::exists() {
	 if (s_gameState == EXITING) {
		 return true;
	 }
	 else {
		 return false;
	 }
 }

 void Engine::update() {

 }

 Engine::Engine() {
	 s_gameState = UNINITIALSED;
 }

