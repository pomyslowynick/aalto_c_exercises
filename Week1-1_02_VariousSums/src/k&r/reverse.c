#include <stdio.h>
#define MAXLEN 1000


char reverse(char s[]) {
    int i, j;
    int wordSize;
    

    wordSize = 0;
    printf("%s\n", s);
    for(i = 0; s[i] != '\0'; ++i) {
        ++wordSize;
    }
    s[0] = 's';
    char result[wordSize];
    
    j = 0;
    while(wordSize >= 0) {
        char temp = s[wordSize - 1];
        result[j] = temp;
        --wordSize;
        ++j;
    }
    result[j] = '\0';
    printf("%s\n", result);
    return result;
}

main() {
    char result[] = "Trevor Hallows";
    reverse(result);
    printf("%s", result);
}