// Lab4.cpp
// < Юлія Лазарів >
// Лабораторна робота № 4.
// КОНСТРУКТОРИ ТА ПЕРЕВАНТАЖЕННЯ ОПЕРАЦІЙ ДЛЯ КЛАСІВ З ДВОМА ПОЛЯМИ
// Варіант 16

#include <iostream>
#include "Number.h"

int main()
{
	Number a(5, 4);

	cout << a++ << endl;
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;

	Number x;
	cout << "Input complex number ->" << endl;
	cin >> x;

	unsigned int N;
	cout << "Input number ->" << endl;
	cin >> N;
	cout << endl;

	Number y; 
	y = x * N;
	cout << y << endl;

	system("pause");
	return 0;
}