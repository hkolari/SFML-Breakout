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
	float playerSpeed = 250.0f;

	float myKeyFrameDuration;

	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};

#endif
