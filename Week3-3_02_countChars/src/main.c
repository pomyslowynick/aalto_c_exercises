#include <stdio.h>
#include "fun_with_files.h"

/*
* Implement the function int count_characters_in_file(char * filename). 
* Function receives a file name, and counts the number of characters in that file, 
* taking into account all line breaks and related characters. They are included in the count. 
* Function return the number of characters. If it was not able to open the file, return 0.
*/

int main( int argc, const char* argv[] )
{

  printf("File koe.txt contains %d characters, should be 58\n", count_characters_in_file("koe.txt"));
  printf("File non-existent contains %d characters, should be zero\n", count_characters_in_file("non-existent"));
// You should also test the function with a file that has 0 characters, just one character, just one empty line, ...
  return 0;
}
