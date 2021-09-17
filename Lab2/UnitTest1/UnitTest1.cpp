#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab2/Lab2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(All_methods)
		{
			Circle c;
			try
			{
				c.Read();
				c.Display();
				c.getArea();
				c.getCircleLength();
				Logger::WriteMessage("All methods tests is succedd!");
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