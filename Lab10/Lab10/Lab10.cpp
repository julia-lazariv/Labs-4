// Lab10.cpp
// < ��� ������ >
// ����������� ������ � 10.
// ������ ������������. ������������ ��̲��� �������ֲ�
// ������ 16

#include <iostream>
#include "ColorPoint.h"
#include "GeometricPoint.h"

using namespace std;

int main()
{
	// ��������� ��'���� ����� ColorPoint, ���� ��������� ���� Point 
	// � ���� ����� ����
	ColorPoint a(2, 5 , "red");

	// ��������� ��'���� ����� GeometricPoint, ���� ��������� ���� Point 
    // � ���� ����� ��'�
	GeometricPoint b(1, 2, "first point");

	// ��������� �����
	cout << "Color point:" << endl;
	cout << a << endl;
	cout << "Geometric point:" << endl;
	cout << b << endl;

	system("pause");
	return 0;
}