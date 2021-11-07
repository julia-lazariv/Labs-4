// Lab8.cpp
// < Юлія Лазарів >
// Лабораторна робота № 8.
// КОНСТРУКТОРИ ТА ПЕРЕВАНТАЖЕННЯ ОПЕРАЦІЙ ДЛЯ КЛАСІВ З ВКЛАДЕНИМИ КЛАСАМИ. ОБЧИСЛЕННЯ КІЛЬКОСТІ ОБ’ЄКТІВ
// Варіант 16

#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
	Rectangle s1;
	cout << "Rectangle : " << Rectangle::getCounter() << endl;
	cout << "Rectangle::Pair : " << Rectangle::Pair::getCounter() << endl;
	Rectangle::Pair m1(2, 5);
	cout << "Rectangle::Pair +1 : " << Rectangle::Pair::getCounter() << endl;
	{
		Rectangle s4(4, 6);
		cout << "Rectangle local : " << Rectangle::getCounter() << endl;
		cout << "Rectangle::Pair local : " << Rectangle::Pair::getCounter() << endl;
		Rectangle::Pair m1;
		cout << "Rectangle::Pair local +1 : " << Rectangle::Pair::getCounter() << endl;

	}
	cout << "Rectangle : " << Rectangle::getCounter() << endl;
	cout << "Rectangle::Pair : " << Rectangle::Pair::getCounter() << endl;

	cout << endl;
	cout << "Perimater: " << Perimeter(m1, m1) << endl;
	cout << "Square: " << Square(m1, m1) << endl;

	system("pause");
	return 0;
}