// Ellipse.cpp
#include "Ellipse.h"
#include <math.h>
#include <iostream>

Ellipse::Ellipse(void)
{}
Ellipse::Ellipse(int x, int y, int a, int b)
	: Curves(x, y)
{
	this->a = a;
	this->b = b;
}
Ellipse::~Ellipse(void)
{}
bool Ellipse::isBelong() // y = x*x / (a * a) + (y * y) / (b * b)
{
	int y = getY();
	y = pow(getX(), 2) / pow(a, 2) + pow(getY(), 2) / pow(b, 2) - 1;

	if (y > 0)
		return true;
	return false;
}