// Rectangle.h
#pragma once
#include <string>
#include <iostream>

using namespace std;

class Rectangle
{
private:
	static int counter;
public:
	class Pair
	{
	private:
		int a, b;
		static int counter;
	public:
		int getA() const { return a; }
		int getB() const { return b; }
		void setA(int a) { this->a = a; }
		void setB(int b) { this->b = b; }
		void Init(int a, int b);
		void Display() const;
		void Read();
		Pair();
		Pair(const int a, const int b);
		Pair(const Pair& m);
		~Pair(void);
		Pair& operator = (const Pair& m);
		friend ostream& operator << (ostream& out, const Pair& m);
		friend istream& operator >> (istream& in, Pair& m);
		operator string () const;
		Pair& operator ++ ();
		Pair& operator -- ();
		Pair operator ++ (int);
		Pair operator -- (int);
		friend Pair operator * (const Rectangle::Pair& l, const Rectangle::Pair& r);
		static int getCounter();
	};
	void setPair(Pair pair) { this->pair = pair; }
	void Init(Pair pair);
	void Display() const;
	void Read();
	Rectangle(const int a = 0, const int b = 0);
	Rectangle(const Rectangle& s);
	~Rectangle(void);
	Rectangle& operator = (const Rectangle& s);
	friend ostream& operator << (ostream& out, const Rectangle& s);
	friend istream& operator >> (istream& in, Rectangle& s);
	operator string () const;
	Rectangle& operator ++ ();
	Rectangle& operator -- ();
	Rectangle operator ++ (int);
	Rectangle operator -- (int);
	friend double Square(const Pair& d, const Pair& c);
	friend double Perimeter(const Pair& d, const Pair& c);
	static int getCounter();
private:
	Pair pair;
};