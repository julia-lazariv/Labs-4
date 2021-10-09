// Money.cpp
#include "Money.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// ����������� �� �������������
Money::Money()
{
	grivn = 0;
	kop = 0;
}

// ����������� �����������
Money::Money(long x, long y)
{
	grivn = x;
	kop = y;
}

// ����������� ���������
Money::Money(const Money& t)
{
	*this = t;
}

// ����������� ����� ������ �������� �����
void Money::setA(long x)
{
	grivn = x;
}

// ����������� ����� ������ �������� ������
void Money::setB(long y)
{
	kop = y;
}

// ����������� ������ ���������
Money& Money::operator=(const Money& m)
{
	this->grivn = m.grivn;
	this->kop = m.kop;
	return *this;
}

// ����� ����������� �������� ����� �� ������
Money::operator string ()
{
	stringstream ss;
	ss << endl;
	ss << "Grivna = " << grivn << endl;
	ss << "Kop = " << kop << endl;
	return ss.str();
}
// ����������� �������� - ��������
Money operator-(const Money& x, const Money& y)
{
	Money t;
	t.grivn = x.grivn - y.grivn;
	t.kop = x.kop - y.kop;
	return t;
}
// ����������� �������� * - �������� �� ������� �����
Money operator*(const Money& x, double n)
{
	const Money y;
	Money t;
	t.grivn = x.grivn * n;
	t.kop = x.kop * n;
	return t;
}
// ����������� �������� < ��������� ���
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
// ����������� �������� > ��������� ���
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
// ����������� �������� == ��������� ���
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
// ����������� �������� ++ �� ����� �����
Money& Money::operator++()
{
	++grivn;
	return *this;
}
// ����������� �������� -- �� ����� �����
Money& Money::operator--()
{
	--grivn;
	return *this;
}
// ����������� �������� ++(int) �� ����� �����
Money Money::operator++(int)
{
	Money tmp = *this;
	kop++;
	return tmp;
}
// ����������� �������� --(int) �� ����� �����
Money Money::operator--(int)
{
	Money tmp = *this;
	kop--;
	return tmp;
}
// ���������������� �������� ��������
ostream& operator <<(ostream& out, const Money& d)
{
	out << endl;
	out << "Grivna = " << d.grivn << endl;
	out << "Kop = " << d.kop << endl;

	return out;
}
// ���������������� �������� ���������
istream& operator >>(istream& in, Money& d)
{
	cout << endl;
	cout << "Grivna = ? "; in >> d.grivn;
	cout << "Kop = ? "; in >> d.kop;

	return in;
}