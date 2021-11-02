// Lab7_1.cpp
// < Юлія Лазарів >
// Лабораторна робота № 7.
// МАСИВИ ТА КОНСТАНТИ В КЛАСІ
// Варіант 17

#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
    // ініціалізація початкової матриці (2 * 2 як приклад)
    Matrix m(2, 2);
    m[0][0] = 2; // встановлення 1 значення матриці
    m[1][1] = 2; // встановлення 2 значення матриці
    cout << m << endl;
    m = m; // копіювання матриці
    const Matrix s = m; // присвоєння копійованої матриці новій матриці s

    m = s + m; // додавання матриць
    cout << m << endl;

    cout << "Norma: " << Norma(m) << endl << endl; // виведення норми матриці

    // порівняння матриць
    if (s == m) {
        cout << "True" << endl;
    }
    if (s != m) {
        cout << "False" << endl;
    }

    system("pause");
    return 0;
}