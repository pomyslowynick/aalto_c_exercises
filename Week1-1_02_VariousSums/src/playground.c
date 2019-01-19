#include <stdio.h>

#define LOWER 0

int oneWordPerLine() {
    int c, nc;

    while((c = getchar()) != EOF) {
        if(nc == 0 && c == ' ') {
            putchar('\n');
            nc = 1;
        }else if(nc == 0 && c == '\t'){
            putchar('\n');
            nc = 1;
        }else if(c != ' ' && c != '\t'){
            putchar(c);
            nc = 0;
        }
    }
}

int celsiusToFahrenheit(int cel) {
    float fahr;
    int upper, step;

    upper = 300;
    step = 20;

    cel = upper;
    // while(cel >= LOWER) {
    //     fahr = (cel * 9.0/5.0 + 32);
    //     printf("%3.0f %6.1f\n", cel, fahr);
    //     cel = cel - step;
    // }
    int nc,c;
    

    nc = 0;

    // while((c = getchar()) != EOF)  {
    //     if(c != ' ') {
    //         putchar(c);  
    //         nc = 0; 
    //     }else {
    //         if(nc == 0) {
    //             putchar(c);
    //             ++nc;
    //         }
    //     }
    // }

    while((c = getchar()) != EOF)  {
        if(c == '\t') {
            printf("\\t");
            nc = 1;
        }
        if(c == '\b') {
            printf("\b");
            nc = 1;
        }
        if(c == '\\') {
            printf("\\");
            nc = 1;
        }
        if(nc == 0) {
            putchar(c);
        }
        nc = 0;
    }

}

int countCharacters() {
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for(i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }

    while((c = getchar()) != EOF) {
        if(c >= '0' && c <= '9') {
            ++ndigit[c-'0'];
        }else if (c == ' ' || c == '\n' || c == '\t'){
            ++nwhite;
        }else {
            ++nother;
        }
    }

    printf("digit =");
    for(i = 0; i < 10; ++i) {
        printf(" %d", ndigit[i]);
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
}

int histogramCount() {
    int c, nc, nw;

    while((c = getchar()) != EOF)  {
        if(nc == 0 && c == '\t') {
            putchar('\n');
            nc = 1;
        } else if(nc == 0 && c == ' ') {
            putchar('\n');
            nc = 1;
        } else if(nc == 1) {
            putchar('|');
            nc = 0;
        }
    }
}

int power(int x, int y) {
    int i, p;

    p = 1;
    for(i = 1; i <= y; ++i)
        p = p * x;
    return p;
}



int main()
{
    // celsiusToFahrenheit();
    // oneWordPerLine();
    // countCharacters();
    // histogramCount();
    int i;
    for(i = 0; i < 10; ++i) {
            printf("%d %d %d\n", i, power(2,i), power(-3,i));
    };
}