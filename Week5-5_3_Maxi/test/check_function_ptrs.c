#include <check.h>
#include "tmc-check.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>
#include "../src/function_ptrs.h"

// maxi tests
double square(double x) { return x * x; }

START_TEST(test_maxi_with_square_function)
{
    double result = maxi(2, 3, (&square));
    fail_unless(result == 9, "When squaring 2 and 3, 9 should be the max of the results");

    result = maxi(5, 3, (&square));
    fail_unless(result == 25, "When squaring 5 and 3, 25 should be the max of the results");
}
END_TEST

double negative(double x) { return -1 * x; }

START_TEST(test_maxi_with_negative)
{
    double result = maxi(1, -1, (&negative));
    fail_unless(result == 1, "When giving 1 and -1 to a function doing x = -x, 1 should be the max");

    result = maxi(-9, -2, (&negative));
    fail_unless(result == 9, "When giving -9 and -2 to a function doing x = -x, 9 should be the max");
}
END_TEST

int main(int argc, const char *argv[])
{
	Suite *s = suite_create("Test");

    tmc_register_test(s, test_maxi_with_square_function, "maxi");
    tmc_register_test(s, test_maxi_with_negative, "maxi");

	return tmc_run_tests(argc, argv, s);
}
