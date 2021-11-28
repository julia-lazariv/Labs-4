// Point.cpp
#include "Point.h"
#include <sstream>

// ������� ����������� �����������
Point::Point(const int a, const int b) : x(a), y(b)
{}
// ������� ����������� ���������
Point::Point(const Point& r)
{
	x = r.x;
	y = r.y;
}
// ����������
Point::~Point(void
)
{}
// operator string
Point::operator string() const {
	stringstream ss;
	ss << "( " << getX() << ", " << getY() << " )";
	return ss.str();
}
// ���������������� �������� ��������
ostream& operator <<(ostream& out, const Point& r)
{
	return out << (string)r;
}
// ���������������� �������� ���������
istream& operator >>(istream& in, Point& r)
{
	int x, y;
	cout << "x = "; in >> x;
	cout << "y = "; in >> y;
	r.setX(x);
	r.setY(y);
	return in;
}