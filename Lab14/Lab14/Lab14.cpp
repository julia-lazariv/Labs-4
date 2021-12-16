// Lab14.cpp
// < Şë³ÿ Ëàçàğ³â >
// Ëàáîğàòîğíà ğîáîòà ¹ 14.
// ÎÏĞÀÖŞÂÀÍÍß ÂÈÍßÒÊÎÂÈÕ ÑÈÒÓÀÖ²É
// Âàğ³àíò 16

#include <iostream>
#include <string>
#include <exception>

using namespace std;

class Empty
{};
class Error
{
	string message;
public:
	Error(string message)
		: message(message)
	{}
	string What() { return message; }
};
class E : public exception
{
	string message;
public:
	E(string message)
		: message(message)
	{}
	string What() { return message; }
};

void FU()
{
	cout << "unexpected error! - bad_exception" << endl;
	throw;
}
void FT()
{
	cout << "unknown error! - terminate" << endl;
	abort();
}

int sum(int start, int step, int count) throw(int)
{
	if ((count * (2 * start - (count + 1) * step) / 2) == 0)
		throw E("the difference cannot be zero!");
	return count * (2 * start + (count - 1) * step) / 2;
}

int main()
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
	system("pause");
	return 0;
}