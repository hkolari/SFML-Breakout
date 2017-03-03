#ifndef GAME_H
#define GAME_H

#include <SFML\Graphics.hpp>
#include "Player.h"

class Game : public sf::Drawable
{
public:
	Game();

	void Update(float dt);

private:
	sf::Texture mBackgroundTex;
	sf::Sprite mBackgroundSprite;
	Player mPlayer;

	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};
#endif