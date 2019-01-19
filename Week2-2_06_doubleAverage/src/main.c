#include <stdio.h>
#include "mathfuncs.h"


/*
Write a function double average(double* a, int len) in mathfuncs.c that returns the average value of len  decimal numbers. The numbers are stored sequentially in the memory starting from the word pointed by a.
*/


int main()
{


   double array[3]= {2.3, 7.8, -4.0};

   printf ("Function average returned %1.3f\n", average (array, 3));

    return -1;
}
