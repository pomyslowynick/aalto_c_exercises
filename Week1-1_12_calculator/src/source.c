#include <stdio.h>
#include "source.h"

void calculate(void) {
    float f1, f2, f3;
    char c;

    scanf("%f %c %f",&f1,&c,&f2);
    if (c == '+') {
        f3 = f1 + f2;
        printf("%.2f + %.2f = %.2f\n", f1, f2, f3);
    } else if (c == '-') {
        f3 = f1 - f2;
        printf("%.2f - %.2f = %.2f\n", f1, f2, f3);
    } else if (c == '*') {
        f3 = f1 * f2;
        printf("%.2f * %.2f = %.2f\n", f1, f2, f3);
    } else if (c == '/') {
        f3 = f1 / f2;
        printf("%.2f / %.2f = %.2f\n", f1, f2, f3);
    } else {
        printf("error\n");
    }

}
