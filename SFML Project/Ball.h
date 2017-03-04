#ifndef BALL_H
#define BALL_H
#include <SFML\Graphics.hpp>
#include "PlayerPad.h"

class Ball : public sf::Drawable
{
public:
	Ball();
	~Ball();

	void update(float dt, sf::FloatRect playerRect);

private:

	sf::Texture myBallTexture;
	sf::Sprite myBallSprite;
	float ballSpeed = 180.0f;
	sf::Vector2f direction;

	float myKeyFrameDuration;


	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};

#endif
