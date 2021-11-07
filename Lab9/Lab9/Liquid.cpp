// Liquid.cpp
#include <sstream>
#include "Liquid.h"

// ����������� �����������
Liquid::Liquid(const string x, const double y) : name(x), density(y)
{}

// ����������� ���������
Liquid::Liquid(const Liquid& r)
{
	name = r.name;
	density = r.density;
}

// ����������
Liquid::~Liquid(void)
{}

// ����� ����������� �������� ����� �� ������
Liquid::operator string() const {
	stringstream ss;

	ss << "Name: " << getName() << endl;
	ss << "Density: " << getDensity() << endl;
	return ss.str();
}

// ���������������� �������� ��������
ostream& operator <<(ostream& out, const Liquid& r)
{
	return out << (string)r;
}

// ���������������� �������� ���������
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
