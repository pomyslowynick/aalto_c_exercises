#include <stdio.h>
#include <stdlib.h>
#include "source.h"
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000

void calculate_average(){
    int sum = 0;
    int count = 0;
    char input[MAX_LEN];

    fgets(input, 20, stdin);

    char *start, *end;
    start = input;
    while(1){
        int temp = strtod(start, &end);
        if(temp == -1)
            break;
        if(*end == 0)
            break;
        start = end;
        
        sum += temp;
        count++;
    }

    double avg = (double)sum / count;
    printf("%.2f\n", avg);
}

// void calculate_average(){
//     int test, size, sum, i,j,k, temp;
//     int grade;
//     int atoiResult[20];
//     char input[MAX_LEN];
//     char formattedInput[MAX_LEN];
//     double avg;
//     size = 0;
//     avg = 0.0;
//     test = 1;
//     k = 0;
//     sum = 0;

    
    // fgets(input,10,stdin);

    
    // for(i = 0;i < strlen(input);++i) {
    //     if(input[i] = ' ') {
    //         input[i] = '0';
    //     }
    // }
    // temp = 0;
    // int bytesread = 0;
    // char *ptr = input;
    // while (scanf(ptr, "%d%n", &temp, &bytesread) > 0 && temp != -1) {
    //     ptr += bytesread;
    //     sum = sum + temp;
    // }
    // if(size > 0) {
    // }
    // for(j = 0; j < strlen(input); ++j) {
    //     int value = input[j] - '0';
    //     printf("%d\n", value);
    //     if(value == -1) {
    //         avg = sum / size;
    //         j = 1000;
    //     } else if(isdigit(input[j])) {
    //         sum = sum + (input[j] - '0');
    //         ++size;
    //     }
    //     // printf("%c\n", input[j]);
    //     // printf("another one\n");
    // }
    // printf("%s\n", input);
    // printf("\n%d das a sum %d das a size", sum, size);

    // printf("%s\n", formattedInput);

    // for (i = 0; atoi(input[i]) != -1; ++i) {
    //     printf("%s", formattedInput);
    //     printf("%d %d\n", sum, size);
    //     if (atoi(formattedInput[i]) == -1) {
    //         test = -1;
    //         avg = sum / size;
    //     } else {
    //         ++size;
    //         // printf("%d this is value of inp\n", (formattedInput[i] - '0'));
    //         sum = sum + atoi(formattedInput[i]);
    //     }
    // }
// }

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