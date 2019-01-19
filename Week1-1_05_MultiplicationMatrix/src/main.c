#include "source.h"
#include <stdio.h>

/* Objective: loops, formatted output
 * Write a function multiply_matrix(int size) that prints a multiplication table from 1 to size. 
 * Use tab between columns and newline at the end of each line. 
 * For example, multiply_matrix(4) should print: 
 * 1    2   3   4
 * 2    4   6   8
 * 3    6   9   12
 * 4    8   12  16*/


int main(void) {
    int size;
    printf("Give the size of multiplication table:\n");
    scanf("%d", &size);
    multiply_matrix(size);
    return 0;
}
