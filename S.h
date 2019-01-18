#pragma once
#include "Tetromino.h"
class S :
    public Tetromino
{
public:
	void rotate(const int rot);
	S();
	~S();
};

