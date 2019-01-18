#pragma once

#include <array>


using namespace std;

class Tetromino
{
public:
	Tetromino();
	virtual ~Tetromino();
	virtual void rotate(const int rot)=0;

	int getRot();
	int getRotNum();
	array<array<int, 4>, 4> getPiece();
	const int getSIZEXY();


protected:
	void clear();
	int rot, //rot:etat de rotation du tetromino
		rotnum; //rotnum:nombre maximum de rotation du tetromino
	array<array<int, 4>, 4> piece = {};
	const int SIZEXY = 4;

	

};

