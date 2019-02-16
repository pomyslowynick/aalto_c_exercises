#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

long factorial(int n);

int main() {
    int userNum = 0;
    char numbaz[3];
    int x = 0;
    char *eptr;

    while(1) {  
        printf("Enter number to factorialize: \n");
        fgets(numbaz, 2,stdin);
        userNum = strtol(numbaz, &eptr, 10);
        // for(; x < strlen(numbaz); x++) {
        //     userNum = userNum * (10 * x )+ (10 * x + (numbaz[x] - '0'));
        // }
        printf("%d\n", userNum);
        // printf("%d", userNum);
        // long res = factorial(userNum);
        // printf("%ld\n", res);
        // getchar();
        // getchar();
    }
}

long factorial(int n) {
    if(n == 1) {
        return n;
    }else {
        return n * factorial(n -1);
    };
}