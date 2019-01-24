#include <stdio.h>
#include <string.h>
void squeeze2(char s[], char c[]) {
    int i, j, k, present,x;
    present = 0;
    for (i = j = 0; s[i] != '\0'; i++) {
        for(k = 0; c[k] != '\0'; k++) {
            
            if(s[i] == c[k]) {
                present = 1;
            }
        }
        if(present == 1) {
            x = i;
            while(x < strlen(s) - 1) {
                s[x] = s[x + 1]; 
                x++;
            }
            s[strlen(s) - 1] = '\0';
            i--;
            // s[i] = '0';
        }
        present = 0;
        k = 0;
    }
    // s[j] = '\0';
}


main () {
    char s[] = "Stranger danger";
    printf("%s\n", s);

    squeeze2(s, "atSr");
    printf("%s\n", s);


}