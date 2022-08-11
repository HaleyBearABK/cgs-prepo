#include <iostream>
#include "ResetButton.h"

ResetButton::ResetButton(int x, int y)
	: PlaceableActor(x, y)
{

}

void ResetButton::Draw()
{
	std::cout << (char)30;
}
