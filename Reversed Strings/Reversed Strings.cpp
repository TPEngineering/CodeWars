#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

string reverseString(string str)
{
	string rts;
	for (int i = 0; i<str.size(); i++)
	{
		int sz = str.size();
		rts[i] = str[(sz - i)];
	}
	return rts;
}

int main() {
	string x = reverseString("Hello");
	cout << x;
	return 0;
}