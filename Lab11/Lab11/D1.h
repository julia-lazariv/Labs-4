// D1.h
#pragma once
#include <iostream>
#include "B1.h"
#include "B2.h"

using namespace std;

class D1 : private B1, public B2
{
	int d1;
public:
	D1(int x, int y, int i);
	void show_D1();
};