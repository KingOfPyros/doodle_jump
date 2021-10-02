#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Hero_dumb.h"


class Window : public sf::RenderWindow
{
	std::string name;
	sf::Texture texture;
	Hero_dumb* player;
public:
	Window(int width, int heigth, std::string name) : sf::RenderWindow(sf::VideoMode(width, heigth), name)
	{
		if (!texture.loadFromFile("background.png")) {
			throw;
		}
		this->player = new Hero_dumb(200, 600);
	}

	void show() {
		while (this->isOpen())
		{
			sf::Event event;
			while (this->pollEvent(event))
			{
				if (event.type == sf::Event::Closed) {
					this->close();
				}
			}


			this->clear(sf::Color::Red);
			texture.setRepeated(true);
			texture.loadFromFile("background.png");
			sf::Sprite sprite(texture);
			this->draw(sprite);
			this->draw(this->player->getSprite());
			this->display();
		}
	}
};