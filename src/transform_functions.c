#include "s21_decimal.h"

// --- transform functions --- //

int s21_from_float_to_decimal(float src, s21_decimal *dst);
int s21_from_decimal_to_float(s21_decimal src, float *dst) { int error = OK; }
int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  int error = OK;
  if (dst == NULL_NUMB) {
    error = ERROR_CONVERSION;
  } else {
    big_decimal dst_big_decimal;
    nullify_big_decimal(&dst_big_decimal);
    if (src != 0) {
      dst_big_decimal.bits[0] = src;
      if (src < 0) invert_sign_big_decimal(&dst_big_decimal);
    }
    convert_big_decimal_to_decimal(dst_big_decimal, dst);
  }
  return error;
}
int s21_from_decimal_to_int(s21_decimal src, int *dst);
