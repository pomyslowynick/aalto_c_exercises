#include <stdio.h>
#include "source.h"

/* This task is from Aalto C Programming Basics course
 * Objective: files and char pointer arrays
 * 
 * 
 * Function  int read_lines(char filename, char *** array, int size) read the lines 
 * from file filename and stores them to the argument array. 
 * Function returns the number of stored lines. 
 * The initial size of the array is given in argument size and pointer to this 
 * initial array in argument array. Function needs to (re)allocate more space 
 * to the array. 
 * The argument array can be NULL and the size 0, in which case no space has been 
 * allocated in advance. 
 * Function returns the number of lines in the array. 
 * It also must make sure that the last element in the array is indicated with NULL. 
 * All elements preceding the NULL are pointers to strings. Each string contains 
 * one line of the file. If the file open fails, return -1.
 * HINT: function getline might be useful. Use it correctly.
 *
 * Function int shortest_line(char **​array, int len) prints the shortest line, but 
 * also return the position of the line in the array. If the array is empty, 
 * function can return -1.
 * For identical lenghts, return the earlier position.
 *
 * Function int find_lexi_first (char **array, int len) locates the lexicographically
 * first line and returns its position in the array. For an empty array funtion returns -1.
 * For similar lines, return the earlier position.
 */

int main() {
    char* filename = "textfile.txt";
    char **array=NULL;
    int size = 0;

    int len = read_lines(filename, &array, size);
    printf("Read %d lines from file %s\n", len, filename);


    char ** tmp = array;
    int count = 0;

   while (tmp != NULL ) {
      printf("line %d:  %s\n", count++, *tmp);
      tmp++;
   }

    int  index = shortest_string (array, len);
    printf("Shortest line in row %d is: %s\n", index+1, array[index]);

    index = find_lexi_first (array, len);
    printf("Lexicographically first row in pos %d is: %s\n", index+1, array[index]);

    return 0;
}
