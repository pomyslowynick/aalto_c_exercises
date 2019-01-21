#include <math.h>
#include <stdio.h>

main() {
    int test = pow(2,3);
    printf("%d\n", test);
}

int power(int base, int n) {
    int p;
    
    for (p = 1; n > 0; --n) {
        p = p * base;
    }
    return p;
}