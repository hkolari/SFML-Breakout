#include "Level.h"
#include <string>

Level::Level(int capacity)
{
	this->amountOfBricks = 0;
	this->capacity = capacity;
	this->bricks = new Brick*[this->capacity];
}

Level::Level(const Level & origObj)
{
	this->amountOfBricks = origObj.amountOfBricks;
	this->capacity = origObj.capacity;
	this->bricks = new Brick*[origObj.capacity];
}


Level::~Level()
{
}

void Level::addBrick(float brickPosX, float brickPosY)
{
	if (this->amountOfBricks == this->capacity)
	{
		this->expand();
	}
	this->bricks[this->amountOfBricks++] = new Brick(brickPosX, brickPosY);
}

int Level::getNrOfBricks() const
{
	return this->amountOfBricks;
}

void Level::expand()
{
	this->capacity += 2;
	Brick* *temp = new Brick*[this->capacity];
	for (int i = 0; i < this->amountOfBricks; i++)
	{
		temp[i] = this->bricks[i];
	}
	delete[] this->bricks;
	this->bricks = temp;
}