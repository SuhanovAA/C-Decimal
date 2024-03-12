#include "s21_decimal.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int error = (check_decimal(value_1) && check_decimal(value_2));

  if (!error) {
    big_decimal big_value_1, big_value_2, big_result;
    int sign_1 = get_sign_decimal(value_1);
    int sign_2 = get_sign_decimal(value_2);
    int scale_1 = get_scale_decimal(value_1);
    int scale_2 = get_scale_decimal(value_2);

    if (scale_1 > scale_2)
      decimal_normalization(&value_2, scale_1 - scale_2);
    else if (scale_1 < scale_2)
      decimal_normalization(&value_1, scale_2 - scale_1);

    convert_decimal_to_big_decimal(value_1, &big_value_1);
    convert_decimal_to_big_decimal(value_2, &big_value_2);

    bitwise_addition(big_value_1, big_value_2, &big_result);

    // if (!check_overflow_big_decimal(big_result)){
    //     error = 1;
    // }else{
        if (sign_1 + sign_2){
            invert_sign_big_decimal(&big_result);
        }
        convert_big_decimal_to_decimal(big_result, result);
    // }
  }

  return error;
}
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);