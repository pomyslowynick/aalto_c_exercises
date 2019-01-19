#include <stdio.h>
#include <stdlib.h>
#include "polynomial.h"

int gcd(int a, int b) {
  if (a == 0 || b == 0) return 0;
  a = abs(a);
  b = abs(b);
  while(1) {
    if (a < b) {
      int temp = a;
      a = b;
      b = temp;
    }
    int r = a % b;
    a = a/b;
    if (r == 0) {
      return b;
    }
    a = b;
    b = r;
  }
}


Fraction* Fraction_add(Fraction *r, Fraction *s) {
  return (fraction) {0,0};

}

Fraction* Fraction_new(int numerator, int denominator) {
  /* STUB return NULL; */
}

void Fraction_free(Fraction *f) {
}
