// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>

/*
int factorial(int x)
{
int i, f = x;
for (i=x; i>1; i--) {f = f * (i - 1);}
return f;
}

bool amIWilson(unsigned n)
{
double test = ((factorial(n - 1)) + 1)/ ((double)n*(double)n);
return (floor(test) == test);
}

int main()
{
return amIWilson(563);
}
*/

int mod_factorial(int n, int mod) {
	if (n < 2) return 1;									// Base case
	else return (n * mod_factorial(n - 1, mod)) % mod;
}

bool amIWilson(unsigned n) {
	return mod_factorial(n - 1, n*n) + 1 == n * n;
}

int main()
{
	// ((P-1)!+1) / P*P
	return amIWilson(563);
}