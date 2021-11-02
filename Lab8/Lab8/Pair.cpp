// Pair.cpp
#include <sstream>
#include "Pair.h"

// конструктор ініціалізації
Pair::Pair(const int x, const int y) : a(x), b(y)
{}

// конструктор копіювання
Pair::Pair(const Pair& r)
{
	a = r.a;
	b = r.b;
}

// деструктор
Pair::~Pair(void)
{}

// ініціалізація операції * - добуток чисел
Pair operator *(const Pair& l, const Pair& r)
{
	Pair t;
	t.a = l.a * r.a;
	t.b = l.b * r.b;
	return t;
}

// ініціалізація операції * - множення на число
Pair operator *(const Pair& l, const int k)
{
	Pair t;
	t.a = l.a * k;
	t.b = l.b * k;
	return t;
}

// ініціалізація операції * - множення числа на добуток
Pair operator *(const int k, const Pair& r)
{
	Pair t;
	t.a = r.a * k;
	t.b = r.b * k;
	return t;
}

// метод переведення введених даних до стрічки
Pair::operator string() const {
	stringstream ss;
	ss << "( " << getA() << ", " << getB() << " )";
	return ss.str();
}

// перезавантаження операції введення
ostream& operator <<(ostream& out, const Pair& r)
{
	return out << (string)r;
}

// перезавантаження операції виведення
istream& operator >>(istream& in, Pair& r)
{
	int a, b;
	cout << "a = "; in >> a;
	cout << "b = "; in >> b;
	r.setA(a);
	r.setB(b);
	return in;
}