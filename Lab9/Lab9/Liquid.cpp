// Liquid.cpp
#include <sstream>
#include "Liquid.h"

// конструктор ініціалізації
Liquid::Liquid(const string x, const double y) : name(x), density(y)
{}

// конструктор копіювання
Liquid::Liquid(const Liquid& r)
{
	name = r.name;
	density = r.density;
}

// деструктор
Liquid::~Liquid(void)
{}

// метод переведення введених даних до стрічки
Liquid::operator string() const {
	stringstream ss;

	ss << "Name: " << getName() << endl;
	ss << "Density: " << getDensity() << endl;
	return ss.str();
}

// перезавантаження операції введення
ostream& operator <<(ostream& out, const Liquid& r)
{
	return out << (string)r;
}

// перезавантаження операції виведення
istream& operator >>(istream& in, Liquid& r)
{
	string a;
	double b;
	cout << "name = "; in >> a;
	cout << "density = "; in >> b;
	r.setName(a);
	r.setDensity(b);
	return in;
}
