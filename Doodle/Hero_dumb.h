#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Hero_dumb
{
	int x = 250, y = 0;
	sf::Texture texture;
	sf::Sprite sprite;

public:

	Hero_dumb(int x, int y)
	{
		this->texture.loadFromFile("doodle.png");
		this->sprite.setTexture(texture);
	}

	sf::Sprite getSprite() {
		return this->sprite;
	}

	void moveRight() {
		this->x++;
		this->y++;
	}

	void moveLeft() {
		this->x--;
		this->y++;
	}

	void Jump() {
		this->y;
	}
};

