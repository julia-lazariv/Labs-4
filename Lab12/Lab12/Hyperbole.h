// Hyperbole.h
#pragma once
#include "Curves.h"
class Hyperbole :
	public Curves
{
	int a, b;
public:
	Hyperbole(void);
	Hyperbole(int x, int y, int a, int b);
	~Hyperbole(void);

	virtual bool isBelong();
};