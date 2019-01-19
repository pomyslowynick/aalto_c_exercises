#include "polynomial.h"
#include <stdio.h>
#include <stdlib.h>


/*    Fractions

Write a function int sub_fraction(int a, int c, int b, int d)  to add two fractions and 
print the simplified version of the result fraction.


Just to remind:  a/b  + c/d = ad+bc / cd

To simplify fraction the numerator and denumerator are divided by their greatest common divisor.

For example  1/30 + 1/42 = 12/210 = 6/105 = 2/35. 
The fraction 2/35 should be printed followed by a line break. Print format:

Result: 2/35\n

Test you function with negative values also. 
Function returns 1, if the operation succeeded, otherwise 0. 
Note that for each fraction operation there are situations where the operation is not defined, 
leading to an unsuccessful operation. In such a case, the function does not print anything.

*/

int main()
{
	add_fraction(19, 43, 80, 27);
	return 1;
}
