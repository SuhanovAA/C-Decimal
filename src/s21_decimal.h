#ifndef S21_DECIMAL_H
#define S21_DECIMAL_H

#include <math.h>

#define SIZE_DECIMAL 4
#define SIZE_BIG_DECIMAL 8

#define SIZE_DECIMAL_MANTISSA 2
#define SIZE_BIG_DECIMAL_MANTISSA 6

typedef struct {
    int bits[SIZE_DECIMAL];
}s21_decimal;

typedef struct {
    unsigned int bits[SIZE_BIG_DECIMAL];
}big_decimal;



// --- additional_func --- //

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
 * Проверка на overflow big_decomal
 * 
 * @param value значение в структуре big_decimal
 * @return (1 - ОК / 0 - overflow)
*/
int check_overflow(big_decimal value);


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

#endif // S21_DECIMAL_H