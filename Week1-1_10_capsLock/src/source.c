#include <stdio.h>
#include <ctype.h>
#include "source.h"
#include <string.h>
#define MAX 100
void print_capsLock(){
    int i;
    char string[MAX];
    
    fgets(string, MAX, stdin);
    for (i=0; string[i] != '\0' || i > MAX; ++i) {
        string[i] = toupper(string[i]);
    }
    printf("%s\n", string);
}
