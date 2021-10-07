#pragma once
#include <SFML/Graphics.hpp>
class Platform
{
	sf::Texture texture;
	sf::Sprite sprite;
public:
	Platform() {
		this->texture.loadFromFile("platform.png");
		this->sprite.setTexture(texture);
	};

	void show() {
		RectangleShape rectangle(Vector2f(70.f, 100.f));
		rectangle.move(165, 150);
		rectangle.setFillColor(Color(175, 180, 240));
	}

	~Platform(){}

};

