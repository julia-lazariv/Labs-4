#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8/Lab8.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(Lab8)
		{
			try
			{
				Pair a, b, c;
				Ellipse x(6, 4);
				cout << x << endl;
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