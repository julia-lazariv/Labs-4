// Straight.h
#pragma once
#include "Curves.h"
class Straight :
	public Curves
{
	int a, b;
public:
	Straight(void);
	Straight(int x, int y, int a, int b);
	~Straight(void);

	virtual bool isBelong();
};