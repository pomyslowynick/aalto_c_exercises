#include "polynomial.h"


/*
 Implement a new number type, fraction, that consist of  int numerator and  int denominator. The type definition is already given in the fraction.c. See how it is handled in the fraction.h for the function definitions.
 

Implement following functions in fraction.c.

     Function Fraction* Fraction_new(int numerator, int denominator) allocates a new fraction from heap, sets its value as given in parameters and returns a pointer to the allocated fraction.
     Function void Fraction_free(Fraction* f) releases the memory used by the fraction.

    Function Fraction* Fraction_add(Fraction* first, Fraction* second) adds values first and second and returns the result in a new object allocated from the heap. You should reduce the result to smallest possible denominator.

*/

int main()
{

        Fraction *k = Fraction_new (4,8);
        Fraction *t = Fraction_new (2,5);

        Fraction *a = Fraction_add (k, t);

        Fraction_free(a);
        Fraction_free(k);
        Fraction_free(t);

	return 1;
}
