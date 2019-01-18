#pragma once
#include "Tetromino.h"
class O :
	public Tetromino
{
public:
	void rotate(const int rot);
	O();
	~O();
};

