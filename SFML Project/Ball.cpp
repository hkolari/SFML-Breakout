#include "Ball.h"



Ball::Ball()
{
	myBallTexture.loadFromFile("../Resources/ball.png");
	myBallSprite.setTexture(myBallTexture);
	myBallSprite.setTextureRect(sf::IntRect(0, 0, 24, 24));
	myBallSprite.setPosition(276, 450);
	myKeyFrameDuration = 0.0f;
}


Ball::~Ball()
{
}

void Ball::update(float dt) //Updates ball movement
{
	sf::Vector2f direction(0.0f, 0.0f);
	direction.y = -1.0f;
	myKeyFrameDuration += dt;
	myBallSprite.move(direction * ballSpeed * dt); //Makes it move!
}

void Ball::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	target.draw(myBallSprite, states);
}
