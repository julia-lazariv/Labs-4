// GeometricPoint.cpp
#include "GeometricPoint.h"
#include <sstream>

// конструктор ініціалізації
GeometricPoint::GeometricPoint(const int a, const int b, string nameDef)
{
	int x = a;
	int y = b;
	string name = nameDef;
	setX(x);
	setY(y);
	setName(name);
}
// конструктор копіювання
GeometricPoint::GeometricPoint(const GeometricPoint& r)
{
	setX(r.getX());
	setY(r.getY());
	setName(r.getName());
}
// деструктор
GeometricPoint::~GeometricPoint(void)
{}
// operator string
GeometricPoint::operator string() const
{
	stringstream ss;
	ss << "x = " << getX() << endl;
	ss << "y = " << getY() << endl;
	ss << "name = " << getName() << endl;
	return ss.str();
}
// перезавантаження операції введення
ostream& operator << (ostream& out, const GeometricPoint& r)
{
	return out << (string)r;
}
// перезавантаження операції виведення
istream& operator >> (istream& in, GeometricPoint& r)
{
	int x, y;
	string name;
	cout << "x = "; in >> x;
	cout << "y = "; in >> y;
	cout << "name = "; in >> name;
	r.setX(x); r.setY(y); r.setName(name);
	return in;
}