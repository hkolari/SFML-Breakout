#include <SFML/Graphics.hpp>
#include "Game.h"
#include "Menu.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "Breakout by Henry Kolari (PAACI16)!");
	Menu mainMenu(window.getSize().x, window.getSize().y);

	Game game;
	sf::Clock gameTime;
	int whichScreen = 0;		//0 = menu window, 1 = game window, 2 = high score window

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event)) //JUST FOR EVENT INPUTS!
		{
			if (whichScreen == 0)
			{
				mainMenu.menuHandler(event);		//Our menu controls that requires "event" variable to work. It returns a value, sometimes unrelevant due to controls.

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
			game.Update(gameTime.restart().asSeconds());
			window.draw(game);
		}
		window.display();
	}

	return 0;
}