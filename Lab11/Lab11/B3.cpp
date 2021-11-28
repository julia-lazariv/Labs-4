// B3.cpp
#include <iostream>
#include "B3.h"

B3::B3() : b3(0)
{ }
B3::B3(int x)
{
	b3 = x;
}
void B3::show_B3()
{
	cout << "class B3:" << endl;
	cout << "show_B3()" << endl
		<< "B3::b3 = " << b3 << endl << endl;
}