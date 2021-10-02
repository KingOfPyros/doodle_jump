#include <iostream>
#include "Window.h"



int main()
{
	Window * window = new Window(600,900, "Doodle jump");
	window->show();

	delete window;
	return 0;
	
}

