// Integer.cpp
#include <iostream>
#include "Integer.h"

using namespace std;

// конструктор за замовчуванням
Integer::Integer() 
{
	x = 0;
}
// конструктор ініціалізації
Integer::Integer(int y)
{
	x = y;
}
// конструктор копіювання
Integer::Integer(const Integer& r)
{
	x = r.x;
}
// ініціалізація операції + додавання
Integer operator + (Integer& a, Integer& b)
{
	Integer t(0);
	t.x = a.x + b.x;
	return t;
}
// ініціалізація операції - віднімання
Integer operator -(Integer& a, Integer& b)
{
	Integer t(0);
	t.x = a.x - b.x;
	return t;
}
// ініціалізація операції * множення
Integer operator *(Integer& a, Integer& b)
{
	Integer t(0);
	t.x = a.x * b.x;
	return t;
}
// ініціалізація операції / ділення
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
// ініціалізація операції % залишок від цілочисельного ділення
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
// ініціалізація операції ^ піднесення до степеню
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
// ініціалізація операції ++ як метод класу
Integer& Integer::operator ++()
{
	x++;
	return *this;
}
// ініціалізація операції ++(int) як метод класу
Integer Integer::operator ++(int)
{
	Integer t(*this);
	x++;
	return t;
}
// ініціалізація операції [] - перевірки числа на парність
bool Integer::operator [] (int i)
{
	return x %
		i == 0;
}
// ініціалізація операції ~ - перевірки, чи є число простим
bool Integer::operator ~ () {
	int n = 0;
	for (int i = 2; i < x / 2; i++)
		if (x % i == 0)
			n++;
	return n == 0;
}
// перезавантаження операції введення
ostream& operator <<(ostream& out, const Integer& a)
{
	out << a.x << endl;
	return out;
}
// перезавантаження операції виведення
istream& operator >>(istream& in, Integer& a)
{
	in >> a.x;
	return in;
}