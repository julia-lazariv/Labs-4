#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6/Lab6.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(Lab6)
		{
			Money d(15, 50);
			cout << d;
			cout << "Result 1 = " << d.getA() << "," << d.getB() << endl;

			Money m(6, 13);
			cout << m;
			cout << "Result 2 = " << m.getA() << "," << m.getB() << endl;

			Money k(0, 0);
			try
			{
				k = d - m;
				cout << endl;
				cout << "------ Result -" << d - m << endl;
				cout << endl;
				cout << "------ Result *d" << k * 3.5 << endl;
				cout << endl;

				bool y, z, r;
				y = d < m;
				z = d > m;
				r = d == m;
				cout << "If result is 1 - true, 0 - false" << endl;
				cout << "Result < = " << y << endl;
				cout << "Result > = " << z << endl;
				cout << "Result == " << r << endl;
				cout << endl;
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
