#include "stdafx.h"

#include<cmath>
#include<string>
#include<iostream>

int hexToDec(std::string hexString)
{
	int currentDecDigit = 0;
	int decInt = 0;
	bool minusFlag = false;

	// Remove the minus sign from the string (if present) and set the minusFlag bool appropriately (true if present)
	if (hexString[0] == '-')
	{
		hexString = hexString.erase(0, 1);
		minusFlag = true;
	}

	// Record the number of digits in the resulting string
	int digits = hexString.size();

	// For each digit of the hexadecimal...
	for (int i = 0; i<digits; i++)
	{
		char ASCIITestLC = 'a';
		char ASCIITestUC = 'A';

		for (int zeroToNine = 0; zeroToNine<10; zeroToNine++)
		{
			// If the hex digit is char 0:9, convert to int 0:9
			if (hexString[i] - '0' == zeroToNine)
				currentDecDigit = hexString[i] - '0';
		}

		for (int j = 10; j<16; j++)
		{
			// If the hex digit is char A-F (or a-f), convert the character to an integer
			if (hexString[i] == ASCIITestLC || hexString[i] == ASCIITestUC)
				currentDecDigit = j;
			ASCIITestLC++;
			ASCIITestUC++;
		}
		int currentDecConversion = (currentDecDigit * pow(16, (hexString.size() - (i + 1))));
		decInt += currentDecConversion;
	}

	return minusFlag ? (decInt*-1) : decInt;
}

int main()
{
	int x = hexToDec("-BD28A");
	std::cout << x << std::endl;
	return x;
}