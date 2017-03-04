#ifndef BRICK_H
#define BRICH_H
#include <SFML\Graphics.hpp>

class Brick : public sf::Drawable
{
public:
	Brick();
	~Brick();
	sf::FloatRect getRect();

private:
	sf::Texture brickTexture;
	sf::Sprite brickSprite;

	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};

#endif
