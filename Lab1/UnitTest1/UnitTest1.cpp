#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab1/Lab1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(Lab1)
	{
	public:
		TEST_METHOD(All_methods)
		{
			Number n;
			try
			{
				n.Init(4, 2);
				n.Display();
				n.multiply(5);
				n.Display();
				n.Sum();
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