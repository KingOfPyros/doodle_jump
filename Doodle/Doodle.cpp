#include <iostream>
#include "Window.h"



int main()
{
	Window * window = new Window(500,800, "Doodle jump");
	window->show();

	delete window;
	return 0;
	
}

