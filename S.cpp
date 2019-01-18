#include "Library.h"
#include "S.h"

void S::rotate(int rotation)
{
	switch (rotation)
	{
	case 1:
	{
		clear();
		piece[1][0] = colors::GREEN;
		piece[0][1] = colors::GREEN;
		piece[1][1] = colors::GREEN;
		piece[0][2] = colors::GREEN;
		rot = 1;
		break;
	}
	case 2:
	{
		clear();
		piece[0][0] = colors::GREEN;
		piece[1][0] = colors::GREEN;
		piece[1][1] = colors::GREEN;
		piece[2][1] = colors::GREEN;
		rot = 2;
		break;
	}

	default:
		break;
	}
	
}

S::S()
{
	rotate(1);
	rotnum = 2;
}


S::~S()
{
}
