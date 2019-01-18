#include "Library.h"
#include "T.h"

void T::rotate(int rotation)
{
	switch (rotation)
	{
	case 1:
	{
		clear();
		piece[0][1] = colors::VIOLET;

		for (int i = 0; i < SIZEXY - 1; i++)
		{
			piece[1][i] = colors::VIOLET;
		}
		rot = 1;
		break;
	}
	case 2:
	{
		clear();
		piece[1][1] = colors::VIOLET;

		for (int i = 0; i < SIZEXY - 1; i++)
		{
			piece[i][0] = colors::VIOLET;
		}
		rot = 2;
		break;
	}
	case 3:
	{
		clear();
		piece[1][1] = colors::VIOLET;

		for (int i = 0; i < SIZEXY - 1; i++)
		{
			piece[0][i] = colors::VIOLET;
		}
		rot = 3;
		break;
	}
	case 4:
	{
		clear();
		piece[1][0] = colors::VIOLET;

		for (int i = 0; i < SIZEXY - 1; i++)
		{
			piece[i][1] = colors::VIOLET;
		}
		rot = 4;
		break;
	}
	default:
		break;
	}


}

T::T()
{
	rotate(1);
	rotnum = 4;
}


T::~T()
{
}
