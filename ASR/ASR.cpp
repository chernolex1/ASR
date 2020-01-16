#include <iostream>

#include "IDisplay.h"
#include "TSimpleDisplay.h"
#include "TGameBase.h"

int main()
{
	ASRGame::TSimpleDisplay display;
	ASRGame::TGameBase gameBase(display);

	gameBase.DrawGameState();
}