#include "Cvijet.h"
#include "SFML\Graphics.hpp"

Cvijet::Cvijet(sf::RenderWindow *window) : window(window) {
	
	
}

void Cvijet::draw() {
	
	
		sf::CircleShape shape(50);
		shape.setFillColor(sf::Color(244, 164, 96));
		shape.setOutlineThickness(15);
		shape.setOutlineColor(sf::Color(255, 255, 0));
		shape.setPosition(30, 50);

		sf::RectangleShape line(sf::Vector2f(150, 10));
		line.rotate(90);
		line.setFillColor(sf::Color(0, 255, 0));
		line.setPosition(85, 165);

	
		window->draw(shape);
		window->draw(line);
		
}