#include "math.h"
#include "square.h"

double square::compute(double d)
{
	this->input = d;
    this->result = pow(this->input, 2);
    return this->result;
};
