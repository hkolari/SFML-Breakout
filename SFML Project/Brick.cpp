#include "Brick.h"



Brick::Brick(const Brick& origObj)
{
	this->brickPosX = origObj.brickPosX;
	this->brickPosY = origObj.brickPosY;
}

Brick& Brick::operator=(const Brick& origObj)
{
	this->brickPosX = origObj.brickPosX;
	this->brickPosY = origObj.brickPosY;
	return *this;
}

void Brick::buildBrick()
{
	brickSprite.setPosition(this->brickPosX, this->brickPosY);
}


Brick::Brick()
{
	brickPosX = 0;
	brickPosY = 0;
	brickTexture.loadFromFile("../Resources/brick.jpg");
	brickSprite.setTexture(brickTexture);
	brickSprite.setTextureRect(sf::IntRect(0, 0, 100, 60));
	brickSprite.setPosition(brickPosX, brickPosY);
}

Brick::Brick(float brickPosX, float brickPosY)
{
	this->brickPosX = brickPosX;
	this->brickPosY = brickPosY;
}

Brick::~Brick()
{
}

sf::FloatRect Brick::getRect()
{
	return this->brickSprite.getGlobalBounds();
}

float Brick::getBrickPosX() const
{
	return brickPosX;
}

float Brick::getBrickPosY() const
{
	return brickPosY;
}

void Brick::setBrickPosX(float brickPosX)
{
	this->brickPosX = brickPosX;;
}

void Brick::setBrickPosY(float brickPosY)
{
	this->brickPosY = brickPosY;;
}

void Brick::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	target.draw(brickSprite, states);
}
