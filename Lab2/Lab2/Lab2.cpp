// Lab2.cpp
// < Юлія Лазарів >
// Лабораторна робота № 2.
// ОГОЛОШЕННЯ ТА БУДОВА КЛАСУ
// Варіант 16

#include <iostream>
#include "Circle.h"

int main()
{
	Circle c;
	c.Read();
	c.Display();
	cout << "Area = " << c.getArea() << endl;
	cout << "Circle length = " << c.getCircleLength() << endl;

	system("pause");
	return 0;
}