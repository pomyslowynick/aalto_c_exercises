#include <limits.h>
#include <float.h>
#include <stdio.h>
#include <string.h>


main() {
    char stringLiteral[] = "Hello " 
    "world";
    // char crazyStuff[] = "morning, " . stringLiteral;
    int leng = strlen(stringLiteral);
    // printf("%d\n%d\n%ld\n%llud\n", CHAR_BIT, CHAR_MAX, LONG_MAX, ULLONG_MAX);
    printf("%d\n", leng);
    int i,lim,c;
    for (i = 0; (i < lim-1) * ((c=getchar()) != '\n') * (c != EOF); ++i)
}