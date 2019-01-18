#include "Library.h"
#include "O.h"

void O::rotate(int rotation)
{
	if (rotation == 1)
	{
		clear();
		piece[0][0] = colors::YELLOW;
		piece[1][0] = colors::YELLOW;
		piece[0][1] = colors::YELLOW;
		piece[1][1] = colors::YELLOW;
	}
}

O::O()
{
	rotate(1);	
	rotnum = 1;
}


O::~O()
{
}
