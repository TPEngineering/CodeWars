#include "stdafx.h"

class Person
{
public:
	Person(int x, int y, int z)
		: m_x(x), m_y(y), m_z(z)				// Assigns the value of x to m_x, y to m_y, z to m_z
	{
	}

	void location(int x, int y, int z)
	{
		x = m_x;
		y = m_y;
		z = m_z;
	}

private:
	int m_x;
	int m_y;
	int m_z;
};

int main()
{
	Person(1, 2, 3);
	int x = 0, y = 0, z = 0;
	person->location(x, y, z);
}