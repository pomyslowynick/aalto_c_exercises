#include <stdio.h>

unsigned long int next = 1;

main() {
    next = next * 1103515245 + 12345;
    next = (unsigned int)(next/65536) % 32768;
    printf("%ld", next);
}