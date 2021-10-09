// Lab6.cpp
// < Юлія Лазарів >
// Лабораторна робота № 6.
// КОНСТРУКТОРИ ТА ПЕРЕВАНТАЖЕННЯ ОПЕРАЦІЙ ДЛЯ КЛАСІВ
// Варіант 17

#include "Money.h"
#include <iostream>

using namespace std;

int main()
{
	Money d(15, 50);
	cout << d;
	cout << "Result 1 = " << d.getA() << "," << d.getB() << endl;

	Money m(6, 13);
	cout << m;
	cout << "Result 2 = " << m.getA() << "," << m.getB() << endl;

	Money k(0, 0);
	k = d - m;
	cout << endl;
	cout << "------ Result -" << d - m << endl;
	cout << endl;
	cout << "------ Result *d" << k * 3.5 << endl;
	cout << endl;

	bool y, z, r;
	y = d < m;
	z = d > m;
	r = d == m;
	cout << "If result is 1 - true, 0 - false" << endl;
	cout << "Result < = " << y << endl;
	cout << "Result > = " << z << endl;
	cout << "Result == " << r << endl;
	cout << endl;

	system("pause");
	return 0;
}