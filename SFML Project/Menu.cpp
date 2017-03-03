#include "Menu.h"
#include <iostream>
#include <string>

using namespace std;

Menu::Menu(float width, float height)
{
	font.loadFromFile("../resources/OpenSans.ttf");

	//Choice one which says "Play" at bottom left
	menuText[0].setColor(sf::Color::Red);
	menuText[0].setFont(font);
	menuText[0].setString("Play");
	menuText[0].setPosition(sf::Vector2f((width / 6), (height / 3) * 2));

	menuText[1].setColor(sf::Color::White);
	menuText[1].setFont(font);
	menuText[1].setString("High Score");
	menuText[1].setPosition(sf::Vector2f((width / 6) * 2, (height / 3) * 2));

	menuText[2].setColor(sf::Color::White);
	menuText[2].setFont(font);
	menuText[2].setString("Exit");
	menuText[2].setPosition(sf::Vector2f((width / 6) * 4, (height / 3) * 2));

	headlineText.setColor(sf::Color::White);
	headlineText.setFont(font);
	headlineText.setString("Breakout \nBy Henry Kolari (PAACI16)");
	headlineText.setPosition(width / 5, height / 8);


}


Menu::~Menu()
{
}

void Menu::drawMenu(sf::RenderWindow &menuWindow)		//Draws whole Main Menu
{
	menuWindow.draw(headlineText);		//Draws at the top of screen, game name and who created.

	for (int i = 0; i < 3; i++)
	{
		menuWindow.draw(menuText[i]);		//Draws the menu options
	}
}

void Menu::menuHandler(sf::Event event)
{
	switch (event.type)
	{
	case sf::Event::KeyReleased:
		switch (event.key.code)
		{
			case sf::Keyboard::Right:
			{
				moveRight();
				break;
			}

			case sf::Keyboard::Left:
			{
				moveLeft();
				break;
			}

			case sf::Keyboard::Return:
			{
				switch (getSelectedBox())
				{
				case 0:
				{
					cout << "Play button has been pressed" << endl;
					break;
				}
				case 1:
				{
					cout << "High Score button has been pressed" << endl;
					break;
				}
				case 2:
				{
					cout << "Exit button has been pressed" << endl;
					break;
				}
					
				}
				break;
			}
		}
	}
}

void Menu::moveRight()
{
	if (selectedBox + 1 < 3) //Won't work if we try go right from "Exit"
	{
		menuText[selectedBox].setColor(sf::Color::White);
		selectedBox++;		//updates on our position in array
		menuText[selectedBox].setColor(sf::Color::Red);
	}
}

void Menu::moveLeft() //Won't work if we go left from "Start"
{
	if (selectedBox - 1 >= 0)
	{
		menuText[selectedBox].setColor(sf::Color::White);
		selectedBox--;		//updates on our position in array
		menuText[selectedBox].setColor(sf::Color::Red);
	}
}
