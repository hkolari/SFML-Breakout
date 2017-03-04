#include "MainGame.h"



MainGame::MainGame()
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
	myBall.update(dt);
	//update ball, update playerpad
}

void MainGame::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	target.draw(myBackgroundSprite, states);
	target.draw(myPlayer, states);
	target.draw(myBall, states);
	//target.draw(myPlayer, states);
	//Draw ball, draw playerpad
}