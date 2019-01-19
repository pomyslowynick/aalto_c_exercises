#include <stdlib.h>
#include "frankCard.h"


FrankCard* FC_new(char* name){
    return NULL;
}
char* FC_getName(FrankCard* card){
    return card->name;
}
double FC_getBalance(FrankCard* card){
    return card->balance;
}

double FC_load(FrankCard* card, double amount){
 return 0.0;
}

double FC_pay(FrankCard* card, double amount){
    return 0.0;
}


void FC_free(FrankCard** card){
    return;
}
