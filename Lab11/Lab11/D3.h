// D3.h
#pragma once
#include "D2.h"
#include "B3.h"

class D3 : public D2, private B3
{
	int d3;
public:
	D3(int x, int y, int z, int i, int j, int k);
	void show_D3();
};