// Lab5.cpp
// < ��� ������ >
// ����������� ������ � 5.
// �������������� �����ֲ�
// ������ 16

#include <iostream>
#include "Integer.h"

using namespace std;

int main()
{
	// �������� ������� ������
	Integer a, b;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << endl;

	// ������������ ��������
	cout << "a + b = " << a + b;
	cout << "a - b = " << a - b;
	cout << "a * b = " << a * b;
	cout << "a / b = " << a / b;
	cout << "a % b = " << a % b;
	cout << "a ^ b = " << (a ^ b) << endl;

	// ������������ �������� ++ �� ����� �����
	cout << "a++ = " << a++;
	cout << "++a = " << ++a << endl;

	// ������������ �������� �� ��, �� � ����� a ������� 
	if (~a)
		cout << "a - prime number" << endl;
	else
		cout << "a - not prime number" << endl;
	// ������������ �������� �� ��, �� � ����� a ������ 
	if (a[2])
		cout << "a - even number" << endl;
	else
		cout << "a - not even number" << endl;
	return 0;
}