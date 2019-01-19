typedef struct fraction {
  int numerator;
  int denominator;
} Fraction;

int gcd(int a, int b);

Fraction* Fraction_add(Fraction *r, Fraction *s);

Fraction* Fraction_new(int numerator, int denominator);

void Fraction_free(Fraction *f);
