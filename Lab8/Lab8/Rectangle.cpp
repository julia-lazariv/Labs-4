// Rectangle.cpp
#include "Rectangle.h"
#include <sstream>

// class Rectangle
int Rectangle::counter = 0;
void Rectangle::Init(Pair pair)
{
	setPair(pair);
}
void Rectangle::Display() const
{
	cout << endl;
	cout << "pair = " << endl;
	pair.Display();
}
void Rectangle::Read()
{
	Pair m;
	cout << endl;
	cout << "Pair = " << endl;
	m.Read();
	Init(m);
}
Rectangle::Rectangle(const int a, const int b)
	: pair(a, b)
{
	Rectangle::counter++;
}
Rectangle::Rectangle(const Rectangle& s)
{
	pair = s.pair;
	Rectangle::counter++;
}
Rectangle::~Rectangle(void)
{
	Rectangle::counter--;
}
Rectangle& Rectangle::operator = (const Rectangle& s)
{
	pair = s.pair;
	return *this;
}
Rectangle::operator string () const
{
	stringstream ss;
	ss << "pair = " << pair << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Rectangle& s)
{
	out << string(s);
	return out;
}
istream& operator >> (istream& in, Rectangle& s)
{
	cout << endl;
	cout << "pair = ? "; in >> s.pair;
	return in;
}
Rectangle Rectangle::operator ++ (int)
{
	Rectangle s(*this);
	pair++;
	return s;
}
Rectangle Rectangle::operator -- (int)
{
	Rectangle s(*this);
	pair--;
	return s;
}
Rectangle& Rectangle::operator ++ ()
{
	++pair;
	return *this;
}
Rectangle& Rectangle::operator -- ()
{
	--pair;
	return *this;
}
int Rectangle::getCounter()
{
	return Rectangle::counter;
}

// class Pair
int Rectangle::Pair::counter = 0;
void Rectangle::Pair::Init(int a, int b)
{
	setA(a);
	setB(b);
}
void Rectangle::Pair::Display() const
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
void Rectangle::Pair::Read()
{
	int a, b;
	cout << endl;
	cout << "a = ? "; cin >> a;
	cout << "b = ? "; cin >> b;
	Init(a, b);
}
Rectangle::Pair::Pair()
	: a(0), b(0)
{
	Rectangle::Pair::counter++;
}
Rectangle::Pair::Pair(const int a, const int b)
	: a(a), b(b)
{
	Rectangle::Pair::counter++;
}
Rectangle::Pair::Pair(const Rectangle::Pair& m)
	: a(m.a), b(m.b)
{
	Rectangle::Pair::counter++;
}
Rectangle::Pair::~Pair(void)
{
	Rectangle::Pair::counter--;
}
Rectangle::Pair& Rectangle::Pair::operator = (const Rectangle::Pair& m)
{
	this->a = m.a;
	this->b = m.b;
	return *this;
}
Rectangle::Pair::operator string () const
{
	stringstream ss;
	ss << "a = " << a << endl;
	ss << "b = " << b << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Rectangle::Pair& m)
{
	out << string(m);
	return out;
}
istream& operator >> (istream& in, Rectangle::Pair& m)
{
	int a, b;
	cout << endl;
	cout << "a = ? "; in >> a;
	cout << "b = ? "; in >> b;
	m.setA(a);
	m.setB(b);
	return in;
}
Rectangle::Pair& Rectangle::Pair::operator ++ ()
{
	++b;
	return *this;
}
Rectangle::Pair& Rectangle::Pair::operator -- ()
{
	--b;
	return *this;
}
Rectangle::Pair Rectangle::Pair::operator ++ (int)
{
	Rectangle::Pair t(*this);
	b++;
	return t;
}
Rectangle::Pair Rectangle::Pair::operator -- (int)
{
	Rectangle::Pair t(*this);
	b--;
	return t;
}

// ініціалізація операції * - добуток чисел
Rectangle::Pair operator * (const Rectangle::Pair& l, const Rectangle::Pair& r)
{
	Rectangle::Pair t;	
	t.b = l.b * r.b;
	t.a = l.a * r.a;
	return t;
}

// метод обчислення периметра прамокутника
double Perimeter(const Rectangle::Pair& d, const Rectangle::Pair& c)
{
	double a = d.getA();
	double b = c.getA();
	return 2 * (a + b);
}

// метод обчислення площі прамокутника
double Square(const Rectangle::Pair& d, const Rectangle::Pair& c)
{
	double a = d.getA();
	double b = c.getA();
	return a * b;
}

// метод отримання значення лічильника
int Rectangle::Pair::getCounter()
{
	return Rectangle::Pair::counter;
}