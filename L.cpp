#include "Library.h"
#include "L.h"

void L::rotate(int rotation)
{
	switch (rotation)
	{
	case 1:
	{
		clear();
		piece[2][1] = colors::ORANGE;

		for (int i = 0; i <SIZEXY - 1; i++)
		{
			piece[i][0] = colors::ORANGE;

		}
		rot = 1;
		break;
	}
	case 2:
	{
		clear();
		piece[1][0] = colors::ORANGE;

		for (int i = 0; i <SIZEXY - 1; i++)
		{
			piece[0][i] = colors::ORANGE;

		}
		rot = 2;
		break;
	}
	case 3:
	{
		clear();
		piece[0][0] = colors::ORANGE;

		for (int i = 0; i <SIZEXY - 1; i++)
		{
			piece[i][1] = colors::ORANGE;

		}
		rot = 3;
		break;
	}
	case 4:
	{
		clear();
		piece[0][2] = colors::ORANGE;

		for (int i = 0; i <SIZEXY - 1; i++)
		{
			piece[1][i] = colors::ORANGE;

		}
		rot = 4;
		break;
	}
	default:
		break;
	}
	

}


L::L()
{
	rotate(1);
	rotnum = 4;
}


L::~L()
{
}
