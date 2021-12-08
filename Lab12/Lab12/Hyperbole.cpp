// Hyperbole.cpp
#include "Hyperbole.h"
#include <math.h>
#include <iostream>

Hyperbole::Hyperbole(void)
{}
Hyperbole::Hyperbole(int x, int y, int a, int b)
	: Curves(x, y)
{
	this->a = a;
	this->b = b;
}
Hyperbole::~Hyperbole(void)
{}
bool Hyperbole::isBelong() // y = x*x / (a * a) - (y * y) / (b * b)
{
	int y = getY();
	y = pow(getX(), 2) / pow(a, 2) - pow(getY(), 2) / pow(b, 2) - 1;

	if (y > 0)
		return true;
	return false;
}