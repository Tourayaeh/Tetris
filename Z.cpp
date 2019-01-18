#include "Z.h"
#include "Library.h"

void Z::rotate(int rotation)
{
	switch (rotation)
	{case 1: 
		{
			clear();
			piece[0][0] = colors::RED;
			piece[0][1] = colors::RED;
			piece[1][1] = colors::RED;
			piece[1][2] = colors::RED;
			rot = 1;
			break;
		}
	case 2:
		{
			clear();
			piece[0][1] = colors::RED;
			piece[1][1] = colors::RED;
			piece[1][0] = colors::RED;
			piece[2][0] = colors::RED;
			rot = 2;
			break;
		}

	default:
		break;
	}

}

Z::Z()
{
	rotate(1);
	rotnum = 2;
}


Z::~Z()
{
}
