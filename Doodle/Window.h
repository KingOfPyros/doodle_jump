#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Window : public sf::RenderWindow
{
	std::string name;
	sf::Texture texture;
	sf::Image image;
public:
	Window(int width, int heigth, std::string name)  : sf::RenderWindow(sf::VideoMode(width, heigth), name)
	{

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
		}

		texture.setRepeated(true);
		texture.loadFromFile("background.png", sf::IntRect(600, 900, 0, 0));
		sf::Sprite sprite(texture);
		this->draw(sprite);
			this->display();
	}

	~Window() {}
};

