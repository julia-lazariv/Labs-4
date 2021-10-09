#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5/Lab5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:	
		TEST_METHOD(Lab5)
		{
			Integer a, b;
			cout << "a = "; cin >> a;
			cout << "b = "; cin >> b;
			cout << endl;

			try
			{
				// використання операцій
				cout << "a + b = " << a + b;
				cout << "a - b = " << a - b;
				cout << "a * b = " << a * b;
				cout << "a / b = " << a / b;
				cout << "a % b = " << a % b;
				cout << "a ^ b = " << (a ^ b) << endl;

				// використання операції ++ як метод класу
				cout << "a++ = " << a++;
				cout << "++a = " << ++a << endl;
			}
			catch (...) { FailTest(); }
		}
	private:
		void FailTest()
		{
			Logger::WriteMessage("Failed test!");
		}
	};
}