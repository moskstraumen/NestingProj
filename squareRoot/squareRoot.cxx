#include "squareRoot.h"
#include "math.h"

double squareRoot::compute(double d)
{
	this->input = d;
    this->result = sqrt(this->input);
    return this->result;
};
