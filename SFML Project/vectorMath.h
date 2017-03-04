#ifndef VECTORMATH_H
#define VECTORMATH_H
#include "SFML\Graphics.hpp"

class vectorMath
{
public:
	vectorMath();
	~vectorMath();

	float dotProduct(const sf::Vector2f& leftVector, const sf::Vector2f& rightVector);
	sf::Vector2f normalise(sf::Vector2f source);
	sf::Vector2f reflection(const sf::Vector2f& speed, const sf::Vector2f& normal);
	float lengthSquared(const sf::Vector2f& source);
};

#endif

