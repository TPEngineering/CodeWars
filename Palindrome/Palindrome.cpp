// Cannot yet deal with different cases

#include "stdafx.h"
#include <string>
#include <locale>

bool isPalindrom(const std::string& str)
{
	bool ret = true;
	std::string uStr = str;
	std::locale loc;

	// Change to uppercase
	for (int j = 0; j < uStr.length(); j++)
	{
		uStr[j] = std::toupper(str[j], loc);
	}

	for (int i = 0; i<uStr.length(); i++)
	{
		if (uStr[i] != uStr[uStr.length() - 1 - i]){ret = false;}
	}
	return ret;
}

int main()
{
	bool a = isPalindrom("a");
	bool b = isPalindrom("ab");
	bool c = isPalindrom("aba");
	bool d = isPalindrom("abba");
	bool e = isPalindrom("abab");
	bool f = isPalindrom("abb");
	bool g = isPalindrom("Abba");
	bool h = isPalindrom("hello");
	return 0;
}