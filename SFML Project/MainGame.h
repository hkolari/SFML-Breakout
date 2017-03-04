#ifndef MAINGAME_H
#define MAINGAME_H

#include <SFML\Graphics.hpp>
#include "PlayerPad.h"
#include "Ball.h"
#include "Brick.h"

class MainGame : public sf::Drawable
{
public:
	MainGame();
	~MainGame();
	void update(float dt);

private: 
	sf::Texture myBackgroundTexture;
	sf::Sprite myBackgroundSprite;
	PlayerPad myPlayer;
	Ball myBall;
	Brick myBrick;
	

	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;

};

#endif

