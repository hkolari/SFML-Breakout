#ifndef BRICK_H
#define BRICH_H
#include <SFML\Graphics.hpp>


class Brick : public sf::Drawable
{
public:
	Brick();
	Brick(float brickPosX, float brickPosY);

	Brick(const Brick& origObj);
	Brick& operator=(const Brick& origObj);

	~Brick();
	sf::FloatRect getRect();

	float getBrickPosX() const;
	float getBrickPosY() const;

	void setBrickPosX(float brickPosX);
	void setBrickPosY(float brickPosY);

	void update(float dt);
	void buildBrick();

private:

	float brickPosX;
	float brickPosY;

	sf::Texture *brickTexture;
	sf::Sprite *brickSprite;


	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};

#endif
