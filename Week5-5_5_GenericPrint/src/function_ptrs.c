#include <stdlib.h>
#include <stdio.h>
#include "function_ptrs.h"


void print_gen(const void *block, size_t elem_size, size_t block_size, void (*print_it) (const void*)) {
}
