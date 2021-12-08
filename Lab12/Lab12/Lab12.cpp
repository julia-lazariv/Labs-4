// Lab12.cpp
// < Юлія Лазарів >
// Лабораторна робота № 12.
// ВІРТУАЛЬНІ ФУНКЦІЇ ТА АБСТРАКТНІ КЛАСИ
// Варіант 16

#include <iostream>
#include "Straight.h"
#include "Ellipse.h"
#include "Hyperbole.h"

using namespace std;

int main()
{
	cout << "1 - true, 0 - false" << endl;

	cout << endl << "Check 1" << endl;
	Straight l1(1, 2, 6, 5);
	cout << "Straight1:  " << l1.isBelong() << endl;
	Ellipse s1(1, 2, 7, 5);
	cout << "Ellipse1:   " << s1.isBelong() << endl;
	Hyperbole h1(1, 2, 3, 5);
	cout << "Hyperbole1: " << h1.isBelong() << endl;

	cout << endl << "Check 2" << endl;
	Straight l2(1, 4, 8, 6);
	cout << "Straight2:  " << l2.isBelong() << endl;
	Ellipse s2(1, 4, 3, 2);
	cout << "Ellipse2:   " << s2.isBelong() << endl;
	Hyperbole h2(1, 4, 8, 9);
	cout << "Hyperbole2: " << h2.isBelong() << endl;

	system("pause");
	return 0;
}