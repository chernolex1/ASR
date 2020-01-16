#include <iostream>

#include "IDisplay.h"
#include "TSimpleDisplay.h"

int main()
{
	ASRGame::TSimpleDisplay display;

	std::string state = "State";

	display.DrawState(state);
}