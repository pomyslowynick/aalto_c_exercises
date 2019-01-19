#include <check.h>
#include "tmc-check.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>
#include "../src/aes.h"

// Tests for shift_row
START_TEST(test_shift_row_with_rows_0123)
{
	state *st = malloc(sizeof(state));
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			(*st)[i][j] = j;
		}
	}
	shift_row(st);

	// First row
	fail_unless((*st)[0][0] == 0, "The st[0][0] should be 0");
	fail_unless((*st)[0][1] == 1, "The st[0][1] should be 1");
	fail_unless((*st)[0][2] == 2, "The st[0][2] should be 2");
	fail_unless((*st)[0][3] == 3, "The st[0][3] should be 3");

	// Second row
	fail_unless((*st)[1][0] == 1, "The st[1][0] should be 1");
	fail_unless((*st)[1][1] == 2, "The st[1][2] should be 2");
	fail_unless((*st)[1][2] == 3, "The st[1][2] should be 3");
	fail_unless((*st)[1][3] == 0, "The st[1][2] should be 0");

	// Third row
	fail_unless((*st)[2][0] == 2, "The st[2][0] should be 2");
	fail_unless((*st)[2][1] == 3, "The st[2][2] should be 3");
	fail_unless((*st)[2][2] == 0, "The st[2][2] should be 0");
	fail_unless((*st)[2][3] == 1, "The st[2][2] should be 1");

	// Last row
	fail_unless((*st)[3][0] == 3, "The st[3][0] should be 3");
	fail_unless((*st)[3][1] == 0, "The st[3][2] should be 0");
	fail_unless((*st)[3][2] == 1, "The st[3][2] should be 1");
	fail_unless((*st)[3][3] == 2, "The st[3][2] should be 2");
}
END_TEST

START_TEST(test_inv_shift_row_with_rows_0123)
{
	state *st = malloc(sizeof(state));
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			(*st)[i][j] = j;
		}
	}
	inv_shift_row(st);

	// First row
	fail_unless((*st)[0][0] == 0, "The st[0][0] should be 0");
	fail_unless((*st)[0][1] == 1, "The st[0][1] should be 1");
	fail_unless((*st)[0][2] == 2, "The st[0][2] should be 2");
	fail_unless((*st)[0][3] == 3, "The st[0][3] should be 3");

	// Second row
	fail_unless((*st)[1][0] == 3, "The st[1][0] should be 3");
	fail_unless((*st)[1][1] == 0, "The st[1][2] should be 0");
	fail_unless((*st)[1][2] == 1, "The st[1][2] should be 1");
	fail_unless((*st)[1][3] == 2, "The st[1][2] should be 2");

	// Third row
	fail_unless((*st)[2][0] == 2, "The st[2][0] should be 2");
	fail_unless((*st)[2][1] == 3, "The st[2][2] should be 3");
	fail_unless((*st)[2][2] == 0, "The st[2][2] should be 0");
	fail_unless((*st)[2][3] == 1, "The st[2][2] should be 1");

	// Last row
	fail_unless((*st)[3][0] == 1, "The st[3][0] should be 3");
	fail_unless((*st)[3][1] == 2, "The st[3][2] should be 0");
	fail_unless((*st)[3][2] == 3, "The st[3][2] should be 1");
	fail_unless((*st)[3][3] == 0, "The st[3][2] should be 2");
}
END_TEST

// Tests for read_block
START_TEST(test_read_block_with_exactly_128_bits)
{
	uint8_t vals[4][4] = {{0, 1, 2, 3}, {0, 1, 2, 3}, {0, 1, 2, 3}, {0, 1, 2, 3}};
    FILE *fp = fopen("file_with_exactly_128_bits.txt", "r");
	state *st = read_block(fp);
	fclose(fp);

	int i,j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
            fail_unless((*st)[i][j] == vals[i][j], "Reading from test/file_with_exactly_128_bits.txt: Each row should contain only values 0 1 2 3");
		}
	}
}
END_TEST

int main(int argc, const char *argv[])
{
	Suite *s = suite_create("Test");

    // Tests for read_block
    tmc_register_test(s, test_read_block_with_exactly_128_bits, "stateblock-read");

    // Tests for shift_row
	tmc_register_test(s, test_shift_row_with_rows_0123, "stateblock-shift");
	tmc_register_test(s, test_inv_shift_row_with_rows_0123, "stateblock-invshift");

	return tmc_run_tests(argc, argv, s);
}
