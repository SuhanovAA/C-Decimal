#include "s21_decimal.h"

// --- compare functions --- //

int s21_is_greater(s21_decimal value_1, s21_decimal value_2);
int s21_is_greater_or_equal(s21_decimal value_1, s21_decimal value_2);
int s21_is_less(s21_decimal value_1, s21_decimal value_2);
int s21_is_less_or_equal(s21_decimal value_1, s21_decimal value_2);

int s21_is_equal(s21_decimal value_1, s21_decimal value_2) {
  int result = 1, temp = 0;
  int sign_value_1 = get_sign_decimal(value_1),
      sign_value_2 = get_sign_decimal(value_2);

  if (check_decimal_zero(value_1) && check_decimal_zero(value_2)) {
    temp = 1;
  } else if (!decimal_bits_is_equal_zero(value_1) ||
             !decimal_bits_is_equal_zero(value_2)) {
    if (sign_value_1 && !sign_value_2) {
      temp = -1;
    } else if (!sign_value_1 && sign_value_2) {
      temp = -1;
    } else {
      big_decimal big_value_1, big_value_2;
      int scale_value_1 = get_scale_decimal(value_1);
      int scale_value_2 = get_scale_decimal(value_2);
      convert_decimal_to_big_decimal(value_1, &big_value_1);
      convert_decimal_to_big_decimal(value_2, &big_value_2);

      if (scale_value_1 < scale_value_2) {
        big_decimal_normalization(&big_value_1, scale_value_2 - scale_value_1);
      } else if (scale_value_1 > scale_value_2) {
        big_decimal_normalization(&big_value_2, scale_value_1 - scale_value_2);
      }
      temp = big_decimal_check_equal_bits(big_value_1, big_value_2);
      if (sign_value_1) temp *= -1;
    }
    result = temp ? 0 : 1;
  }

  return result;
}

int s21_is_not_equal(s21_decimal value_1, s21_decimal value_2) {
  return !s21_is_equal(value_1, value_2);
}