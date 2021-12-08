// Straight.cpp
#include "Straight.h"
Straight::Straight(void)
{}
Straight::Straight(int x, int y, int a, int b)
	: Curves(x, y)
{
	this->a = a;
	this->b = b;
}
Straight::~Straight(void)
{}
bool Straight::isBelong() // y = a*x + b
{
	int y = getY();
	y = a * getX() + b;

	if (y > 0)
		return true;
	return false;
}