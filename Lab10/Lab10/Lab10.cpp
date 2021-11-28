// Lab10.cpp
// < Юлія Лазарів >
// Лабораторна робота № 10.
// ПРОСТЕ УСПАДКУВАННЯ. УСПАДКУВАННЯ ЗАМІСТЬ КОМПОЗИЦІЇ
// Варіант 16

#include <iostream>
#include "ColorPoint.h"
#include "GeometricPoint.h"

using namespace std;

int main()
{
	// створення об'єкту класу ColorPoint, який успадковує клас Point 
	// і додає точці колір
	ColorPoint a(2, 5 , "red");

	// створення об'єкту класу GeometricPoint, який успадковує клас Point 
    // і додає точці ім'я
	GeometricPoint b(1, 2, "first point");

	// виведення точок
	cout << "Color point:" << endl;
	cout << a << endl;
	cout << "Geometric point:" << endl;
	cout << b << endl;

	system("pause");
	return 0;
}