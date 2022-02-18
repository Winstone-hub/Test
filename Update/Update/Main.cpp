#include <iostream>
#include "MainUpdate.h"

int main(void)
{
	MainUpdate Main;
	Main.Start();

	while (true)
	{
		Main.Update();
		Main.Render();
	}

	Main.Destroy();

	return 0;
}