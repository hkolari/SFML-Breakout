#ifndef LEVEL_H
#define LEVEL_H
#include "Brick.h"
#include <SFML\Graphics.hpp>

class Level
{
public:
	Level(int capacity = 3);
	Level(const Level & origObj);
	~Level();

	void addBrick(float brickPosX, float brickPosY);
	void removeBrick();
	int getNrOfBricks() const;

	Level &operator=(const Level &ref);

	void expand();

private:
	int amountOfBricks;
	int capacity;
	Brick* *bricks;

};

#endif

