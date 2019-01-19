#ifndef FUNCTIONPTRS_H
#define FUNCTIONPTRS_H

void print_gen(const void *block, size_t elem_size, size_t block_size, void (*print_it) (const void*));

#endif
