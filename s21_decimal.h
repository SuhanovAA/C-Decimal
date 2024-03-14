#ifndef S21_DECIMAL_H
#define S21_DECIMAL_H

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NULL_NUMB ((void *)0)

#define MAX_INT 2147483647
#define MIN_INT -2147483647 - 1

#define SIZE_DECIMAL 4
#define SIZE_BIG_DECIMAL 8

#define SIZE_DECIMAL_MANTISSA 2
#define SIZE_BIG_DECIMAL_MANTISSA 6

// #define SCALE_BITS 0xff0000  // 111111110000000000000000
#define SCALE_ERROR_MASK 0b01111111100000000111111111111111

#define OK 0
#define ERROR 1
#define ERROR_CONVERSION 1
#define ERROR_OVERFLOW 1
#define ERROR_NEG_OVERFLOW 2
#define ERROR_DIVISION_BY_ZERO 3

#define SIGN_POS 0  // +
#define SIGN_NEG 1  // -

typedef struct {
  int bits[4];
} s21_decimal;

typedef struct {
  unsigned int bits[SIZE_BIG_DECIMAL];
} big_decimal;

// --- arithmetic functions --- //

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

// --- transform functions --- //

int s21_from_float_to_decimal(float src, s21_decimal *dst);
int s21_from_decimal_to_float(s21_decimal src, float *dst);
int s21_from_int_to_decimal(int src, s21_decimal *dst);
int s21_from_decimal_to_int(s21_decimal src, int *dst);

// --- another functions --- /

int s21_floor(s21_decimal value, s21_decimal *result);
int s21_round(s21_decimal value, s21_decimal *result);
int s21_truncate(s21_decimal value, s21_decimal *result);
int s21_negate(s21_decimal value, s21_decimal *result);

// --- compare functions --- //

int s21_is_greater(s21_decimal value_1, s21_decimal value_2);
int s21_is_greater_or_equal(s21_decimal value_1, s21_decimal value_2);
int s21_is_less(s21_decimal value_1, s21_decimal value_2);
int s21_is_less_or_equal(s21_decimal value_1, s21_decimal value_2);
int s21_is_equal(s21_decimal value_1, s21_decimal value_2);
int s21_is_not_equal(s21_decimal value_1, s21_decimal value_2);

// --- additional_func --- //

/**
 * Сравнение value_1 и value_2. Если порядок не равен 0, то проводится
 * нормализация порядка определенного массива. После чего вызывается функция
 * is_greater, которая проверяет разницу между битами.
 *
 * @param value_1
 * @param value_2
 *
 * @return - -1 - при value_1 < value_2
 * @return - 0 - при value_1 == value_2
 * @return - 1 - при value_1 > value_2
 */
int compare(s21_decimal value_1, s21_decimal value_2);

int float_get_bit(double number, int index);

void set_bit_decimal(s21_decimal *dst, int bit_index, int bit_value);

/**
 * Вычисление разницы между value_1 и value_2 по битам от старшего (95) до
 * младшего (0).
 *
 * @param value_1 децимал число (4 байта)
 * @param value_2 децимал число (4 байта)
 *
 * @return - 0 - Все биты равны
 * @return - Разница между битами
 */
int is_greater(s21_decimal value_1, s21_decimal value_2);

void copy_decimal(s21_decimal *new__decimal_array, s21_decimal src);

void decimal_normalization(s21_decimal *dst, int diff);

void decimal_shift_left(s21_decimal *value, int shift);

void decimal_summ(s21_decimal value_1, s21_decimal value_2,
                  s21_decimal *result);

void nullify_decimal(s21_decimal *dst);

int check_decimal_zero(s21_decimal value);

int get_bit_decimal(s21_decimal value, int bit_index);

int get_sign_decimal(s21_decimal value);

int get_scale_decimal(s21_decimal value);

void set_scale_decimal(s21_decimal *value, int scale);

void invert_sign_decimal(s21_decimal *dst);

// void convert_decimal_to_big_decimal(s21_decimal value, big_decimal *dst);

// int convert_big_decimal_to_decimal(big_decimal value, s21_decimal *dst);

int check_decimal(s21_decimal value);

#endif  // S21_DECIMAL_H