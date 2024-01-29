#include "s21_decimal.h"

void nullify_decimal(s21_decimal *dst){
    int i;
    for (i = 0; i < SIZE_DECIMAL; i++){
        dst->bits[i] = 0;
    }
}

void nullify_big_decimal(big_decimal *dst){
    int i;
    for (i = 0; i < SIZE_BIG_DECIMAL; i++){
        dst->bits[i] = 0;
    }
}
