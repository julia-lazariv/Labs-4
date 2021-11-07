// Solution.h
#pragma once
#include "Liquid.h"

class Solution : public Liquid
{
	double amount_of_substance;
public:
	Solution(const string x = "", const double y = 0.0, const double d = 0.0);
	Solution(const Solution& r);
	~Solution(void);
	double getAmount() const { return amount_of_substance; }
	void setAmount(const double value) { amount_of_substance = value; }
	operator string() const;
	friend ostream& operator << (ostream& out, const Solution& r);
	friend istream& operator >> (istream& in, Solution& r);
};
