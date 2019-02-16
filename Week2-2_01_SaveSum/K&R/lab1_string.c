#include <stdio.h>

main() {
    char initials[5];

    initials[0] = 'R';
    initials[1] = '.';
    initials[2] = 'R';
    initials[3] = '.';
    initials[4] = '\0';

    printf("%s\n", initials);

    char word[3] = {'C', 'a', 't', '\0'};

    printf("%s\n", word);

    char s[] = "kitty Cat";

    printf("%s\n", s);

    int x = 0;
    char a = 'A';
    while(a <= 'Z') {
        printf("Letter %2c %2d 0x%x\n", a, a, a);
        a++;
    }
}
