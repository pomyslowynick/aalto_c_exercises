#include <string.h>
#include <stdio.h>

main() {
    int i, n;

    char a[] = "This is a string which will be printed 10 characters a line";
    n = strlen(a);
    for(i = 0; i < n; i++) {
        printf( "%c%c", a[i], (i%10==9 || i==n-1) ? '\n' : ' ');
    }

}