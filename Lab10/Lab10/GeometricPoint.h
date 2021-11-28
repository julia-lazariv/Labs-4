// GeometricPoint.h
#pragma once
#include "Point.h"

class GeometricPoint : public Point
{
	string name;
public:
	GeometricPoint(const int a = 0, const int b = 0, string nameDef = "");
	GeometricPoint(const GeometricPoint& r);
	~GeometricPoint(void);
	// метод отримання значення імені
	string getName() const { return name; }
	// метод перепризначення імені
	void setName(const string value) { name = value; }
	operator string() const;
	friend ostream& operator << (ostream& out, const GeometricPoint& r);
	friend istream& operator >> (istream& in, GeometricPoint& r);
};