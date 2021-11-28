#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab11/Lab11.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(Lab11)
		{
			try
			{
				B1 o0(777);
				cout << "B1 o0(777);" << endl;
				cout << "sizeof(B1) = " << sizeof(B1) << endl;
				cout << endl << "Ієрархія класу B1: " << endl;
				o0.show_B1();
				D1 o1(100, 200, 300);
				cout << "D1 o1(100, 200, 300);" << endl;
				cout << "sizeof(D1) = " << sizeof(D1) << endl;
				cout << endl << "Ієрархія класу D1: " << endl;
				o1.show_D1();
				D2 o2(100, 200, 300, 400, 500);
				cout << "D2 o2(100, 200, 300, 400, 500);" << endl;
				cout << "sizeof(D2) = " << sizeof(D2) << endl;
				cout << endl << "Ієрархія класу D2: " << endl;
				o2.show_D2();
				D3 o3(100, 200, 300, 400, 500, 600);
				cout << "D3 o3(100, 200, 300, 400, 500, 600);" << endl;
				cout << "sizeof(D3) = " << sizeof(D3) << endl;
				cout << endl << "Ієрархія класу D3: " << endl;
				o3.show_D3();
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