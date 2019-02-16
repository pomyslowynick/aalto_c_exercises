#include <stdio.h>

int main() {
    printf("Size of an int: %ld\nSize of a short int: %ld\nSize of a long int: %ld"
            "\nSize of a char: %ld\nSize of a float: %ld\nSize of a double: %ld\n"
            "",sizeof(int),sizeof(short int), sizeof(long int), sizeof(char),sizeof(float), sizeof(double));
}