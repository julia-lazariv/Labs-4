#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab10/Lab10.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(Lab10)
		{
			try
			{
				ColorPoint a(2, 5, "red");
				GeometricPoint b(1, 2, "first point");
				cout << "Color point:" << endl;
				cout << a << endl;
				cout << "Geometric point:" << endl;
				cout << b << endl;
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