#include "App.h"
#include "Library.h"
App::App()
{
}

App::~App()
{

}

int main()
{
	App app;
	while (app.startGame())
	{
	}

	return 0;
}


bool App::startGame()
{
	
	window.create(VideoMode(WINDOWSIZEXY[X],WINDOWSIZEXY[Y]), GAMENAME, Style::Titlebar | Style::Close);
	Game oneGame(window);
	oneGame.start();

	while (window.isOpen())
	{
		
		Event event;
		
		//envoie des événements au jeu
		while (window.pollEvent(event))
		{
			oneGame.update(event);
		
		}
		
		//contrôle le temps pour descendre une pièce
		oneGame.tick();
	}
	return false;
}





