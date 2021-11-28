// B2.cpp
#include <iostream>
#include "B2.h"

B2::B2() : b2(0)
{ }
B2::B2(int x)
{
	b2 = x;
}
void B2::show_B2()
{
	cout << "class B2:" << endl;
	cout << "show_B2()" << endl
		<< "B2::b2 = " << b2 << endl << endl;
}