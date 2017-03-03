#include "MainGame.h"



MainGame::MainGame() : myPlayer()
{
	myBackgroundTexture.loadFromFile("../Resources/background1.jpg");
	myBackgroundSprite.setTexture(myBackgroundTexture);
}


MainGame::~MainGame()
{
}

void MainGame::update(float dt)
{
	myPlayer.update(dt);
	//update ball, update playerpad
}

void MainGame::drawGame(sf::RenderTarget &target, sf::RenderStates states) const
{
	target.draw(myBackgroundSprite, states);
	target.draw(myPlayer, states);
	//target.draw(myPlayer, states);
	//Draw ball, draw playerpad
}