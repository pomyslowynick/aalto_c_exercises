#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include "aes.h"


/*
Let's use a two-dimensional 4x4 array whose elements are of the type unit8_t. You can find the definition for this state type from aes.h header file.

a) Write a function state* read_block(FILE* fptr) which read a plain text block of 128 bits or 16 bytes from a text file and stores it into an array show type is state. The first byte should go into state[0][0], the send into state[0][1], etc. The function returns a pointer to that array.  Hint: use fread.

b) For your own testing purposes, write a function print_block to print the content of the state array for you to see. (This is not tested or graded by the tmc system).

c) Write a function void shift_row(state* a) to transform the array in the following way:

     The first row of the array is not altered
    The second row, a 1-byte circular left-shift is performed. This means that element a[1][0] is shifted to a[1][3] which is shifted to a[1][2].. and finally a[1][1] to a[1][0]
    For the third row, a 2-byte circular left-shift is performed and
    For the fourth row, a 3-byte circular left-shift is performed

d) Write a function void inv_shift_row(state* a) to perform the circular shifts in the opposite direction.
*/

int main()
{


char fname[60];

printf("Give filename\n");
scanf("%s",fname);

FILE * fp = fopen (fname,"r");
state * p = read_block (fp);

print_block(p);

shift_row(p);
print_block(p);

inv_shift_row(p);
print_block(p);

    return 0;
}
