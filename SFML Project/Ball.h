#ifndef BALL_H
#define BALL_H

#include <SFML\Graphics.hpp>

class Ball
{

public:
	Ball();
	~Ball();

private:
	sf::Texture myBallTexture;
	float mySpeed = 180.0f;

	void drawCircle(sf::RenderTarget &target, sf::RenderStates states) const;
};

#endif // !BALL_H
