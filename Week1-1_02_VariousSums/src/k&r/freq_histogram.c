
#include <stdio.h>

main()
{
    int c, i, nwhite, nother;
    int ndigit[52];

    nwhite = nother = 0;
    for(i = 0; i < 52; ++i) {
        ndigit[i] = 0;
    }

    while((c = getchar()) != EOF) {
        if(c >= 'A' && c <= 'z') {
            ++ndigit[c-'A'];
        }else if (c == ' ' || c == '\n' || c == '\t'){
            ++nwhite;
        }else {
            ++nother;
        }
    }

    printf("digit =");
    for(i = 0; i < 52; ++i) {
        printf(" %d", ndigit[i]);
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
}