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


// Tests for the counting function
START_TEST (test_character_counting_with_empty_file)
{
	int count = count_characters_in_file("empty.data");
	fail_unless(count == 0, "File named empty.data has no characters.");
}
END_TEST

START_TEST (test_character_counting_with_file_containing_three_characters_including_newline)
{
	int count = count_characters_in_file("three_characters.data");
	fail_unless(count == 3, "File named three_characters has exactly 3 characters, including a newline.");
}
END_TEST

START_TEST (test_chraracter_counting_with_file_containing_6_characters_including_spaces_on_three_lines)
{
	int count = count_characters_in_file("divided_example.data");
	fail_unless(count == 6, "File contains exactly 6 characters. Check that your function take into account line spaces and newlines.");
}
END_TEST

int main(int argc, const char* argv[]) {
	Suite *s = suite_create("FunWithFiles tests");

	// Count characters
	tmc_register_test(s, test_character_counting_with_empty_file, "countingfile");
	tmc_register_test(s, test_character_counting_with_file_containing_three_characters_including_newline, "countingfile");
	tmc_register_test(s, test_chraracter_counting_with_file_containing_6_characters_including_spaces_on_three_lines, "countingfile");

	return tmc_run_tests(argc, argv, s);
}
