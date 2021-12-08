// Ellipse.h
#pragma once
#include "Curves.h"
class Ellipse :
	public Curves
{
	int a, b;
public:
	Ellipse(void);
	Ellipse(int x, int y, int a, int b);
	~Ellipse(void);

	virtual bool isBelong();
};