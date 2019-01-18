#include "Library.h"
#include "I.h"

void I::rotate(int rotation)
{	
	switch (rotation)
	{
	case 1:
	{
		for (int i = 0; i < SIZEXY; i++)
		{
			for (int j = 0; j < SIZEXY; j++)
			{
				if (j == 0)
				{
					piece[i][j] = colors::LIGHTBLUE;
				}
				else
				{
					piece[i][j] = 0;
				}
			}
		}
		rot = 1;
		break;
	}
	case 2:
	{
		for (int i = 0; i < SIZEXY; i++)
		{
			for (int j = 0; j < SIZEXY; j++)
			{
				if (i == 0)
				{
					piece[i][j] = colors::LIGHTBLUE;
				}
				else
				{
					piece[i][j] = 0;
				}
			}



		}
		rot = 2;
		break;
	}

	default:
		break;
	}
	
	
	

}


I::I()
{
	rotate(1);
	rotnum = 2;
}


I::~I()
{
}
