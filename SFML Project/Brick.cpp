#include "Brick.h"



Brick::Brick()
{
	brickTexture.loadFromFile("../Resources/brick.jpg");
	brickSprite.setTexture(brickTexture);
	brickSprite.setTextureRect(sf::IntRect(0, 0, 100, 60));
}

Brick::~Brick()
{
}

sf::FloatRect Brick::getRect()
{
	return this->brickSprite.getGlobalBounds();
}

void Brick::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	target.draw(brickSprite, states);
}
