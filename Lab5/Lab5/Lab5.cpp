// Lab5.cpp
// < Юлія Лазарів >
// Лабораторна робота № 5.
// ПЕРЕВАНТАЖЕННЯ ОПЕРАЦІЙ
// Варіант 16

#include <iostream>
#include "Integer.h"

using namespace std;

int main()
{
	// введення вхідних данних
	Integer a, b;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << endl;

	// використання операцій
	cout << "a + b = " << a + b;
	cout << "a - b = " << a - b;
	cout << "a * b = " << a * b;
	cout << "a / b = " << a / b;
	cout << "a % b = " << a % b;
	cout << "a ^ b = " << (a ^ b) << endl;

	// використання операції ++ як метод класу
	cout << "a++ = " << a++;
	cout << "++a = " << ++a << endl;

	// використання перевірки на те, чи є число a простим 
	if (~a)
		cout << "a - prime number" << endl;
	else
		cout << "a - not prime number" << endl;
	// використання перевірки на те, чи є число a парним 
	if (a[2])
		cout << "a - even number" << endl;
	else
		cout << "a - not even number" << endl;
	return 0;
}