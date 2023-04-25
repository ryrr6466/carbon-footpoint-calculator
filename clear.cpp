#include "clear.h"
#include<iostream>

void clear::Clear()
{
	std::cout << "\x1B[2J\x1B[H";
}
