#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include "hidden_text.h"


/*
In this task you will uncover a hidden message from a picture. The message is encoded in the least significant bits of the pixel data.

The task is already split to several steps for you.

a) Write a function uint8_t read_lsb(FILE* f) that reads one byte from a given FILE handle and returns the least significant bit of that byte. Hint: Use the bitwise AND operator to extract the bit.

b) Write a function uint8_t extract_byte(FILE* f) that reads reads the next eight bytes from the FILE pointer, extracts the least significant bit from each one and constructs a new byte of the least significant bytes. The least significant bit of the first byte becomes the least significant bit of the new byte, the least-significant bit of the second byte becomes the second least significant bit and so on. Return the constructed byte. Hint: Use the previous function to your advantage.

c) Write a function uint32_t read_uint32(FILE* f) that reads four bytes from a given FILE handle, interprets these bytes as a 32-bit unsigned little-endian integer and returns its value.

d) Write a function uint32_t read_uint32(FILE* f) that seeks to file position 0xa in a given FILE handle and reads a 32-bit unsigned integer from that position. You may test this function with the ../test/c-whoa.bmp file. Note: The position 0xa (10) in a BMP image file contains the byte offset of the pixel data of the image, In this BMP file, the pixel data starts from the byte offset 54.

e) Write a function uint32_t read_uint32(FILE* f) that uncovers and prints the hidden message in the file given. Use the previous function to determine the location of pixel data in a given BMP file and move to that location in the file. Starting from that position extract the least significant bits into bytes by using the extract_byte function and print the bytes as characters to standard output. Keep on extracting and printing until you get a byte that has the value 0.

Try your program with the c-whoa.bmp file in the test directory - you should see the hidden message.

*/


int main()
{
/*
  FILE* fp = fopen("../test/c-whoa.bmp", "r");
	read_msg(fp);
*/
	return 0;
}
