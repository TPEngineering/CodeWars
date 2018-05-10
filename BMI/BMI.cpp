// BMI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <cmath>
#include <string>

std::string bmi(double w, double h)
{
	float b = w / std::pow(h, 2);
	std::string ret[4] = { "Underweight", "Normal", "Overweight", "Obese" };
	if (b <= 18.5) { return ret[0]; }
	else if (b>18.5 && b <= 25) { return ret[1]; }
	else if (b>25 && b <= 30) { return ret[2]; }
	else if (b>30) { return ret[3]; }
	else { return "que?!"; }
}

int main()
{
    std::string answer = bmi(86.7, 1.7);
	return 0;
}

