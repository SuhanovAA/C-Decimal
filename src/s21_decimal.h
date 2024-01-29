#ifndef S21_DECIMAL_H
#define S21_DECIMAL_H

#define SIZE_DECIMAL 4
#define SIZE_BIG_DECIMAL 8

#define SIZE_DECIMAL_MANTISSA 2
#define SIZE_BIG_DECIMAL_MANTISSA 6

typedef struct {
    int bits[SIZE_DECIMAL];
}s21_decimal;

typedef struct {
    int bits[SIZE_BIG_DECIMAL];
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
void nulligy_mantissa_big_decimal(big_decimal *dst);

/**
 * Проверка на 0 массивов->структур s21_decimal и big_decimal
 * 
 * @param value значение в структуре
 * @return (1 - нулевая / 0 - не нулевая)
*/
int check_decimal_zero(s21_decimal value);
int check_big_decimal_zero(big_decimal value);





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