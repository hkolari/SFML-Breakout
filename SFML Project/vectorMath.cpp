#include "vectorMath.h"


vectorMath::vectorMath()
{
}


vectorMath::~vectorMath()
{
}


float dotProduct(const sf::Vector2f& leftVector, const sf::Vector2f& rightVector)
{
	return leftVector.x * rightVector.x + leftVector.y * rightVector.y;
}

sf::Vector2f normalise(sf::Vector2f source)
{
	float length = std::sqrt(dotProduct(source, source));
	if (length != 0) source /= length;
	return source;
}

sf::Vector2f reflection(const sf::Vector2f& speed, const sf::Vector2f& normal)
{
	return -2.f * dotProduct(speed, normal) * normal + speed;
}

float lengthSquared(const sf::Vector2f& source)
{
	return dotProduct(source, source);
}