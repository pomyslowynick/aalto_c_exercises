#include <stdio.h>

int main() {
    int start = 0;

    for(int x = start; x < (16 * 16); x++) {
        printf("%3x", x);
        if(x && x % 16 == 0) {
            printf("\n");
        }
    }
    putchar('\n');
    printf("Enter your initials:\n");
    char getLetter;
    getLetter = getChar();
    getChar():
    
    return 0;
}