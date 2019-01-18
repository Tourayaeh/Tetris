#pragma once
#include "Tetromino.h"
#include <iostream>
using namespace std;
class I :
	public Tetromino
{
public:
	void rotate(const int rotation);
	I();
	~I();
};

