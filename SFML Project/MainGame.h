#ifndef MAINGAME_H
#define MAINGAME_H

#include <SFML\Graphics.hpp>
#include "PlayerPad.h"

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
	

	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;

};

#endif

