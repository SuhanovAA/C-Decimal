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

#define SCALE 0x00ff0000              // 00000000 11111111 00000000 00000000
#define SCALE_ERROR_MASK ~0x80ff0000  // 01111111 00000000 11111111 11111111
#define SCALE_SIGN_MINUS 0x80000000   // 10000000 00000000 00000000 00000000

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

int decimal_div_by_ten(s21_decimal *result);

// --- arithmetic functions --- //

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

// --- transform functions --- //

// ПРОВЕРИТЬ ТЕСТЫ
int s21_from_float_to_decimal(float src, s21_decimal *dst);
// ПРОВЕРИТЬ ТЕСТЫ
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
// ПРОВЕРИТЬ ТЕСТЫ
int s21_is_less(s21_decimal value_1, s21_decimal value_2);
// ПРОВЕРИТЬ ТЕСТЫ
int s21_is_less_or_equal(s21_decimal value_1, s21_decimal value_2);
int s21_is_equal(s21_decimal value_1, s21_decimal value_2);
int s21_is_not_equal(s21_decimal value_1, s21_decimal value_2);

// --- additional_func --- //

/**
 * Сравнение value_1 и value_2. Если порядок не равен 0, то проводится
 * нормализация порядка определенного массива. После чего вызывается функция
 * is_greater, которая проверяет разницу между битами.
 * @param value_1
 * @param value_2
 * @return - -1 - при value_1 < value_2
 * @return - 0 - при value_1 == value_2
 * @return - 1 - при value_1 > value_2
 */
int compare(s21_decimal value_1, s21_decimal value_2);

/**
 * Получение бита из числа double по индексу. Использует цикл for для сдвига
 * числа на индекс бита вправо путем деления на 2 и округления в меньшую сторону
 * с помощью функции floor(). Затем берется остаток от деления на 2 для
 * получения значения бита.
 * @param number - число double типа
 * @param index - требуемый индекс поиска по number
 * @return - 0 - бит по индексу отсутствует
 * @return - 1 - если есть бит
 */
int float_get_bit(double number, int index);

void set_bit_decimal(s21_decimal *dst, int bit_index, int bit_value);

/**
 * Вычисление разницы между value_1 и value_2 по битам от старшего (95) до
 * младшего (0).
 * @param value_1 децимал число (4 байта)
 * @param value_2 децимал число (4 байта)
 * @return - 0 - Все биты равны
 * @return - Разница между битами
 */
int decimal_is_greater(s21_decimal value_1, s21_decimal value_2);

void decimal_normalization(s21_decimal *dst, int diff);

void decimal_shift_left(s21_decimal *value, int shift);

/**
 * Суммирование битов двух decimal-числе в одно результирующее число.
 * @param value_1 первое decimal-число
 * @param value_2 второе decimal-число
 * @param *result результат суммирования
 */
void decimal_summ(s21_decimal value_1, s21_decimal value_2,
                  s21_decimal *result);

/**
 * Зануление всех байт (4 байта / 0..3 индекса) decimal-числа.
 * @param *dst decimal-число
 */
void decimal_nullify(s21_decimal *dst);

/**
 * Проверка decimal-числа (мантиссы) на 0.
 * @param value decimal-число
 * @return - 1 - если мантисса содержит нули
 * @return - 0 - если в мантиссе есть 1
 */
int decimal_mantissa_equal_zero(s21_decimal value);

int get_bit_decimal(s21_decimal value, int bit_index);

int get_sign_decimal(s21_decimal value);

int get_scale_decimal(s21_decimal value);

void set_scale_decimal(s21_decimal *value, int scale);

void decimal_invert_sign(s21_decimal *dst);

float float_generate_random(float a, float b);

/**
 * Деление decimal-числа на 10. Проход от старшего бита мантиссы (95) до
 * младшего (0).
 * @param *result decimal-число
 * @return - остаток от деления числа на 10
 */
int decimal_div_by_ten(s21_decimal *result);

/**
 * Проверка 4 байта или 3 индекса decimal-числа на лишние биты, кроме
 * порядка и знака.
 *
 * Биты от 0 до 15, младшее слово, не используются и должны быть равны нулю.
 * Биты с 24 по 30 не используются и должны быть равны нулю.
 *
 * @param value decimal-число
 * @return - 0 - OK
 * @return - 1 - существует лишний бит(-ы)
 */
int decimal_check_scale_mask(s21_decimal value);

int decimal_binary_add(s21_decimal value_1, s21_decimal value_2,
                       s21_decimal *result);

#endif  // S21_DECIMAL_H