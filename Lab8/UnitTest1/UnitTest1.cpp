#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8/Lab8.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(Lab9)
		{
			try
			{
				Rectangle s1;
				cout << "Rectangle : " << Rectangle::getCounter() << endl;
				cout << "Rectangle::Pair : " << Rectangle::Pair::getCounter() << endl;
				Rectangle::Pair m1(2, 5);
				cout << "Rectangle::Pair +1 : " << Rectangle::Pair::getCounter() << endl;
				{
					Rectangle s4(4, 6);
					cout << "Rectangle local : " << Rectangle::getCounter() << endl;
					cout << "Rectangle::Pair local : " << Rectangle::Pair::getCounter() << endl;
					Rectangle::Pair m1;
					cout << "Rectangle::Pair local +1 : " << Rectangle::Pair::getCounter() << endl;

				}
				cout << "Rectangle : " << Rectangle::getCounter() << endl;
				cout << "Rectangle::Pair : " << Rectangle::Pair::getCounter() << endl;

				cout << endl;
				cout << "Perimater: " << Perimeter(m1, m1) << endl;
				cout << "Square: " << Square(m1, m1) << endl;
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