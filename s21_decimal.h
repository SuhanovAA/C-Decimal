#ifndef S21_DECIMAL_H
#define S21_DECIMAL_H

#include <math.h>
#include <stdio.h>
#include <stdbool.h>

#define NULL_NUMB ((void *)0)

#define MAX_INT 2147483647
#define MIN_INT -2147483647 - 1

#define SIZE_DECIMAL 4
#define SIZE_BIG_DECIMAL 8

#define SIZE_DECIMAL_MANTISSA 2
#define SIZE_BIG_DECIMAL_MANTISSA 6

#define SCALE_BITS 0xff0000  // 111111110000000000000000
#define SCALE_ERROR_MASK 0b01111111100000000111111111111111
// #define SCALE_MIN_DECIMAL 96 + 16
// #define SCALE_MIN_BIG_DECIMAL 224 + 16
// #define SCALE_MAX_DECIMAL 96 + 23
// #define SCALE_MAX_BIG_DECIMAL 224 + 23

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

// --- additional_func --- //
/**
 * Функция проходит по каждому индексу массива (4 байт / индексы от 0 до 3
 * включительно) src и копирует индексы в новый массив new_decimal_array.
 *
 * @param new_decimal_array куда копируется
 * @param src откуда копируется
 */
void copy_decimal(s21_decimal *new__decimal_array, s21_decimal src);

/**
 * Функция проходит по каждому индексу массива (8 байт / индексы от 0 до 7
 * включительно) src и копирует индексы в новый массив new_big_decimal_array.
 *
 * @param new_big_decimal_array куда копируется
 * @param src откуда копируется
 */
void copy_big_decimal(s21_decimal *new_big_decimal_array, s21_decimal src);

/**
 * Сравнивает два больших децимал числа (массив value_1 и массив value_2).
 * Проходит через каждый бит этих чисел, начиная с самого старшего бита (223 до
 * 0 включительно) и вычисляет разницу между битами двух массивов на каждой
 * позиции.
 *
 * @return (различия не найдены 0 / различие )
 */
int big_decimal_check_equal_bits(big_decimal value_1, big_decimal value_2);

/**
 * Проверка на ноль децимал числа по индексу с 0 до 95 (вкл) бита ( 3 байта из
 * 4).
 *
 * @param value массив
 * @return 0 - ноль найден / 1 - нули не найдены
 */
int decimal_bits_is_equal_zero(s21_decimal value);

/**
 * Проверка на ноль большого децимал числа по индексу с 0 до 223 (вкл) бита ( 3
 * байта из 4).
 *
 * @param value массив
 * @return 0 - если найден ноль и 1 - если не найден 0
 */
int big_decimal_bits_is_equal_zero(big_decimal value);

void big_decimal_normalization(big_decimal *dst, int diff);
void big_decimal_shift_left(big_decimal *value, int shift);

void big_decimal_summ(big_decimal value_1, big_decimal value_2,
                      big_decimal *result);
void big_decimal_diff(big_decimal value_1, big_decimal value_2,
                      big_decimal *result);

/**
 * Зануление массивов->структур s21_decimal и big_decimal
 *
 * @param dst Адрес на структуры
 */
void nullify_decimal(s21_decimal *dst);
void nullify_big_decimal(big_decimal *dst);

/**
 * Зануление мантиссы массивов->структур s21_decimal и big_decimal
 *
 * @param dst Адрес на структуры
 */
void nullify_mantissa_decimal(s21_decimal *dst);
void nullify_mantissa_big_decimal(big_decimal *dst);

/**
 * Проверка на 0 массивов->структур s21_decimal и big_decimal
 *
 * @param value значение в структуре
 * @return (1 - нулевая / 0 - не нулевая)
 */
int check_decimal_zero(s21_decimal value);
int check_big_decimal_zero(big_decimal value);

/**
 * (get) bit для структур
 *
 * @param value просмотреть значение из массива
 * @param bit_index индекс где смотреть бит
 * @return 1:0 - найденный бит
 */
int get_bit_decimal(s21_decimal value, int bit_index);
int get_bit_big_decimal(big_decimal value, int bit_index);

/**
 * (set) bit для структур
 *
 * @param dst адрес массива
 * @param bit_index индекс куда ставить бит
 * @param bit_value значение бита
 */
void set_bit_decimal(s21_decimal *dst, int bit_index, int bit_value);
void set_bit_big_decimal(big_decimal *dst, int bit_index, int bit_value);

/**
 * (get) Считать знак
 *
 * @param value просмотреть значение (знака) из массива
 * @return 1:0 - найденный бит (знак)
 */
int get_sign_decimal(s21_decimal value);
int get_sign_big_decimal(big_decimal value);

/**
 * Взятие экспоненты из decimal числа. Проход с 23 по 16 бит 4 байта.
 * 
 * @param value decimal число 
 * @return значение экспоненты (степени) decimal числа
*/
int get_scale_decimal(s21_decimal value);

/**
 * Взятие экспоненты из big_decimal числа. Проход с 23 по 16 бит 8 байта.
 * 
 * @param value big_decimal число 
 * @return значение экспоненты (степени) big_decimal числа
*/
int get_scale_big_decimal(big_decimal value);

/**
 * Установка экспоненты decimal числа (4 байт). 
 * 
 * @param value массив decimal числа.
 * @param scale новая экспонента.
*/
void set_scale_decimal(s21_decimal *value, int scale);

/**
 * Установка экспоненты big_decimal числа (8 байт). 
 * 
 * @param value массив big_decimal числа.
 * @param scale новая экспонента.
*/
void set_scale_big_decimal(big_decimal *value, int scale);

/**
 * Поменять знак (позиция 127 бита) децимал числа на противоположный.
 *
 * @param dst адрес массива
 */
void invert_sign_decimal(s21_decimal *dst);

/**
 * Поменять знак (позиция 255 бита) биг децимал числа на противоположный.
 *
 * @param dst адрес массива
 */
void invert_sign_big_decimal(big_decimal *dst);

/**
 * Конвертация из decimal в big_decimal. Проверки 4 байта decimal нет.
 *
 * @param value значение массива
 * @param dst куда конвертировать
 */
void convert_decimal_to_big_decimal(s21_decimal value, big_decimal *dst);

/**
 * Конвертация из big_decimal в decimal. Есть проверка на overflow big_decimal
 * числа.
 *
 * @param value значение массива
 * @param dst куда конвертировать
 */
int convert_big_decimal_to_decimal(big_decimal value, s21_decimal *dst);

/**
 * Проверка на overflow big_decomal
 *
 * @param value значение в структуре big_decimal
 * @return (1 - ОК / 0 - overflow)
 */
int check_overflow_big_decimal(big_decimal value);

/**
 * Проверка последнего байта.
 * - Биты от 0 до 15, младшее слово, не используются и должны быть равны нулю.
 * - Биты с 24 по 30 не используются и должны быть равны нулю.
 *
 * @param value значение массива
 * @return (0 - OK / 1 - OVERFLOW)
 */
int check_decimal(s21_decimal value);

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


int big_is_greater(big_decimal value_1, big_decimal value_2);
int compare(s21_decimal value_1, s21_decimal value_2);

#endif  // S21_DECIMAL_H