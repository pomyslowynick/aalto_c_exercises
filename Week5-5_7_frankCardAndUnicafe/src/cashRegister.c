#include <stdlib.h>
#include "cashRegister.h"


CashRegister* CR_new(char* name){
    return NULL;
}

char* CR_getName(CashRegister* cashRegister){
    return NULL;
}

double CR_getCashIn(CashRegister* cashRegister){
    return 0.0;
}

int CR_getEconomicalSold(CashRegister* cashRegister){
    return 0;
}

int CR_getGourmetSold(CashRegister* cashRegister){
    return 0;
}

double CR_payEconomical(CashRegister* cashRegister, double cashGiven){
    return 0.0;
}

double CR_payGourmet(CashRegister* cashRegister, double cashGiven){
    return 0.0;
}

int CR_payEconomicalFromCard(CashRegister* cashRegister, FrankCard* card){
    return 0;
}

int CR_payGourmetFromCard(CashRegister* cashRegister, FrankCard* card){
    return 0;
}

double CR_loadMoneyToCard(CashRegister* cashRegister, FrankCard* card, double amount){
}

void CR_free(CashRegister **cashRegister){
}
