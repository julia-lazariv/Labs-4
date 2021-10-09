// Money.h
#pragma once 
#include <string>
#include <sstream>

using namespace std;

class Money
{
private:
	long grivn, kop;
public:
	Money();
	Money(long, long);
	Money(const Money&);
	long getA() const { return grivn; };
	long getB() const { return kop; };
	void setA(long);
	void setB(long);
	friend Money  operator-(const Money&, const Money&);
	friend Money  operator*(const Money&, double);
	friend bool operator<(const Money&, const Money&);
	friend bool operator>(const Money&, const Money&);
	friend bool operator==(const Money&, const Money&);
	Money& operator = (const Money&);
	operator string();
	Money& operator++();
	Money& operator--();
	Money operator++(int);
	Money operator--(int);
	friend ostream& operator<<(ostream&, const Money&);
	friend istream& operator>>(istream&, Money&);
};