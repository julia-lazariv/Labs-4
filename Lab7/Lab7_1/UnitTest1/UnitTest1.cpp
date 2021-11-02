#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab7_1/Lab7_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(Lab7_1)
		{
			Matrix m(2, 2);
			m[0][0] = 2; // ������������ 1 �������� �������
			m[1][1] = 2; // ������������ 2 �������� �������
			try
			{
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
			}
			catch (...) {
				FailTest();
			}
		}
	private:
		void FailTest()
		{
			Logger::WriteMessage("Failed test!");
		}
	};
}