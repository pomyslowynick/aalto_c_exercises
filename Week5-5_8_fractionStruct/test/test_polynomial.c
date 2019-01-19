#include <check.h>
#include "tmc-check.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../src/polynomial.h"

// Helpers
Fraction * createFraction(int numerator, int denominator) {
	Fraction *frac = malloc(sizeof(Fraction));
	frac->numerator = numerator;
	frac->denominator = denominator;
	return frac;
}

//new
START_TEST(create_new__fraction)
{
	Fraction *first = Fraction_new(1, 3);
	fail_unless(first->numerator == 1 && first->denominator == 3);
}
END_TEST

// Addition
// Addition
START_TEST(adding_fractions_with_same_denominator_works)
{
        Fraction *first = Fraction_new(1, 3);
        Fraction *second = createFraction(1, 3);
        Fraction *result = Fraction_add(first, second);
        fail_unless(result->numerator == 2 && result->denominator == 3);
}
END_TEST



START_TEST(adding_fractions_causes_simplification)
{
	Fraction *first = createFraction(1, 3);
	Fraction *second = Fraction_new(2, 3);
	Fraction *result = Fraction_add(first, second);
	fail_unless(result->numerator == 1 && result->denominator == 1);
}
END_TEST

START_TEST(adding_fractions_with_zero_denominator_gives_error)
{
	Fraction *first = createFraction(1, 0);
	Fraction *second = Fraction_new(2, 3);
	Fraction *result = Fraction_add(first, second);
	fail_unless(result == NULL);
}
END_TEST

START_TEST(adding_one_fifth_to_one_tenth_should_produce_three_tenths)
{
	Fraction *first = Fraction_new(1, 5);
	Fraction *second = createFraction(1, 10);
	Fraction *result = Fraction_add(first, second);
	fail_unless(result->numerator == 3 && result->denominator == 10);
}
END_TEST

START_TEST(adding_two_negative_signed_fractions_works_with_first_argument_negatives)
{
	Fraction *first = createFraction(-1, 5);
	Fraction *second = Fraction_new(-1, 10);
	Fraction *result = Fraction_add(first, second);
	fail_unless(result->numerator == -3 && result->denominator == 10, "-1/5 + -1/10 should equal -3/10");
}
END_TEST

START_TEST(adding_two_negative_signed_fractions_with_both_argument_negatives)
{
	Fraction *first = Fraction_new(-1, -5);
	Fraction *second = Fraction_new(-1, -10);
	Fraction *result = Fraction_add(first, second);
	fail_unless(result->numerator == 3 && result->denominator == 10, "-1/-5 + -1/-10 should result in 3/10");
}
END_TEST

START_TEST(adding_a_positive_value_to_a_larger_negative_value_keeps_result_negative)
{
	Fraction *first = Fraction_new(-5, 6);
	Fraction *second = Fraction_new(1, 2);
	Fraction *result = Fraction_add(first, second);
	fail_unless(result->numerator == -1 && result->denominator == 3, "-5/6 + 1/2 should result in -1/3");
}
END_TEST

START_TEST(adding_hidden_tests)
{
		Fraction *first = Fraction_new(0, 0);
		Fraction *second = Fraction_new(0, 0);

FILE *fp = fopen("test/DataHiddenTest.txt", "r");
if (fp) {
	// If file exists, i.e., on server
	int randomDataRows = 100;
	int i;
	for (i = 0; i < randomDataRows; i++) {
		// Row contains given fraction, addition result, subtraction result, multiplication result, division result
		int firstInputUpper = 0;
		int firstInputLower = 0;
		int secondInputUpper = 0;
		int secondInputLower = 0;
		int addUpper = 0;
		int addLower = 0;
		int subUpper = 0;
		int subLower = 0;
		int mulUpper = 0;
		int mulLower = 0;
		int divUpper = 0;
		int divLower = 0;

		fscanf(fp, "%i/%i %i/%i %i/%i %i/%i %i/%i %i/%i\n", &firstInputUpper, &firstInputLower, 
			&secondInputUpper, &secondInputLower,
			&addUpper, &addLower,
			&subUpper, &subLower,
			&mulUpper, &mulLower,
			&divUpper, &divLower);

		first->numerator=firstInputUpper; first->denominator= firstInputLower;
		second->numerator = secondInputUpper; second->denominator = secondInputLower;
		Fraction * result = Fraction_add(first, second); // Abstract this out
		
		char tooltip [100];
		strcpy(tooltip, "Expected: ");
		char result_str[50];
		sprintf(result_str, "%i/%i", addUpper, addLower);
		strcat(tooltip, result_str);
		strcat(tooltip, " got: ");
		char mockstr [50];
                if (result == NULL)
		    sprintf(mockstr, "%s", "NULL");
                else
   		    sprintf(mockstr, "%i/%i", result->numerator, result->denominator);
		strcat(tooltip, mockstr);
		strcat(tooltip, " with: ");
		char frac [50];
		sprintf(frac, "%i/%i + %i/%i", firstInputUpper, firstInputLower, secondInputUpper, secondInputLower);
		strcat(tooltip, frac);
                if (result == NULL)
                   fail(tooltip);
                else {
		   fail_unless(result->numerator == addUpper && result->denominator == addLower, tooltip);
                   Fraction_free(result);
                   }
		}
	}
}
END_TEST

int main(int argc, const char *argv[])
{
	Suite *s = suite_create("Test");

	// Addition
        tmc_register_test(s, create_new__fraction, "Frac_struct");

	tmc_register_test(s, adding_fractions_with_same_denominator_works, "Frac_struct");
	tmc_register_test(s, adding_fractions_causes_simplification, "Frac_struct");
	tmc_register_test(s, adding_fractions_with_zero_denominator_gives_error, "Frac_struct");
	tmc_register_test(s, adding_one_fifth_to_one_tenth_should_produce_three_tenths, "Frac_struct");
	tmc_register_test(s, adding_two_negative_signed_fractions_with_both_argument_negatives, "Frac_struct");
	tmc_register_test(s, adding_two_negative_signed_fractions_works_with_first_argument_negatives, "Frac_struct");
	tmc_register_test(s, adding_a_positive_value_to_a_larger_negative_value_keeps_result_negative, "Frac_struct");
	tmc_register_test(s, adding_hidden_tests, "Frac_struct");

	return tmc_run_tests(argc, argv, s);
}
