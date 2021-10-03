#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab4/Lab4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Lab4)
		{
			Number a(5, 4);

			cout << a++ << endl;
			cout << a << endl;
			cout << ++a << endl;
			cout << a << endl;

			Number x;
			cout << "Input complex number ->" << endl;
			cin >> x;

			unsigned int N;
			cout << "Input number ->" << endl;
			cin >> N;
			cout << endl;

			Number y;
			try
			{
				y = x * N;
				cout << y << endl;
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
