#include "Tetromino.h"
#include "Library.h"

Tetromino::Tetromino()
{
	
}


Tetromino::~Tetromino()
{
}




void Tetromino::clear()
{
	for (int i = 0; i < SIZEXY; i++)
	{
		for (int j = 0; j < SIZEXY; j++)
		{
			piece[i][j] = EMPTY;
		}
	}
}

int Tetromino::getRot()
{
	return rot;
}

int Tetromino::getRotNum()
{
	return rotnum;
}
// obtenir la piece du tetromino
array<array<int, 4>, 4> Tetromino::getPiece()
{
	return piece;
}
// obtenir la taille du tetromino
const int Tetromino::getSIZEXY()
{
	return SIZEXY;
}





