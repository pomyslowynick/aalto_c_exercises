#include "source.h"
#include <limits.h>
#include <stdio.h>

int smallest_number(int array[], int size) {
    int i, smallest;

    for(i = 0; i < size; ++i) {
        if(smallest > array[i]) {
            smallest = array[i];
        }
        // printf("%d\n", i);
    }
    
    return smallest;
}
