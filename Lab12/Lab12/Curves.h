// Curves.h
#pragma once
class Curves
{
	int x, y;
public:
	Curves(void);
	Curves(int x, int y);
	int getX() { return x; }
	int getY() { return y; }
	~Curves(void);

	virtual bool isBelong() = 0;
};