// ColorPoint.cpp
#include "ColorPoint.h"
#include <sstream>

// конструктор ініціалізації
ColorPoint::ColorPoint(const int a, const int b, string colorDef)
{
	int x = a;
	int y = b;
	string color = colorDef;
	setX(x);
	setY(y);
	setColor(color);
}
// конструктор копіювання
ColorPoint::ColorPoint(const ColorPoint& r)
{
	setX(r.getX());
	setY(r.getY());
	setColor(r.getColor());
}
// деструктор
ColorPoint::~ColorPoint(void)
{}
// operator string
ColorPoint::operator string() const
{
	stringstream ss;
	ss << "x = " << getX() << endl;
	ss << "y = " << getY() << endl;
	ss << "color = " << getColor() << endl;
	return ss.str();
}
// перезавантаження операції введення
ostream& operator << (ostream& out, const ColorPoint& r)
{
	return out << (string)r;
}
// перезавантаження операції виведення
istream& operator >> (istream& in, ColorPoint& r)
{
	int x, y;
	string color;
	cout << "x = "; in >> x;
	cout << "y = "; in >> y;
	cout << "color = "; in >> color;
	r.setX(x); r.setY(y); r.setColor(color);
	return in;
}