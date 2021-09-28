// Point.h
#pragma once
#include <string>

using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	int getX() const { return x; }
	int getY() const { return y; }
	bool setX(int);
	bool setY(int);
	bool Init(int x, int y);
	void Read();
	void Display() const;
	string toString() const;
	double distance();
	string compare();
};