#ifndef S21_DECIMAL_H
#define S21_DECIMAL_H

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INT 2147483647

#define SIZE_DECIMAL 4
#define SIZE_BIG_DECIMAL 8

#define SCALE_ERROR_MASK ~0x80ff0000  // 01111111 00000000 11111111 11111111

#define OK 0
#define ERROR 1
#define ERROR_CONVERSION 1
#define ERROR_OVERFLOW 1
#define ERROR_NEG_OVERFLOW 2
#define ERROR_DIVISION_BY_ZERO 3

#define SIGN_POS 0
#define SIGN_NEG 1

typedef struct {
  int bits[4];
} s21_decimal;

typedef struct {
  unsigned int bits[SIZE_BIG_DECIMAL];
} big_decimal;

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

int s21_from_float_to_decimal(float src, s21_decimal *dst);
int s21_from_decimal_to_float(s21_decimal src, float *dst);
int s21_from_int_to_decimal(int src, s21_decimal *dst);
int s21_from_decimal_to_int(s21_decimal src, int *dst);

int s21_floor(s21_decimal value, s21_decimal *result);
int s21_round(s21_decimal value, s21_decimal *result);
int s21_truncate(s21_decimal value, s21_decimal *result);
int s21_negate(s21_decimal value, s21_decimal *result);

int s21_is_greater(s21_decimal value_1, s21_decimal value_2);
int s21_is_greater_or_equal(s21_decimal value_1, s21_decimal value_2);
int s21_is_less(s21_decimal value_1, s21_decimal value_2);
int s21_is_less_or_equal(s21_decimal value_1, s21_decimal value_2);
int s21_is_equal(s21_decimal value_1, s21_decimal value_2);
int s21_is_not_equal(s21_decimal value_1, s21_decimal value_2);

int compare(s21_decimal value_1, s21_decimal value_2);
void decimal_set_bit(s21_decimal *dst, int bit_index, int bit_value);
int decimal_mantissa_equal_zero(s21_decimal value);
int decimal_get_bit(s21_decimal value, int bit_index);
int decimal_get_sign(s21_decimal value);
int decimal_get_scale(s21_decimal value);
void decimal_set_scale(s21_decimal *value, int scale);
void decimal_invert_sign(s21_decimal *dst);
int decimal_div_by_ten(s21_decimal *result);
int decimal_check_scale_mask(s21_decimal value);
int decimal_three_add(s21_decimal value_1, s21_decimal value_2,
                      s21_decimal value_3, int index);
int decimal_binary_add(s21_decimal value_1, s21_decimal value_2,
                       s21_decimal *result);
void decimal_nullify(s21_decimal *dst);
int bd_is_greater(big_decimal value_1, big_decimal value_2);
void bd_normalization(big_decimal *dst, int diff);
void bd_summ(big_decimal value_1, big_decimal value_2, big_decimal *result);
int bd_get_bit(big_decimal value, int bit_index);
void bd_set_bit(big_decimal *dst, int bit_index, int bit_value);
void bd_nullify(big_decimal *dst);
int bd_get_scale(big_decimal value);
void bd_set_scale(big_decimal *value, int scale);
void convert_decimal_to_big_decimal(s21_decimal value, big_decimal *dst);
int bd_get_sign(big_decimal value);
void bd_invert_sign(big_decimal *dst);
int bd_mantissa_is_not_null(big_decimal value);
int convert_big_decimal_to_decimal(big_decimal value, s21_decimal *result);
void bd_shift_left(big_decimal *dst, int shift);
void bd_bank_round(big_decimal *value, big_decimal remainder);
void bd_diff(big_decimal value_1, big_decimal value_2, big_decimal *result);
int add_and_sub_core(s21_decimal value_1, s21_decimal value_2,
                     s21_decimal *result, int is_sub);
big_decimal bd_mul(big_decimal big_val_1, big_decimal big_val_2);
void bd_res_and_remainder(big_decimal *big_result, big_decimal delitel,
                          big_decimal *remainder);
void bd_div_ten(big_decimal *big_result, big_decimal *remainder,
                big_decimal big_ten_decimal);
big_decimal from_int_to_big_decimal(int src);
void convert_float_to_decimal(float src, s21_decimal *dst, int *error,
                              int sign);
int bd_equal_zero(big_decimal value);

#endif  // S21_DECIMAL_H