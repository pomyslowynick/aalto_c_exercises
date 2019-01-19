#include <check.h>
#include "tmc-check.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>
#include "../src/hidden_text.h"


START_TEST(test_read_lsb)
{
  FILE* fp = fopen("c-whoa.bmp", "r");
  uint8_t result = read_lsb(fp);
  uint8_t expected = 0;
  fail_unless(result == expected);
}
END_TEST

START_TEST(test_extract_byte)
{
  FILE* fp = fopen("c-whoa.bmp", "r");
  uint8_t result = extract_byte(fp);
  printf("%d\n", result);
  uint8_t expected = 26;
  fail_unless(result == expected);
}
END_TEST

START_TEST(test_read_uint32)
{
  FILE* fp = fopen("c-whoa.bmp", "r");
  uint32_t result = read_uint32(fp);
  uint32_t expected = 1396067650;
  fail_unless(result == expected);
}
END_TEST

START_TEST(test_read_pixel_offset)
{
  FILE* fp = fopen("c-whoa.bmp", "r");
  uint32_t result = read_pixel_offset(fp);
  fail_unless(result == 54);
}
END_TEST

START_TEST(test_read_msg)
{
  FILE* fp = fopen("c-whoa.bmp", "r");
  freopen("mockoutput", "w", stdout);
  read_msg(fp);
  fclose(stdout);
  fclose(fp);
  FILE* mock = fopen("mockoutput", "r");
  char str [100];
  const char* expected[6];
  expected[0] = "\n";
  expected[1] = "It looks like our programmer...\n";
  expected[2] = "\n";
  expected[3] = "... can C the hidden message.\n";
  expected[4] = "\n";
  expected[5] = "YEEAAAAHHHH!!!\n";
  int i = 0;
  for(i = 0; i < 6; i++)
  {
	  fgets(str, 100, mock);
	  fail_unless(!strcmp(expected[i], str));
  }
  fclose(mock);
}
END_TEST

int main(int argc, const char *argv[])
{
  Suite *s = suite_create("Test");

  tmc_register_test(s, test_read_lsb, "hide_read_lsb");
  tmc_register_test(s, test_extract_byte, "hide_extract");
  tmc_register_test(s, test_read_uint32, "hide_readint");
  tmc_register_test(s, test_read_pixel_offset, "hide_read_pixel");
  tmc_register_test(s, test_read_msg, "hide_readmsg");
  return tmc_run_tests(argc, argv, s);
}
