#include "PlayerPad.h"

PlayerPad::PlayerPad()
{
	playerTexture.loadFromFile("../Resources/paddle.png");
	playerSprite.setTexture(playerTexture);
	playerSprite.setTextureRect(sf::IntRect(300, 100, 128, 32));

	myKeyFrameDuration = 0.0f;
}


PlayerPad::~PlayerPad()
{
}

void PlayerPad::update(float dt)
{
	sf::Vector2f direction(0.0f, 0.0f);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		direction.x = -1.0f;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		direction.x = 1.0f;
	}
}

void PlayerPad::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	target.draw(playerSprite, states);
}
