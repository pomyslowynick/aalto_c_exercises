#include <check.h>
#include "tmc-check.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>
#include "../src/function_ptrs.h"

void print_ints(const void *v) {
    int i = *(int*)v;
    printf("%i\n", i);
}



START_TEST(test_print_gen_with_integers)
{
    int array [5];
    for (int i = 1; i <= 5; i++) array[i-1] = i;
    freopen("mockoutput.txt", "w", stdout);
    print_gen(array, sizeof(int), sizeof(array), (&print_ints));
    fclose(stdout);
    
    FILE *fp = fopen("mockoutput.txt", "r");
    for (int i = 0; i < 5; i++) {
        char str [10];
        char cmp_str [10];
        fgets(str, 10, fp);
        sprintf(cmp_str, "%i\n", i+1);
        char tooltip [30];
        char *d;
        char *s;
        sprintf(tooltip, "Expected: %s, Got: %s", cmp_str, str);
        for (s=d=tooltip;(*d=*s);d+=(*s++!='\n'));
        fail_unless(strcmp(str, cmp_str) == 0, tooltip);
    }
}
END_TEST


void print_doublepointers(const void *v) {

    double i = **(double**)v;
    printf("%.0f\n", i);
}

void print_doublepointer(const void* v) {
    double i = **(double**)v;
    printf("%.0f\n", i);
}

void print_double(const void* v) {
    double i = *(double*)v;
    printf("%.0f\n", i);
}



START_TEST(test_print_gen_with_doublepointers)
{
    double * array [5];
    for (int i = 1; i <= 5; i++) {
      array[i-1] = malloc (sizeof(double));
      *(array[i-1])= (double)i;
      }
    freopen("mockoutput.txt", "w", stdout);
    print_gen(array, sizeof(double), sizeof(array), print_doublepointer);
    fclose(stdout);
    
    FILE *fp = fopen("mockoutput.txt", "r");
    for (int i = 0; i < 5; i++) {
        char str [10];
        char cmp_str [10];
        fgets(str, 10, fp);
        sprintf(cmp_str, "%i\n", i+1);
        char tooltip [50];
        char *d;
        char *s;
        sprintf(tooltip, "With double* expected: %s, Got: %s", cmp_str, str);
        for (s=d=tooltip;(*d=*s);d+=(*s++!='\n'));
        fail_unless(strcmp(str, cmp_str) == 0, tooltip);
    }
}
END_TEST


void print_chars(const void *v) {
    char c = *(char*)v;
    printf("%c\n", c);
}

START_TEST(test_print_gen_with_characters)
{
    char array [5] = {'a', 'b', 'c', 'd', 'e'};
    freopen("mockoutput.txt", "w", stdout);
    print_gen(array, sizeof(char), sizeof(array), (&print_chars));
    fclose(stdout);
    
    FILE *fp = fopen("mockoutput.txt", "r");
    for (int i = 0; i < 5; i++) {
        char str [10];
        char cmp_str [10];
        fgets(str, 10, fp);
        sprintf(cmp_str, "%c\n", array[i]);
        char tooltip [30];
        char *d;
        char *s;
        sprintf(tooltip, "Expected: %s, Got: %s", cmp_str, str);
        for (s=d=tooltip;(*d=*s);d+=(*s++!='\n'));
        fail_unless(strcmp(str, cmp_str) == 0, tooltip);
    }
}
END_TEST

int main(int argc, const char *argv[])
{
	Suite *s = suite_create("Test");

    tmc_register_test(s, test_print_gen_with_integers, "print_gen");
    tmc_register_test(s, test_print_gen_with_characters, "print_gen");
    tmc_register_test(s, test_print_gen_with_doublepointers, "print_gen");

	return tmc_run_tests(argc, argv, s);
}
