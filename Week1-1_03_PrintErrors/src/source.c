#include <stdio.h>
#include "source.h"

void count_sum(void) {
    int i, j, sum;
    scanf ("%d %d", &i, &j);
    sum = i + j;
    printf("%d + %d = %d\n",i, j, sum);
}
