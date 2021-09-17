// Cirlce.cpp
#include <iostream>
#include "Circle.h"

using namespace std;

bool Circle::setX(int value)
{
	if (value > 0)
	{
		x = value;
		return true;
	}
	else
	{
		x = 0;
		return false;
	}

}
bool Circle::setY(int value)
{
	if (value > 0)
	{
		y = value;
		return true;
	}
	else
	{
		y = 0;
		return false;
	}
}
bool Circle::setR(int value)
{
	if (value > 0)
	{
		R = value;
		return true;
	}
	else
	{
		R = 0;
		return false;
	}
}

bool Circle::Init(int x, int y, int R)
{
	return setX(x) && setY(y) && setR(R);
}

void Circle::Read()
{
	int x;
	int y;
	int R;
	do
	{
		cout << "x = ? "; cin >> x;
		cout << "y = ? "; cin >> y;
		cout << "R = ? "; cin >> R;
	} while (!Init(x, y, R));
}

void Circle::Display() const
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "R = " << R << endl;
}

double Circle::getArea()
{
	double value = 3.1415926535897932385 * pow(R, 2);
	return value;
}

double Circle::getCircleLength()
{
	return 2 * 3.1415926535897932385 * R;
}