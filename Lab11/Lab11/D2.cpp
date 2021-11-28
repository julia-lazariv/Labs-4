// D2.cpp
#include "D2.h"

D2::D2(int x, int y, int z, int i, int j)
	: D1(z, i, j)
{
	d2 = x;
}
void D2::show_D2()
{
	cout << "class D2:" << endl;
	show_D1();
	cout << "show_D2()" << endl
		<< "D2::d2 = " << d2 << endl << endl;
}