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

void nullify_mantissa_decimal(s21_decimal *dst){
    int i;
    for (i = 0; i <= SIZE_DECIMAL_MANTISSA; i++){
        dst->bits[i] = 0;
    }
}

void nulligy_mantissa_big_decimal(big_decimal *dst){
    int i;
    for (i = 0; i <= SIZE_BIG_DECIMAL_MANTISSA; i++){
        dst->bits[i] = 0;
    }
}

int check_decimal_zero(s21_decimal value){
    int i;
    int check_zero = 1;
    for (i = 0; i <= SIZE_DECIMAL_MANTISSA && check_zero != 0; i++){
        if (value.bits[i] != 0){
            check_zero = 0;
        }
    }
    return check_zero;
}

int check_big_decimal_zero(big_decimal value){
    int i;
    int check_zero = 1;
    for (i = 0; i <= SIZE_BIG_DECIMAL_MANTISSA && check_zero != 0; i++){
        if (value.bits[i] != 0){
            check_zero = 0;
        }
    }
    return check_zero;
}