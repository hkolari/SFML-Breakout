#include "PlayerPad.h"

PlayerPad::PlayerPad() //Load textures and give value
{
	playerTexture.loadFromFile("../Resources/paddle.png");
	playerSprite.setTexture(playerTexture);
	playerSprite.setTextureRect(sf::IntRect(0, 0, 128, 32));
	playerSprite.setPosition(230, 550);
	myKeyFrameDuration = 0.0f;
}


PlayerPad::~PlayerPad()
{
}

void PlayerPad::update(float dt) //Updates movement of PlayerPad
{
	sf::Vector2f direction(0.0f, 0.0f);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			direction.x = -1.0f;
			myKeyFrameDuration += dt;
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			direction.x = 1.0f;
			myKeyFrameDuration += dt;
		}
	playerSprite.move(direction * playerSpeed * dt); //Makes it move!
}


void PlayerPad::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	target.draw(playerSprite, states);
}
