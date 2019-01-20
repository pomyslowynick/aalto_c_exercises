#include "source.h"

int is_prime(int number) {
    
    int count = 0;
    int i;
    
    for (i = 2; i <= number/2; i++){
        if ((number % i) == 0){
            count++;
            break;
        }
    }
    
    if (count == 0 & number != 1){
        return 1;
    } else {
        return 0;
    }
    
}
