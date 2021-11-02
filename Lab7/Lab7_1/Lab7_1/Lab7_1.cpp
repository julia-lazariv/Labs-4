// Lab7_1.cpp
// < ��� ������ >
// ����������� ������ � 7.
// ������ �� ��������� � ���Ѳ
// ������ 17

#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
    // ����������� ��������� ������� (2 * 2 �� �������)
    Matrix m(2, 2);
    m[0][0] = 2; // ������������ 1 �������� �������
    m[1][1] = 2; // ������������ 2 �������� �������
    cout << m << endl;
    m = m; // ��������� �������
    const Matrix s = m; // ��������� ��������� ������� ���� ������� s

    m = s + m; // ��������� �������
    cout << m << endl;

    cout << "Norma: " << Norma(m) << endl << endl; // ��������� ����� �������

    // ��������� �������
    if (s == m) {
        cout << "True" << endl;
    }
    if (s != m) {
        cout << "False" << endl;
    }

    system("pause");
    return 0;
}