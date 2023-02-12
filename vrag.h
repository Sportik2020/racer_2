#pragma once
#include <SFML/Graphics.hpp>
#include "settings.h" 
struct Vrag {
	sf::Texture texture;
	sf::Sprite sprite;
};
void vragInit(Vrag& obj, sf::Vector2f pos, std::string fileName) {
	obj.texture.loadFromFile(fileName);
	obj.sprite.setTexture(obj.texture);
	obj.sprite.setPosition(pos);
}
void vragUpdate(Vrag& obj) {
	float PosX[]{ 120.f, 130.f,150.f,170.f,200.f,230.f,250.f,270.f,290.f,300.f,315.f,330.f };
	float PosY[]{ -100.f, -200.f,-270.f,-350.f,-400.f,-470.f,-550.f,-620.f,-680.f,-700.f,-750.f,-800.f };
	int index = rand() % 12;

	obj.sprite.move(0.f, VragSpeedy);
	if (obj.sprite.getPosition().y >= WINDOW_HEIGHT) {
		obj.sprite.setPosition(PosX[index], PosY[index]);
	}

}
void vragDraw(sf::RenderWindow& window, Vrag& obj) {
	window.draw(obj.sprite);
}