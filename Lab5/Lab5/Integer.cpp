// Integer.cpp
#include <iostream>
#include "Integer.h"

using namespace std;

// ����������� �� �������������
Integer::Integer() 
{
	x = 0;
}
// ����������� �����������
Integer::Integer(int y)
{
	x = y;
}
// ����������� ���������
Integer::Integer(const Integer& r)
{
	x = r.x;
}
// ����������� �������� + ���������
Integer operator + (Integer& a, Integer& b)
{
	Integer t(0);
	t.x = a.x + b.x;
	return t;
}
// ����������� �������� - ��������
Integer operator -(Integer& a, Integer& b)
{
	Integer t(0);
	t.x = a.x - b.x;
	return t;
}
// ����������� �������� * ��������
Integer operator *(Integer& a, Integer& b)
{
	Integer t(0);
	t.x = a.x * b.x;
	return t;
}
// ����������� �������� / ������
Integer operator /(Integer& a, Integer& b)
{
	if (b.x)
	{
		Integer t(0);
		t.x = a.x / b.x;
		return t;
	}
	else
	{
		cerr << "Error!" << endl;
		return -1;
	}
}
// ����������� �������� % ������� �� �������������� ������
Integer operator % (Integer& a, Integer& b)
{
	if (a.x)
	{
		Integer t(0);
		t.x = a.x / b.x;
		return t;
	}
	else
	{
		cerr << "Error!" << endl;
		return -1;
	}
}
// ����������� �������� ^ ��������� �� �������
Integer operator ^(Integer& a, Integer& b)
{
	Integer t(0);
	if (a.x == 0)
		return t; 
	else
		t.x = 1;
	if (b.x == 0) 
		return t;
	if (b.x > 0)
	{
		for (int i = 1; i <= b.x; i++)
			t.x *= a.x;
	}
	if (b.x < 0)
	{
		for (int i = 1; i <= b.x; i++)
			t.x /= a.x;
	}
	return t;
}
// ����������� �������� ++ �� ����� �����
Integer& Integer::operator ++()
{
	x++;
	return *this;
}
// ����������� �������� ++(int) �� ����� �����
Integer Integer::operator ++(int)
{
	Integer t(*this);
	x++;
	return t;
}
// ����������� �������� [] - �������� ����� �� �������
bool Integer::operator [] (int i)
{
	return x %
		i == 0;
}
// ����������� �������� ~ - ��������, �� � ����� �������
bool Integer::operator ~ () {
	int n = 0;
	for (int i = 2; i < x / 2; i++)
		if (x % i == 0)
			n++;
	return n == 0;
}
// ���������������� �������� ��������
ostream& operator <<(ostream& out, const Integer& a)
{
	out << a.x << endl;
	return out;
}
// ���������������� �������� ���������
istream& operator >>(istream& in, Integer& a)
{
	in >> a.x;
	return in;
}