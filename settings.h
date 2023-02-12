#pragma once
#include <SFML/Graphics.hpp>

const float WINDOW_WIDTH = 600;
const float WINDOW_HEIGHT = 1000;
const std::string WINDOW_TITLE = "SFML Lesson2";
const float FPS = 60.f;

const sf::Vector2f GrassStartPos{ 0, 0 };
const std::string Grass_File_Name("trava.jpg");
const sf::Vector2f GrassStartPos2{ 0, -WINDOW_HEIGHT };

const sf::Vector2f RoadStartPos{ 150, 0 };
const std::string Road_File_Name("road.png");
const sf::Vector2f RoadStartPos2{ 150, -WINDOW_HEIGHT };

const sf::Vector2f MachinaStartPos{ 200, 700 };
const std::string Machina_File_Name("Machina__2.png");
const sf::Vector2f MachinaStartPos2{ 0, -WINDOW_HEIGHT };

const sf::Vector2f VragStartPos{ 150, -500 };
const std::string Vrag_File_Name("vrag 1.png");

const sf::Vector2f VragStartPos2{ 300, -700 };
const std::string Vrag_File_Name2("vrag 2.png");

const sf::Vector2f VragStartPos3{ 330, -400 };
const std::string Vrag_File_Name3("vrag 3.png");

float SpriteSpeedY = 4.f;
const float VragSpeedy = 8.f;