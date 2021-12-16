#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab14/Lab14.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(Lab14)
		{
			try
			{
				set_unexpected(FU);
				// set_terminate(FT);
				int start, step, count;
				cout << "start = "; cin >> start;
				cout << "step = "; cin >> step;
				cout << "count = "; cin >> count;
				try
				{
					cout << "Sum: " << sum(start, step, count) << endl;
				}
				catch (int)
				{
					cout << " catch (int) <= sum()" << endl;
				}
				catch (double)
				{
					cout << " catch (double) <= sum()" << endl;
				}
				catch (Empty)
				{
					cout << " catch (Empty) <= sum()" << endl;
				}
				catch (Error e)
				{
					cout << " catch (Error) <= sum() :" << endl;
					cout << e.What() << endl;
				}
				catch (bad_exception)
				{
					cout << " catch (bad_exception)" << endl;
				}
				catch (exception)
				{
					cout << " catch (exception) <= sum() :" << endl;
				}
				catch (E e)
				{
					cout << " catch (E) <= sum() :" << endl;
					cout << e.What() << endl;
				}
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