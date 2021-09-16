// Lab1.cpp
// < Юлія Лазарів >
// Лабораторна робота № 1.
// Поля та методи – дії над одним (поточним) об’єктом
// Варіант 16

#include <iostream>
#include "Number.h"

using namespace std;

int main()
{
	Number n;
	n.Init(4, 2);
	n.Display();
	n.multiply(5);
	n.Display();
	cout << "Sum: " << n.Sum() << endl;
	cout << endl;

	Number k;
	k.Read();
	k.Display();
	k.multiply(2);
	k.Display();
	cout << "Sum: " << k.Sum() << endl;

	system("pause");
	return 0;
}