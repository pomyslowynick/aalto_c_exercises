#include <stdio.h>
#include <stdlib.h>
#include "source.h"

#define MAX_LEN 1000

void calculate_average(){
    int test, size, sum, i, grade, j;
    char *ptr;
    char grades[MAX_LEN];
    double avg;
    size = 0;
    avg = 0.0;
    test = 1;
    while (test != -1) {
        scanf ("%c", grades);
        
        for(i = 0; i < MAX_LEN || grades[i] != '\0'; ++i) {
            j = grades[i] - '0';
            if (grades[i] == '-1') {
                test = -1;
                avg = sum / size;
            } else {
                ++size;
                sum = sum + j;

            }
        }
    }
    printf("%f\n", avg);
}
