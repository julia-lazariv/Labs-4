// Lab3.cpp
// < Юлія Лазарів >
// Лабораторна робота № 3.
// ОБ’ЄКТИ – ПАРАМЕТРИ МЕТОДІВ (ДІЇ НАД КІЛЬКОМА ОБ’ЄКТАМИ)
// Варіант 16

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
	cout << "Відстань до осі x = " << p.getX() << endl;
	cout << "Відстань до осі y = " << p.getY() << endl;
	cout << "Відстань до початку координат = " << p.distance() << endl;
	cout << p.compare() << endl;

	system("pause");
	return 0;
}