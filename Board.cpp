#include "Board.h"
#include <list>
#include "Library.h"
using namespace std;

Board::Board()
{
}

Board::~Board()
{
	
}

//ajoute un tetromino au tableau
void Board::addTetromino(Tetromino & tetromino, int x, int y)
{		
	for (int i = 0; i < tetromino.getSIZEXY(); i++)
	{
		for (int j = 0; j < tetromino.getSIZEXY(); j++)
		{
			if (tetromino.getPiece()[i][j] != EMPTY)
			{
				disposition[i+y][j+x] = tetromino.getPiece()[i][j];
			}
		}
	}

	
}



//verifier les collisions
bool Board::checkCollision(Tetromino & tetromino, int x, int y)
{

	for (int i = 0; i < tetromino.getSIZEXY(); i++)
	{
		for (int j = 0; j < tetromino.getSIZEXY(); j++)
		{
			if ((y+i) >(SIZEXY[Y]-2)&& tetromino.getPiece()[i][j] != EMPTY)
			{
				return true;
			}

			if (i==tetromino.getSIZEXY()-1)
			{
				if(tetromino.getPiece()[i][j]!=EMPTY && disposition[i + y + 1][j + x]!=EMPTY){
					return true;
				}
				
			}else
			{ 
				if (tetromino.getPiece()[i][j] != EMPTY && tetromino.getPiece()[i+1][j] == EMPTY && 
					disposition[i +y+ 1][j+x] != EMPTY)
				{
					return true;
				}
			}


		}
	}


	return false;
	
}

//vérifier si le mouvement est autorisé
bool Board::movementAllowed( Tetromino & tetromino, int x, int y)
{
	if (x < 0 || x>(SIZEXY[X]-1) || y > (SIZEXY[Y]-1))
	{
		return false;
	}

	
	for (int i = 0; i < tetromino.getSIZEXY(); i++)
	{
	
		for (int j = 0; j < tetromino.getSIZEXY(); j++)
		{
		
			if ((j+x) >(SIZEXY[X] - 1) && tetromino.getPiece()[i][j] != EMPTY)	
			{
				
				return false;
			}
			if ((i+y) > (SIZEXY[Y] - 1) && tetromino.getPiece()[i][j] != EMPTY)
			{
		
				return false;
			}

			if (tetromino.getPiece()[i][j] != EMPTY && disposition[i + y][j + x] !=EMPTY)
			{
				return false;
			}

				

		}
	}


	return true;
}

//vérifie les lignes, les nettoie et renvoie le nombre de lignes nettoyées(le score)
int Board::checkAndCleanLines()
{
	list<int> linesToClean;
	bool found = false;
	for (int i = 0; i < SIZEXY[Y]; i++)
	{
		found = true;

		for (int j = 0; j < SIZEXY[X]; j++)
		{
			if (disposition[i][j] == EMPTY) { found = false; }

		}

		if (found) { linesToClean.push_back(i); }
	}


	if (linesToClean.empty()) { return EMPTY; }


	for (int line : linesToClean) {
		cleanLine(line);
	}

	return linesToClean.size();

}

//effacer une ligne
void Board::cleanLine(int y)
{
	
	for (int j = 0; j < SIZEXY[X]; j++)
	{
			disposition[y][j] = EMPTY;
	}


	for (int i = y; i > 0; i--)
	{
		for (int j = 0; j < SIZEXY[X]; j++)
		{			
				disposition[i][j] = disposition[i-1][j];
				disposition[i-1][j] = EMPTY;
		}
	}

}


//checks game over
bool Board::checkGameOver()
{
	
	for (int j = 0; j < SIZEXY[X]; j++)
	{
		if (disposition[0][j] != EMPTY)
		{
			return true;
		}
	}
	return false;
}

void Board::cleanBoard()
{
	for (int i=0; i<SIZEXY[Y]; i++)
	{
		for (int j=0; j<SIZEXY[X];j++)
		{
			disposition[i][j] = EMPTY;
		}
	}

}



array<array<int, 13>, 23> Board::getDisposition()
{
	return disposition;
}

const int Board::getSIZEX()
{
	return SIZEXY[X];
}

const int Board::getSIZEY()
{
	return SIZEXY[Y];
}

const int Board::getSTARTINGX()
{
	return STARTINGX;
}

const int Board::getSTARTINGY()
{
	return STARTINGY;
}




