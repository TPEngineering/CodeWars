#include "stdafx.h"
#include <string>
#include <iostream>

std::string evil(int n)
{
	int test = 0;
	std::string binStr;

	// Binary conversion
	while (n >= 1)
	{
		int bit = n % 2;
		// convert bit from int to char
		char bitChar = (char)bit;
		binStr.push_back(bitChar);
		n = n / 2;
	}

	std::cout << binStr;

	// Count the number of 1's in binary string
	for (int i = 0; i<binStr.length(); i++)
	{
		if (binStr[i] == 1) { test++; }
	}

	// Decide if evil or odious
	return test % 2 == 0 ? "It's Evil!" : "It's Odious!";
}

int main()
{
	std::string answer = evil(5);
	return 0;
}