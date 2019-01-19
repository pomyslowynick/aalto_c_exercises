#include <stdio.h>
#include <math.h>
#include <string.h>

int htoi(char s[]) {
    int i,n;
    n = 0;
    for(i = 0; i < strlen(s); ++i) {
        if(s[i] >= '0' && s[i] <= '9') {
            n = 16 * n + (s[i] - '0');
        }else if(s[i] >= 'a' && s[i] <= 'f') {
            n = 16 * n + (s[i] - 'a' + 10);
        }else if(s[i] >= 'A' && s[i] <= 'F') {
            n = 16 * n + (s[i] - 'A' + 10);
        }

    }
    int test = '_';
    // printf("%d", test);
    return n;
}
main() {
    printf("%d\n", htoi("Z32"));
}