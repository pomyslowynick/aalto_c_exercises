#include <stdio.h>
#include "source.h"

/* Objective: arrays
 * Implement function int smallest_number(int array[], int size) that gets an array of integers and the size of the array.
 * Function should return the smallest number in the array. */

/* You may modify the main function as you wish. It is not tested by the tmc server*/

int main(void) {
    int array[] = {2, 5, 3, -1, 9, 2, 7};
    int size = 255; // what is this thing returned when size is set to 255???
    int smallest = smallest_number(array, size);
    printf("%d\n", smallest);
    return 0;
}
