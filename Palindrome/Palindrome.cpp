// Cannot yet deal with different cases

#include "stdafx.h"
#include <string>

bool isPalindrom(const std::string& str)
{
	bool ret = true;
	for (int i = 0; i<str.length(); i++)
	{
		if (str[i] != str[str.length() - 1 - i])
		{
			char debug1 = str[i];
			char debug2 = str[(str.length() - 1- i)];
			ret = false;
		}
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
	return 0;
}