// Point.h
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Point
{
	int x, y;
public:
	Point(const int a = 0, const int b = 0);
	Point(const Point& r);
	~Point(void);
	int getX() const { return x; }
	int getY() const { return y; }
	void setX(const int value) { x = value; }
	void setY(const int value) { y = value; }
	operator string() const;
	friend ostream& operator << (ostream& out, const Point& r);
	friend istream& operator >> (istream& in, Point& r);
};