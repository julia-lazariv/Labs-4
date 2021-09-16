// Number.cpp
#include "Number.h"
#include <iostream>

using namespace std;

void Number::SetFirst(int value)
{
	first = value;
}

void Number::SetSecond(unsigned int value)
{
	second = value;
}

bool Number::Init(int x, int y)
{
	first = x;
	if (y >= 0)
	{
		second = y;
		return true;
	}
	else
	{
		second = 0;
		return false;
	}
}

void Number::Display() const
{
	cout << "first = " << first << " second = " << second << endl;
}

void Number::Read()
{
	int x, y;
	cout << "first = ";
	cin >> x;
	do {
		cout << "second = ";
		cin >> y;
	} while (!Init(x, y));
}

void Number::multiply(int N)
{
	first *= N;
	second *= N;
}

int Number::Sum()
{
	return first + (second / 10);
}