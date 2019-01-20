#include <stdio.h>

void multiply_matrix(int size){
    int i, j;
    i = 1;
    while(i <= size) {
        for(j = 1; j <= size; ++j) {
            printf("%d\t", j * i);
        }
        j = 1;
        ++i;
        printf("\n");
    }
}
