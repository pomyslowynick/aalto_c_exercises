#include <stdio.h>
#include "source.h"

/* Write a function int binary_to_decimal(int), that gets an integer containing only 0s and 1s and return its decimal equivalent.
 * */

/* You may modify the main function as you wish. It is not tested by the tmc server*/

int main(void) {
    printf("%d\n", binary_to_decimal(11101110));  /* correct print value is 238 */
    return 0;
}
