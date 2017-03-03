#include <SFML/Graphics.hpp>
//#include "Game.h"
#include "Menu.h"
#include "MainGame.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "Breakout by Henry Kolari (PAACI16)!");
	Menu mainMenu(window.getSize().x, window.getSize().y);
	MainGame game; //TODO: Does not work for some reason.
	window.setFramerateLimit(60);

	//Game game;
	sf::Clock gameTime;
	int whichScreen = 0;		//0 = menu window, 1 = game window, 2 = high score window, 3 = exit/close window
	int gottenChoice = 0;


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
			/*
			sf::Texture padTexture;
			padTexture.loadFromFile("../resources/paddle.png");
			sf::Sprite padSprite(padTexture);


			window.draw(padSprite);
			*/



			game.update(gameTime.restart().asSeconds());
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

	return 0;
}