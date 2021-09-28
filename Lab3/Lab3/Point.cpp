// Point.cpp
#include <iostream>
#include <string>
#include <sstream>
#include "Point.h"

using namespace std;

bool Point::setX(int value)
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
bool Point::setY(int value)
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

bool Point::Init(int x, int y)
{
	return setX(x) && setY(y);
}

void Point::Read()
{
	int x;
	int y;
	do
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
	} while (!Init(x, y));
}

void Point::Display() const
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}

string Point::toString() const
{
	stringstream sout;
	sout << "x = " << x << endl; 
	sout << "y = " << y << endl;
	return sout.str();
}

double Point::distance() {
	return sqrt(pow(x, 2) + pow(y, 2));
}

string Point::compare() {
	if (x == y) {
		return "Координати рівні!";
	}
	else {
		return "Координати нерівні!";
	}
}