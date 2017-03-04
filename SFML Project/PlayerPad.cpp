#include "PlayerPad.h"
#include "Ball.h"

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
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
			{
				direction.x = 1.0f;
				myKeyFrameDuration += dt;
			}
			if (playerSprite.getPosition().x < 0)
			{
				playerSprite.move(playerSpeed *dt, 0);
			}
			if (playerSprite.getPosition().x + playerSprite.getGlobalBounds().width > 600)
			{ 
				playerSprite.move(-playerSpeed * dt, 0 );
			}

	playerSprite.move(direction * playerSpeed * dt); //Makes it move!
}



sf::FloatRect PlayerPad::getRect()
{
	return this->playerSprite.getGlobalBounds();
}

void PlayerPad::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	target.draw(playerSprite, states);
}
