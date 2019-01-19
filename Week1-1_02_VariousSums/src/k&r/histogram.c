#include <stdio.h>

main()
{
    int c,i,nwhite,noletters;
    int ndigit[10];

    nwhite = noletters = 0;
    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            for (i = 0; i < noletters; ++i) {
                putchar('|');
            }
            if (noletters > 0) {
                putchar('\n');
            }
            noletters = 0;
        }
        else {
            ++noletters;
        }
    }    

}