#include "Library.h"
#include "J.h"

void J::rotate(int rotation)
{
	switch (rotation)
	{
	case 1:
	{
		clear();
		piece[2][0] = colors::BLUE;

		for (int i = 0; i <SIZEXY - 1; i++)
		{
			piece[i][1] = colors::BLUE;

		}
		rot = 1;
		break;
	}
	case 2:
	{
		clear();
		piece[0][0] = colors::BLUE;

		for (int i = 0; i <SIZEXY - 1; i++)
		{
			piece[1][i] = colors::BLUE;

		}
		rot = 2;
		break;
	}
	case 3:
	{
		clear();
		piece[0][1] = colors::BLUE;

		for (int i = 0; i <SIZEXY - 1; i++)
		{
			piece[i][0] = colors::BLUE;

		}
		rot = 3;
		break;
	}
	case 4:
	{
		clear();
		piece[1][2] = colors::BLUE;

		for (int i = 0; i <SIZEXY - 1; i++)
		{
			piece[0][i] = colors::BLUE;

		}
		rot = 4;
		break;
	}
	default:
		break;
	}
	
}

J::J()
{
	rotate(1);
	rotnum = 4;

}


J::~J()
{
}
