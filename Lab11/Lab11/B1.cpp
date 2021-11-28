// B1.cpp
#include <iostream>
#include "B1.h"

B1::B1() : b1(0)
{ }
B1::B1(int x)
{
	b1 = x;
}
void B1::show_B1()
{
	cout << "class B1:" << endl;
	cout << "show_B1()" << endl
		<< "B1::b1 = " << b1 << endl << endl;
}