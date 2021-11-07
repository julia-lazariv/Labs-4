// Liquid.h
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Liquid
{
	string name;
	double density;
public:
	Liquid(const string x = "", const double y = 0.0);
	Liquid(const Liquid& r);
	~Liquid(void);
	string getName() const { return name; }
	double getDensity() const { return density; }
	void setName(const string value) { name = value; }
	void setDensity(const double value) { density = value; }
	operator string() const;
	friend ostream& operator << (ostream& out, const Liquid& r);
	friend istream& operator >> (istream& in, Liquid& r);
};
