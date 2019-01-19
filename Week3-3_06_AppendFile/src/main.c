#include <stdio.h>
#include "fun_with_files.h"

/*

Implement function int append_string (char * file_name). 
Functions reads a user input (from keyboard) and appends it to the end of the test file with name file_name.
Read the user input as character string.  You may assume that the user input is maximum 50 characters long.
Implement the function so that if a non-existent file is given, the file will be created.
If everything goes well the function returns 0. If opening was unsuccessful, return 1.

*/

int main( int argc, const char* argv[] )
{
  append_string("test.txt");
  append_string("NoFile");
  return 0;
}
