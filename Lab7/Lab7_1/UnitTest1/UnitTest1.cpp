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
			m[0][0] = 2; // встановлення 1 значення матриці
			m[1][1] = 2; // встановлення 2 значення матриці
			try
			{
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