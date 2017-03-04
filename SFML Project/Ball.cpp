#include "Ball.h"

Ball::Ball()
{
	myBallTexture.loadFromFile("../Resources/ball.png");
	myBallSprite.setTexture(myBallTexture);
	myBallSprite.setTextureRect(sf::IntRect(0, 0, 24, 24));
	myBallSprite.setPosition(276, 450);
	direction.x = -1.5f;
	direction.y = -1.5f;
	myKeyFrameDuration = 0.0f;
}


Ball::~Ball()
{
}

void Ball::update(float dt, sf::FloatRect playerRect) //Updates ball movement
{
	//sf::Vector2f direction(0.0f, 0.0f);
	myKeyFrameDuration += dt;

	//Checks player collision through player.update


	//BALL COLLISSION TO WALLS!
	if (myBallSprite.getPosition().x < 0)		//Hits left screen
	{
		direction.x = 1.5f;
	}

	if (myBallSprite.getPosition().x + myBallSprite.getGlobalBounds().width > 600)		//hits right screen
	{
		direction.x = -1.5f;
	}
	
	if (myBallSprite.getPosition().y < 0)		//hits up screen
	{
		direction.y = 1.5f;
	}

	if (myBallSprite.getPosition().y + myBallSprite.getGlobalBounds().height > 600)		//hits down screen
	{
		exit(1);
	}

	if (playerRect.intersects(myBallSprite.getGlobalBounds()))
	{
		direction.y = -1.5;
	}

	
	myBallSprite.move(direction * ballSpeed * dt); //Makes it move!

}

void Ball::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	target.draw(myBallSprite, states);
}
