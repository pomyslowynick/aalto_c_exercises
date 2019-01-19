#include <stdlib.h>
#include <stdio.h>
#include "function_ptrs.h"

/*
Generic Print

Write a function printGen (const void *block, size_t elem_size, size_t block_size, void (*print_it) (const void*))

which prints all the elements in the block using the callback function printIt.

Test your program with various types, for example a block of doubles and a block of pointers to doubles. 

Make sure that you understand how the addresses and dereferencing are used here!

*/

void printchar (const void * a)
  {
  printf("%c",*(char *)a);
  }


int main()
{
   char y[15]="test_test_test\n";
   print_gen(y,sizeof(char), sizeof(y), printchar);


    return 0;
}


