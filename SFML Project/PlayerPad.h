#ifndef PLAYER_H
#define PLAYER_H
#include <SFML\Graphics.hpp>

class PlayerPad : public sf::Drawable
{
public:
	PlayerPad();
	~PlayerPad();

	void update(float dt);

private:
	sf::Texture playerTexture;
	sf::Sprite playerSprite;
	float playerSpeed = 180.0f;

	float myKeyFrameDuration;

	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};

#endif
