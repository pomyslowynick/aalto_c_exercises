#include <stdio.h>
#include <math.h>
#include "source.h"

void printTree(int height) {
    int i,j, k;
    int whitespace;
    int trunkSpace;
    char stars[height + 1];
    int on = 2;

    k = 0;
    i = 1;
    j = 1;
    stars[0] = '*';
    stars[1] = '\0';
    trunkSpace = height -3;

    while(i < height + 1) {
        whitespace = height + 1 - i ;
        while(whitespace > 1) {
            putchar(' ');
            --whitespace;
        }
        printf("%s\n", stars);
        stars[j] = '*';
        ++j;
        stars[j] = '*';
        ++j;
        stars[j] = '\0';
        ++i;
    }

    while(on) {
        while (trunkSpace >= k) {
            putchar(' ');
            ++k;
        }
        printf("***\n");
        k = 0;
        --on;
    }

}
