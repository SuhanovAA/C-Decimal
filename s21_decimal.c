#include "s21_decimal.h"

/*  <-----  Comparison Operators    ----->  */

int big_is_greater(big_decimal value_1, big_decimal value_2) {
  int result = 0;
  for (int i = 7 * 32 - 1; i >= 0; i--) {
    result = get_bit_big_decimal(value_1, i) - get_bit_big_decimal(value_2, i);
    if (result) break;
  }
  return result;
}

int compare_generate_result(s21_decimal value_1, s21_decimal value_2) {
  int result_compare = 0;
  int sign_1 = get_sign_decimal(value_1);
  int sign_2 = get_sign_decimal(value_2);
  big_decimal big_decimal_1, big_decimal_2;
   
  convert_decimal_to_big_decimal(value_1, &big_decimal_1);
  convert_decimal_to_big_decimal(value_2, &big_decimal_2);
  
  if (!check_decimal_zero(value_1) || !check_decimal_zero(value_2)) {
    if (!sign_1 && sign_2) {
      result_compare = 1;
    } else if (sign_1 && !sign_2) {
      result_compare = -1;
    } else {
      int scale_1 = get_scale_decimal(value_1);
      int scale_2 = get_scale_decimal(value_2);

      if (scale_1 > scale_2)
        big_decimal_normalization(&big_decimal_2, scale_1 - scale_2);
      else if (scale_1 < scale_2)
        big_decimal_normalization(&big_decimal_1, scale_2 - scale_1);

      result_compare = big_is_greater(big_decimal_1, big_decimal_2);
      if (sign_1) result_compare *= -1;
    }
  }
  return result_compare;
}

int s21_is_greater(s21_decimal value_1, s21_decimal value_2) {
  return compare_generate_result(value_1, value_2) == 1? 1:0;
}

int s21_is_greater_or_equal(s21_decimal value_1, s21_decimal value_2) {
  return compare_generate_result(value_1, value_2) >= 0 ? 1: 0;
}

int s21_is_less(s21_decimal value_1, s21_decimal value_2) {
  return compare_generate_result(value_1, value_2) == -1 ? 1:0;
}

int s21_is_less_or_equal(s21_decimal value_1, s21_decimal value_2) {
  return compare_generate_result(value_1, value_2) <= 0 ? 1:0;
}

int s21_is_equal(s21_decimal value_1, s21_decimal value_2) {
  return compare_generate_result(value_1, value_2) ? 0:1;
}

int s21_is_not_equal(s21_decimal value_1, s21_decimal value_2) {
  return compare_generate_result(value_1, value_2) ? 1 : 0;
}