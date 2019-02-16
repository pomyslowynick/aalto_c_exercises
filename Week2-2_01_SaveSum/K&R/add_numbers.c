#include <stdio.h>

main() {
    int firstNumber, secondNumber;

    firstNumber = getchar() - '0';
    getchar();
    secondNumber = getchar() - '0';
    getchar();

    printf("%d + %d = %d\n", firstNumber, secondNumber, firstNumber + secondNumber);


}