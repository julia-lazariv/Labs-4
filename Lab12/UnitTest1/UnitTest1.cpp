#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab12/Lab12.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(Lab12)
		{
			try
			{
				cout << "1 - true, 0 - false" << endl;

				cout << endl << "Check 1" << endl;
				Straight l1(1, 2, 6, 5);
				cout << "Straight1:  " << l1.isBelong() << endl;
				Ellipse s1(1, 2, 7, 5);
				cout << "Ellipse1:   " << s1.isBelong() << endl;
				Hyperbole h1(1, 2, 3, 5);
				cout << "Hyperbole1: " << h1.isBelong() << endl;

				cout << endl << "Check 2" << endl;
				Straight l2(1, 4, 8, 6);
				cout << "Straight2:  " << l2.isBelong() << endl;
				Ellipse s2(1, 4, 3, 2);
				cout << "Ellipse2:   " << s2.isBelong() << endl;
				Hyperbole h2(1, 4, 8, 9);
				cout << "Hyperbole2: " << h2.isBelong() << endl;
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