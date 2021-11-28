// ColorPoint.h
#pragma once
#include "Point.h"

class ColorPoint : public Point
{
	string color;
public:
	ColorPoint(const int a = 0, const int b = 0, string colorDef = "");
	ColorPoint(const ColorPoint& r);
	~ColorPoint(void);
	// ����� ��������� �������� �������
	string getColor() const { return color; }
	// ����� ��������������� �������
	void setColor(const string value) { color = value; }
	operator string() const;
	friend ostream& operator << (ostream& out, const ColorPoint& r);
	friend istream& operator >> (istream& in, ColorPoint& r);
};