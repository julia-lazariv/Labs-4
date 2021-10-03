// Number.cpp
#include <iostream>
#include <sstream>
#include "Number.h"

using namespace std;

Number::Number()
	:first(0), second(0)
{
}

Number::~Number()
{
}

Number::Number(unsigned int first, unsigned int second)
	: first(first), second(second)
{
}

Number::Number(const Number& m)
{
	this->first = m.first;
	this->second = m.second;
}

Number& Number::operator = (const Number& m)
{
	this->first = m.first;
	this->second = m.second;

	return *this;
}

void Number::setFirst(unsigned int f)
{
	first = f;
}

void Number::setSecond(unsigned int s)
{
	second = s;
}

Number::operator string () const
{
	stringstream sout;
	sout << "First = " << first << endl;
	sout << "Second = " << second << endl;
	return sout.str();
}

Number operator + (const Number& x, const Number& y)
{
	return Number(x.first + y.first, x.second + y.second);
}
Number operator - (const Number& x, const Number& y)
{
	return Number(x.first - y.first, x.second - y.second);
}
Number operator * (const Number& x, int N)
{
	return Number(x.first * N, x.second * N);
}
Number operator / (const Number& x, const Number& y)
{
	double r1 = x.first;
	double i1 = x.second;
	double r2 = y.first;
	double i2 = y.second;
	return Number((r1 * r2 - i1 * i2) / (r2 * r2 + i2 * i2),
		(-r1 * i2 + i1 * r2) / (r2 * r2 + i2 * i2));
}

Number& Number::operator ++()
{
	first++;
	return *this;
}
Number& Number::operator --()
{
	first--;
	return *this;
}
Number Number::operator ++(int)
{
	Number t(*this);
	second++;
	return t;
}
Number Number::operator --(int)
{
	Number t(*this);
	second--;
	return t;
}

ostream& operator << (ostream& out, const Number& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Number& r)
{
	cout << "First = "; in >> r.first;
	cout << "Second = "; in >> r.second;
	cout << endl;
	return in;
}