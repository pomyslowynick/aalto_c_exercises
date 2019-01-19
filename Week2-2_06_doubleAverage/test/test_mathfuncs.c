#include <check.h>
#include "tmc-check.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../src/mathfuncs.h"

START_TEST(average_works_for_one_number)
{
	double* x = malloc(sizeof(double));
	*x = 1.0;
	fail_unless(average(x, 1) == 1.0);
}
END_TEST

START_TEST(average_works_for_two_positive_numbers)
{
	double array[2];
	array[0] = 3;
	array[1] = 5;
	fail_unless(average(array, 2) == 4.0);
}
END_TEST

START_TEST(average_works_when_it_has_negative_arguments)
{
	double array[2];
	array[0] = -3;
	array[1] = 3;
	fail_unless(average(array, 2) == 0.0);
}
END_TEST

START_TEST(average_works_with_four_arguments)
{
	double array[4];
	array[0] = 10;
	array[1] = 11;
	array[2] = 19;
	array[3] = 19;
	double epsilon = 0.001;
	fail_unless(average(array, 4) < 14.75 + epsilon && average(array, 4) > 14.75 - epsilon, "Average should work with array 10 11 19 19 by being about 14.75");
}
END_TEST

int main(int argc, const char *argv[])
{
	Suite *s = suite_create("Test");

	tmc_register_test(s, average_works_for_one_number, "davg");
	tmc_register_test(s, average_works_for_two_positive_numbers, "davg");
	tmc_register_test(s, average_works_when_it_has_negative_arguments, "davg");
	tmc_register_test(s, average_works_with_four_arguments, "davg");

	return tmc_run_tests(argc, argv, s);
}
