// Ellipse.cpp
#include "Ellipse.h"
#include <sstream>
#include <math.h>

// конструктор ініціалізації
Ellipse::Ellipse(const int x, const int y)
{
	int a = x;
	int b = y;
	setA(a);
	setB(b);
}

// конструктор копіювання
Ellipse::Ellipse(const Ellipse& r)
{
	int a = r.getA();
	int b = r.getB();
	setA(a);
	setB(b);
}

// деструктор
Ellipse::~Ellipse(void)
{}

// метод обчислення периметра еліпсу
double Perimeter(const Ellipse& d, const Ellipse& c)
{
	double a = d.getA();
	double b = c.getA();
	double Pi = 3.1415926535897932384;
	return 4 * (Pi * a * b + pow(a - b, 2)) / a + b;
}

// метод обчислення площі еліпсу
double Square(const Ellipse& d, const Ellipse& c)
{
	double Pi = 3.1415926535897932384;
	double a = d.getA();
	double b = c.getA();
	return Pi * a * b; // Pi * R * r
}

// метод переведення введених даних до стрічки
Ellipse::operator string() const
{
	Ellipse e;
	stringstream ss;

	ss << "Perimeter: " << Perimeter(getA(), getB()) << endl; // виведення периметра еліпсу
	ss << "Square: " << Square(getA(), getB()) << endl; // виведення площі еліпсу
	return ss.str();
}

// перезавантаження операції введення
ostream& operator << (ostream& out, const Ellipse& r)
{
	return out << (string)r;
}

// перезавантаження операції виведення
istream& operator >> (istream& in, Ellipse& r)
{
	int a, b;
	cout << "R = "; in >> a;
	cout << "r = "; in >> b;
	r.setA(a); r.setB(b);
	return in;
}