#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "function_ptrs.h"


/*
Max of two function values

Write a function double maxi(double x, double y, double (*fp)(double z)) 
which takes three parameters, 
      two double values x and y and 
      a pointer to a function. 

Function maxi returns as its value the larger of the function values (*fp)(x) and (*fp)(y).

*/

double func (double val)
/* This function exists here only because it was not possible to passa library function fabs as 
function pointer in my test environment. It might not have been implemented as a macro or not a function. */

{
  return fabs(val);
}

int main()
{

    printf("Larger of abs(%.2f) and abs(%.2f) is %.2f\n", -4.0, 2.0, maxi (-4, 2, func ) );

    return 0;
}
