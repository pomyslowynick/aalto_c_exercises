#include <stdio.h>
#include "source.h"

/* Task is from Aalto C Programming Basics course.
 * Objective: pointers
 * Implement function void swap(double* a, double* b) that gets two pointers to integers as parameters. 
 * The function should swap the content of pointed integers. */

/* You may modify the main function as you wish. It is not tested by the tmc server*/

int main(void) {
    double a = 1.0;
    double b = -3.7;
    printf("Before swap a = %.2f and b = %.2f\n", a, b);
    swap(&a, &b);
    printf("After swap a = %.2f and b = %.2f\n", a, b);
    return 0;
}
