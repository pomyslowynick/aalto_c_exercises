#include <check.h>
#include "tmc-check.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include "../src/source.h"


START_TEST(test_number_swap) {
    double a, b;

    for (int i = 0; i < 3; i++) {
        a = rand() / 100000.0;
        b = rand() / 1000000.0;
        double a_temp = a;
        double b_temp = b;
        swap(&a, &b);
        fail_unless( ((a- b_temp)<0.5) && ((b- a_temp)<0.5), "swap(a, b) called with *a = %.2f and *b = %.2f. Values after call are: a: %.2f (should be %.2f), b: %.2f (should be %.2f)",
                a_temp, b_temp, a, b_temp, b, a_temp);
    }
}
END_TEST

int main(int argc, const char *argv[])
{
    srand((unsigned)time(NULL));
	Suite *s = suite_create("dswap");
	tmc_register_test(s, test_number_swap, "dswap");
	return tmc_run_tests(argc, argv, s);
}
