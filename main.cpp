#include <SFML/Graphics.hpp>
#include "settings.h"
#include "Roadobj.h"
#include "Player.h"
#include "vrag.h"
using namespace sf;

int main()
{
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE, Style::Close | Style::Titlebar);
	window.setPosition(Vector2i{ (1920 - (int)WINDOW_WIDTH) / 2,0 });
	window.setFramerateLimit(FPS);

	Roadobj Doroga, Doroga2;
	roadObjInit(Doroga, RoadStartPos, Road_File_Name, 150.f);
	roadObjInit(Doroga2, RoadStartPos2, Road_File_Name, 150.f);
	Roadobj Trava, Trava2;
	roadObjInit(Trava, GrassStartPos, Grass_File_Name, 0.f);
	roadObjInit(Trava2, GrassStartPos2, Grass_File_Name, 0.f);
	Player Machina;
	playerInit(Machina, MachinaStartPos, Machina_File_Name);
	Vrag Vrag, Vrag2, Vrag3;
	vragInit(Vrag, VragStartPos, Vrag_File_Name);
	vragInit(Vrag2, VragStartPos2, Vrag_File_Name2);
	vragInit(Vrag3, VragStartPos3, Vrag_File_Name3);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
		roadObjUpdate(Trava);
		roadObjUpdate(Trava2);
		roadObjUpdate(Doroga);
		roadObjUpdate(Doroga2);
		playerUpdate(Machina);
		vragUpdate(Vrag);
		vragUpdate(Vrag2);
		vragUpdate(Vrag3);

		RoadObjDraw(window, Trava);
		RoadObjDraw(window, Doroga);
		RoadObjDraw(window, Trava2);
		RoadObjDraw(window, Doroga2);
		playerDraw(window, Machina);
		vragDraw(window, Vrag);
		vragDraw(window, Vrag2);
		vragDraw(window, Vrag3);

		window.display();
	}

	return 0;
}