#include <stdio.h>
#include <stdlib.h>
#include "source.h"

/* Write function saveSum(int* ap, int* bp, int* cp) that counts the sum of the integers pointed by ap and bp 
 * and saves the sum into the memory pointed by cp.*/

/* You may modify the main function as you wish. It is not tested by the tmc server*/

int main() {
    int a = 5;
    int b = 4;
    int c = 0;
    
    /* calling with the address of the variable.*/
    saveSum(&a,&b,&c);
    printf("Sum of %d and %d is %d\n", a,b,c);
    
    
    /* Calling with the value of the pointer variable. Pointer variable's value is address of the actual variable.*/
    int* ap = &a;
    int* bp = &b;
    int* cp = &c;
    a=4; b=7; c=-5;
    saveSum(ap, bp, cp);
    printf("Sum of %d and %d is %d\n", a, b, c);
    
    
    /* And mixing them*/
    a=4; b=-7;
    saveSum(&a, &b, cp);
    printf("Sum of %d and %d is %d\n", a, b, c);
    
    
    /* Make sure that you really understand the similarities and differences of these two ways of calling the function.
     * It will make the rest of the course much easier for you. */
  
    
    return 0;
}
