#include <SFML/Graphics.hpp>
#include "Menu.h"
#include "MainGame.h"
#include <crtdbg.h>

#include "Level.h"

int main()
{
	Level* myLevel = new Level(2);

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	sf::RenderWindow window(sf::VideoMode(600, 600), "Breakout by Henry Kolari (PAACI16)!");
	Menu mainMenu(window.getSize().x, window.getSize().y);
	MainGame game; //TODO: Does not work for some reason. 	//Game game;
	window.setFramerateLimit(60);
	myLevel->addBrick(50, 45);
	sf::Clock gameTime;
	int whichScreen = 0;		//0 = menu window, 1 = game window, 2 = high score window, 3 = exit/close window

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) //JUST FOR EVENT INPUTS!
		{
			if (whichScreen == 0)
			{
				whichScreen = mainMenu.menuHandler(event);		//Our menu controls that requires "event" variable to work. It returns a value, sometimes unrelevant due to controls.
			if (event.type == sf::Event::Closed)
				window.close();
			}
		}

		window.clear();

		if (whichScreen == 0)		//If main menu is still selected it will draw the menu
		{
			mainMenu.drawMenu(window);
		}

		if (whichScreen == 1)
		{
			window.draw(game);
			game.update(gameTime.restart().asSeconds());
			if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)))
			{
				window.close();
			}
		}

		if (whichScreen == 2)
		{
			//High Score stuff
		}

		if (whichScreen == 3)
		{
			window.close();
		}

		window.display();
	}

	delete myLevel;
	return 0;
}