// Number.h
#pragma once
#include <iostream>

using namespace std;

class Number
{
private:
	int first;
	unsigned int second;
public:
	Number();
	Number(unsigned int, unsigned int);
	Number(const Number&);
	Number& operator = (const Number&);
	~Number();
	operator string() const;

	unsigned int getFirst() const { return first; };
	unsigned int getSecond() const { return second; };
	void setFirst(unsigned int f);
	void setSecond(unsigned int s);

	friend Number operator + (const Number&, const Number&);
	friend Number operator - (const Number&, const Number&);
	friend Number operator * (const Number&, int N);
	friend Number operator / (const Number&, const Number&);

	Number& operator ++();
	Number& operator --();
	Number operator ++(int);
	Number operator --(int);

	friend ostream& operator<<(ostream&, const Number&);
	friend istream& operator>>(istream&, Number&);
};