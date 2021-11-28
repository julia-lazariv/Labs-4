// D3.cpp
#include "D3.h"

D3::D3(int x, int y, int z, int i, int j, int k)
	: D2(y, z, i, j, k), B3(i)
{
	d3 = x;
}
void D3::show_D3()
{
	cout << "class D3:" << endl
		;
	show_D2();
	show_B3();
	cout << "show_D3()" << endl
		<< "D3::d3 = " << d3 << endl << endl;
}