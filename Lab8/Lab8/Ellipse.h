// Ellipse.h
#pragma once
#include "Pair.h"

class Ellipse : public Pair
{
public:
	Ellipse(const int x = 0, const int y = 0);
	Ellipse(const Ellipse& r);
	~Ellipse(void);
	friend double Square(const Ellipse& d, const Ellipse& c);
	friend double Perimeter(const Ellipse& d, const Ellipse& c);
	operator string() const;
	friend ostream& operator << (ostream& out, const Ellipse& r);
	friend istream& operator >> (istream& in, Ellipse& r);
};