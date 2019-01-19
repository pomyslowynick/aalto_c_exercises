#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mathfuncs.h"


double sum_of_absolutes(double x, double y)
{
	return fabs(x) + fabs(y);
}


int sum_of_rounded(double x, double y) 
{
	int c;
	c = ceil(x) + ceil(y);
	return c;
}


int sum_of_characters(char a, char b)
{
	return a + b;
}

