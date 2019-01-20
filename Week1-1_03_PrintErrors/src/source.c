#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "source.h"
#include <string.h>
#define MAXLEN 100
#define BREAK_VALUE 101
void count_sum(void) {
    char charsI[MAXLEN], charsJ[MAXLEN];
    char *end; //what the hell is this, find out
    int valI, valJ, sum, control;
    control = 0;

    scanf ("%s %s", charsI, charsJ);
    valI = strtol(charsI, &end, 10); //strtol made it so easy to solve
    valJ = strtol(charsJ, &end, 10);
    if(valI == 0 || valJ == 0) {
        control = 1;
        fprintf(stderr, "error\n"); //still not sure about stderr purpose, have to check it out
    }
    if (control == 0) {
        sum = valI + valJ;
        printf("%s + %s = %d\n", charsI, charsJ, sum);

    }

}


// my failed attempt, thought I was so smart but it didn't work for some reason
    // for(i = 0; i < strlen(charsI); ++i) {
    //     if ((charsI[i]>='a' && charsI[i]<='z') || (charsI[i]>='A' && charsI[i]<='Z')) {
    //         fprintf(stderr, "error\n");
    //         control = 1;
    //         i = BREAK_VALUE;
    //         j = BREAK_VALUE;
    //     }else {
    //         valI = 10 * valI + (charsI[i] - '0');
    //     }
    // }

    // for(; j < strlen(charsJ); ++j) {
    //     if ((charsJ[j]>='a' && charsJ[j]<='z') || (charsJ[j]>='A' && charsJ[j]<='Z')) {
    //         fprintf(stderr, "error\n");
    //         control = 1;
    //         j = BREAK_VALUE;
    //     }else {
    //         valJ = 10 * valJ + (charsJ[j] - '0');
    //     }
    // }