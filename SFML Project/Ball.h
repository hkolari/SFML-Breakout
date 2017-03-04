#ifndef BALL_H
#define BALL_H
#include <SFML\Graphics.hpp>

class Ball : public sf::Drawable
{
public:
	Ball();
	~Ball();

	void update(float dt);

private:
	sf::Texture myBallTexture;
	sf::Sprite myBallSprite;
	float ballSpeed = 180.0f;

	float myKeyFrameDuration;

	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};

#endif
