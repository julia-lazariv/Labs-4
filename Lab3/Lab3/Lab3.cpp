// Lab3.cpp
// < ��� ������ >
// ����������� ������ � 3.
// ������� � ��������� ����Ĳ� (Ĳ� ��� ʲ������ ���������)
// ������ 16

#include <iostream>
#include <Windows.h>
#include "Point.h"

int main()
{
	SetConsoleCP(1251); // Ukrainian language in console
	SetConsoleOutputCP(1251);

	Point p;
	p.Read();

	cout << endl;
	cout << "³������ �� �� x = " << p.getX() << endl;
	cout << "³������ �� �� y = " << p.getY() << endl;
	cout << "³������ �� ������� ��������� = " << p.distance() << endl;
	cout << p.compare() << endl;

	system("pause");
	return 0;
}