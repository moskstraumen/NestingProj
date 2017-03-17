#include <iostream>
#include "square.h"
#include "squareRoot.h"

int main( int argc, char** argv)
{
	square squ;
	squareRoot squrt;
	std::cout << "Square of 3 is :      " << squ.compute(3) << std::endl;
	std::cout << "Square root of 3 is : " << squrt.compute(25) << std::endl;

    return 0;
}
