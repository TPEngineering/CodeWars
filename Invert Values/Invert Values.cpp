// Invert Values.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>

std::vector<int> invert(std::vector<int> values)
{
	for (auto i : values) { values[i-1] *= -1; }
	return values;
}

int main()
{
	std::vector<int> x = { 1,-2,3,4,5 };
	std::vector<int> ivalues = invert(x);
	return 0;
}