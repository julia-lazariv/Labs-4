// Solution.cpp
#include "Solution.h"
#include <sstream>
#include <math.h>

// ����������� �����������
Solution::Solution(const string x, const double y, const double d)
{
	string a = x;
	double b = y;
	double D = d;
	setName(a);
	setDensity(b);
	setAmount(D);
}

// ����������� ���������
Solution::Solution(const Solution& r)
{
	string a = r.getName();
	double b = r.getDensity();
	double d = r.getAmount();
	setName(a);
	setDensity(b);
	setAmount(d);
}

// ����������
Solution::~Solution(void)
{}

// ����� ����������� �������� ����� �� ������
Solution::operator string() const
{
	Solution e;
	stringstream ss;

	ss << "Name: " << getName() << endl;
	ss << "Density: " << getDensity() << endl;
	ss << "Amount: " << getAmount() << endl;
	return ss.str();
}

// ���������������� �������� ��������
ostream& operator << (ostream& out, const Solution& r)
{
	return out << (string)r;
}

// ���������������� �������� ���������
istream& operator >> (istream& in, Solution& r)
{
	string a;
	double b, d;
	cout << "Name = "; in >> a;
	cout << "Density = "; in >> b;
	cout << "Amount = "; in >> d;
	r.setName(a); r.setDensity(b); r.setAmount(d);
	return in;
}