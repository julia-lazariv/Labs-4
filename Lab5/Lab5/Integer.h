// Integer.h
#pragma once
#include <iostream>

using namespace std;

class Integer
{
	int x;
public:
	int GetX() const { return x; }
	void SetX(int value) { x = value; }
	Integer();
	Integer(int);
	Integer(const Integer&);
	friend Integer operator + (Integer&, Integer&);
	friend Integer operator - (Integer&, Integer&);
	friend Integer operator * (Integer&, Integer&);
	friend Integer operator / (Integer&, Integer&);
	friend Integer operator % (Integer&, Integer&);
	friend Integer operator ^ (Integer&, Integer&);
	Integer& operator ++();
	Integer operator ++(int);
	bool operator [] (int);
	bool operator ~ ();
	friend ostream& operator << (ostream&, const Integer&);
	friend istream& operator >> (istream&, Integer&);
};