// Collatz Conjecture.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


unsigned int hotpo(unsigned int n)
{
	if (n == 0) return 0; //Optional Handler to n = 0
	int count = 0;
	while (n >= 1)
	{
		if (n % 2 == 0) { n = n / 2; count++; }
		if (n == 1) { break; }
		if (n % 2 != 0) { n = (n * 3) + 1; count++; }
	}
	return count;
}

int main()
{
	int result = hotpo(5);
	return hotpo(1);
}

