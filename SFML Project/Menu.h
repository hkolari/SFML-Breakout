#ifndef MENU_H
#define MENU_H
#include "SFML/Graphics.hpp"

class Menu
{
public:
	Menu(float width, float height);
	~Menu();

	void drawMenu(sf::RenderWindow &menuWindow);
	void menuHandler(sf::Event event);
	void moveRight();
	void moveLeft();
	int getSelectedBox() { return selectedBox; }

private:

	sf::Text menuText[3];		//The reason I make it a array is so I can easily switch between it when I use "int selectedBox".
	sf::Text headlineText;
	sf::Font font;
	int selectedBox = 0;

};

#endif 
