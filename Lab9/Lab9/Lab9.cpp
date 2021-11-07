// Lab9.cpp
// < Юлія Лазарів >
// Лабораторна робота № 9.
// ВІДКРИТЕ УСПАДКУВАННЯ
// Варіант 16

#include <iostream>
#include "Solution.h"

using namespace std;
int main()
{
	Liquid a("Viski", 6.2);
	Solution x("Alcohol", 4.2, 72.1);

	Liquid b("Viski", 7.2);
	Solution y("Alcohol", 5.2, 74.2);

	cout << a << endl;
	cout << x << endl; 
	cout << b << endl;
	cout << y << endl;
	return 0;
}