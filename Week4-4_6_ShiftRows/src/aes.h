#ifndef AES_H
#define AES_H

typedef uint8_t state [4][4];

state* read_block(FILE *fp);

void print_block (state *p);


void shift_row(state *arr);
void inv_shift_row(state *arr);

#endif
