#include <stdio.h>
#define ALPHABET_COUNT 26
#define DIFF_LOWERCASE 32
#define ASCII_A 65
#define ASCII_a 97
main() {
    int i,y;
    char character;
    
    i = 0;
    character = 'R';
    printf("%d\n%c\n", i,character);

    int number = 31;
    char letter = 'a';

    printf("Printing Variables\n");
    printf("Number is\t %d : %x\n", number, number);
    printf("Letter is\t %c : %x\n", letter, letter);
    printf("Press enter to continue");
    getchar();

    char firstLetter, secondLetter, dot;
    dot = '.';
    printf("Give your initials:\n");
    firstLetter = getchar();
    getchar();
    secondLetter = getchar();
    // putchar(++firstLetter);
    // putchar(dot);
    // putchar(++secondLetter);
    // putchar(dot);
    putchar('\n');
    if(firstLetter > 'Z' || firstLetter < 'A') {
        firstLetter = firstLetter - DIFF_LOWERCASE;
    }
    if(secondLetter > 'Z' || secondLetter < 'A') {
        secondLetter = secondLetter - DIFF_LOWERCASE;
    }
    printf("%c.%c.", firstLetter, secondLetter);
    int diff = 'a' - 'A';
    printf("%d\n", diff);

    char alphabetLetters[ALPHABET_COUNT + 1];

    for(int i = 0; i <= ALPHABET_COUNT; i++) {
        if(i == ALPHABET_COUNT) {
            alphabetLetters[i] = '\0';
        }else {
            char temp = i + ASCII_a;
            alphabetLetters[i] = temp;

        }
    }

    printf("%s\n", alphabetLetters);
}