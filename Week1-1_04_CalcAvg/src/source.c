#include <stdio.h>
#include <stdlib.h>
#include "source.h"
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000

void calculate_average(){
    int test, size, sum, i,j,k, temp;
    int grade;
    char input[MAX_LEN];
    char formattedInput[MAX_LEN];
    double avg;
    size = 0;
    avg = 0.0;
    test = 1;
    k = 0;
    sum = 0;

    fgets(input,10,stdin);
    for(j = 0;j < strlen(input);++j) {
        if(input[j] = ' ') {
            ;
        }else {
            temp = input[j];
            formattedInput[k] = temp;
            ++k;
        }
    }
    // printf("%s\n", formattedInput);

    for (i = 0; atoi(formattedInput[i]) != -1; ++i) {
        printf("%s", formattedInput);
        printf("%d %d\n", sum, size);
        if (atoi(formattedInput[i]) == -1) {
            test = -1;
            avg = sum / size;
        } else {
            ++size;
            // printf("%d this is value of inp\n", (formattedInput[i] - '0'));
            sum = sum + atoi(formattedInput[i]);
        }
    }
    printf("%f\n", avg);
}

    // while (test != -1) {
    //     printf("%s", input);
    //     if (grade == -1) {
    //         test = -1;
    //         avg = sum / size;
    //     } else {
    //         ++size;
    //         sum = sum + grade;
    //     }
    // }