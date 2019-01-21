#include "source.h"
#include <stdio.h>
int power(int base, int n);


int binary_to_decimal(int binary) {
    int i,sum;
    sum = 0;
    for(i = 0; binary >= 1;  ++i) {
        if((binary % 10) == 1) {
            sum = sum + power(2, i);
        }
        binary = binary / 10;
        printf("%d\n and sum %d\n", i,sum);
    }
    return sum;
}

int power(int base, int n) {
    int p;
    
    for (p = 1; n > 0; --n) {
        p = p * base;
    }
    return p;
}

// int binary_to_decimal(int binary) {
//     int i;

//     if ((binary % 10) == 1) {

//     }
// }
