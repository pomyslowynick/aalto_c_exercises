#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <check.h>
#include "tmc-check.h"
#include "../src/fun_with_files.h"

// Helpers
FILE *write_to_stdin(char *str) {
	FILE *input = freopen("mockinput", "w+", stdin);
	fputs(str, input);
	fseek(input, 0, SEEK_SET);
	return input;
}

// Appending tests
START_TEST(test_appending_hello_world_to_an_empty_file)
{

	FILE *input = write_to_stdin("Hello world!");

	int status = append_string("empty_file.txt");

	FILE *fp = fopen("empty_file.txt", "r");
	char line [20];
	fgets(line, 100, fp);
	fclose(fp);

	remove("test/empty_file.txt");

	int cmp = strcmp(line, "Hello world!");
	fail_unless(status == 0, "Status should be zero");
	fail_unless(cmp == 0, "The file should contain Hello world! when appending to empty file");
	fclose(input);
}
END_TEST

START_TEST(test_appending_to_file_that_already_says_hello)
{
	FILE *fp = fopen("hello_file.txt", "w+");
	fputs("Hello", fp);
	fclose(fp);

	FILE *input = write_to_stdin(" world!");

	int status = append_string("hello_file.txt");

	fp = fopen("hello_file.txt", "r");
	char line [20];
	fgets(line, 100, fp);
	fclose(fp);

	remove("hello_file.txt");

	int cmp = strcmp(line, "Hello world!");
	fail_unless(status == 0, "Status should be zero");
	fail_unless(cmp == 0, "The file shoul contain Hello world! when appending \" world!\" to a file containing \"Hello\"");
	fclose(input);
}
END_TEST

int main(int argc, const char* argv[]) {
	Suite *s = suite_create("FunWithFiles tests");

	// Appending tests
	tmc_register_test(s, test_appending_hello_world_to_an_empty_file, "Append");
	tmc_register_test(s, test_appending_to_file_that_already_says_hello, "Append");

	return tmc_run_tests(argc, argv, s);
}
