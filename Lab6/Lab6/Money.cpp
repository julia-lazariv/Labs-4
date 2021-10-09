// Money.cpp
#include "Money.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// конструктор за замовчуванням
Money::Money()
{
	grivn = 0;
	kop = 0;
}

// конструктор ініціалізації
Money::Money(long x, long y)
{
	grivn = x;
	kop = y;
}

// конструктор копіювання
Money::Money(const Money& t)
{
	*this = t;
}

// константний метод запису значення гривні
void Money::setA(long x)
{
	grivn = x;
}

// константний метод запису значення копійок
void Money::setB(long y)
{
	kop = y;
}

// ініціалізація методу присвоєння
Money& Money::operator=(const Money& m)
{
	this->grivn = m.grivn;
	this->kop = m.kop;
	return *this;
}

// метод переведення введених даних до стрічки
Money::operator string ()
{
	stringstream ss;
	ss << endl;
	ss << "Grivna = " << grivn << endl;
	ss << "Kop = " << kop << endl;
	return ss.str();
}
// ініціалізація операції - віднімання
Money operator-(const Money& x, const Money& y)
{
	Money t;
	t.grivn = x.grivn - y.grivn;
	t.kop = x.kop - y.kop;
	return t;
}
// ініціалізація операції * - множення на дробове число
Money operator*(const Money& x, double n)
{
	const Money y;
	Money t;
	t.grivn = x.grivn * n;
	t.kop = x.kop * n;
	return t;
}
// ініціалізація операції < порівняння сум
bool operator <(const Money& x, const Money& y)
{
	if (x.grivn < y.grivn)
	{
		return true;
	}
	else { return false; }
	if (x.kop < y.kop)
	{
		return true;
	}
	else { return false; }
}
// ініціалізація операції > порівняння сум
bool operator >(const Money& x, const Money& y)
{
	if (x.grivn > y.grivn)
	{
		return true;
	}
	else { return false; }
	if (x.kop > y.kop)
	{
		return true;
	}
	else { return false; }
}
// ініціалізація операції == порівняння сум
bool operator ==(const Money& x, const Money& y)
{
	if (x.grivn == y.grivn)
	{
		return true;
	}
	else { return false; }
	if (x.kop == y.kop)
	{
		return true;
	}
	else { return false; }
}
// ініціалізація операції ++ як метод класу
Money& Money::operator++()
{
	++grivn;
	return *this;
}
// ініціалізація операції -- як метод класу
Money& Money::operator--()
{
	--grivn;
	return *this;
}
// ініціалізація операції ++(int) як метод класу
Money Money::operator++(int)
{
	Money tmp = *this;
	kop++;
	return tmp;
}
// ініціалізація операції --(int) як метод класу
Money Money::operator--(int)
{
	Money tmp = *this;
	kop--;
	return tmp;
}
// перезавантаження операції введення
ostream& operator <<(ostream& out, const Money& d)
{
	out << endl;
	out << "Grivna = " << d.grivn << endl;
	out << "Kop = " << d.kop << endl;

	return out;
}
// перезавантаження операції виведення
istream& operator >>(istream& in, Money& d)
{
	cout << endl;
	cout << "Grivna = ? "; in >> d.grivn;
	cout << "Kop = ? "; in >> d.kop;

	return in;
}