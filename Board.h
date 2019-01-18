#pragma once
#include "Tetromino.h"



class Board
{
public:
	Board();
	~Board();
	void addTetromino(Tetromino& tetromino, int x, int y);
	int checkAndCleanLines();
	bool checkCollision(Tetromino& tetromino, int x, int y);
	bool movementAllowed(Tetromino& tetromino, int x, int y);
	bool checkGameOver();
	void cleanBoard();
	array<array<int, 13>, 23> getDisposition();
	const int getSIZEX();
	const int getSIZEY();
	const int getSTARTINGX();
	const int getSTARTINGY();


private:
	void cleanLine(int y);
	const int REALSIZEX = 13, REALSIZEY = 23;
	array<array<int, 13>, 23> disposition = {};
	const int SIZEXY[2] = { 10,20 }, STARTINGX = 4, STARTINGY = 0;
};

