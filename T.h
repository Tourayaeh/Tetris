#pragma once
#include "Tetromino.h"
class T :
	public Tetromino
{
public:
	void rotate(const int rot);
	T();
	~T();
};

