// Circle.h
#pragma once
#include <string>

using namespace std;

class Circle
{
private: 
	int x;
	int y;
	int R;
public:
	int getX() const { return x;  }
	int getY() const { return y; }
	int getR() const { return R; }
	bool setX(int);
	bool setY(int);
	bool setR(int);
	bool Init(int x, int y, int R);
	void Read();
	void Display() const;
	double getArea();
	double getCircleLength();
};