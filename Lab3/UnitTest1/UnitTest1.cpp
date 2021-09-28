#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab3/Lab3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(All_methods)
		{
			Point p;
			try
			{
				p.Read();
				cout << "³������ �� �� x = " << p.getX() << endl;
				cout << "³������ �� �� y = " << p.getY() << endl;
				cout << "³������ �� ������� ��������� = " << p.distance() << endl;
				cout << p.compare() << endl;
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