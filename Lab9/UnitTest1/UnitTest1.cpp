#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab9/Lab9.cpp"

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
				Liquid a("Viski", 6.2);
				Solution x("Alcohol", 4.2, 72.1);

				Liquid b("Viski", 7.2);
				Solution y("Alcohol", 5.2, 74.2);

				cout << a << endl;
				cout << x << endl;
				cout << b << endl;
				cout << y << endl;
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