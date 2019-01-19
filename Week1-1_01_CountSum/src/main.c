#include <stdio.h>
#include "source.h"

/* Task is from Aalto C programming Basics Course
 * Objective: formatted input and output
 * Write function count_sum() that reads two integers from the user, calculates their sum and prints it in the following format: 
 * 1 + 2 = 3 
 * There should be a new line in the end. */

/* You may modify the main function as you wish. It is not tested by the tmc server*/

int main() {
    printf("This program will print the sum of two integers given by the user via stdin.\n");
    count_sum();
    return 0;
}
