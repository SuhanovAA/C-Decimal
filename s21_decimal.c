#include "s21_decimal.h"

/*  <-----  Comparison Operators    ----->  */

/**
 * Проверка, что value_1 > value_2
 *
 * @param value_1
 * @param value_2
 *
 * @return 0 - FALSE \
 * @return 1 - TRUE
 */
int s21_is_greater(s21_decimal value_1, s21_decimal value_2) {
  return compare(value_1, value_2) == 1 ? 1 : 0;
}

/**
 * Проверка, что value_1 >= value_2
 *
 * @param value_1
 * @param value_2
 *
 * @return 0 - FALSE \
 * @return 1 - TRUE
 */
int s21_is_greater_or_equal(s21_decimal value_1, s21_decimal value_2) {
  return compare(value_1, value_2) >= 0 ? 1 : 0;
}

/**
 * Проверка, что value_1 < value_2
 *
 * @param value_1
 * @param value_2
 *
 * @return 0 - FALSE \
 * @return 1 - TRUE
 */
int s21_is_less(s21_decimal value_1, s21_decimal value_2) {
  return compare(value_1, value_2) == -1 ? 1 : 0;
}

/**
 * Проверка, что value_1 <= value_2
 *
 * @param value_1
 * @param value_2
 *
 * @return 0 - FALSE \
 * @return 1 - TRUE
 */
int s21_is_less_or_equal(s21_decimal value_1, s21_decimal value_2) {
  return compare(value_1, value_2) <= 0 ? 1 : 0;
}

/**
 * Проверка, что value_1 == value_2
 *
 * @param value_1
 * @param value_2
 *
 * @return 0 - FALSE \
 * @return 1 - TRUE
 */
int s21_is_equal(s21_decimal value_1, s21_decimal value_2) {
  return compare(value_1, value_2) ? 0 : 1;
}

/**
 * Проверка, что value_1 != value_2
 *
 * @param value_1
 * @param value_2
 *
 * @return 0 - FALSE \
 * @return 1 - TRUE
 */
int s21_is_not_equal(s21_decimal value_1, s21_decimal value_2) {
  return compare(value_1, value_2) ? 1 : 0;
}






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
int is_greater(s21_decimal value_1, s21_decimal value_2) {
  int result = 0;
  for (int i = 95; i >= 0; i--) {
    result = get_bit_decimal(value_1, i) - get_bit_decimal(value_2, i);
    if (result) break;
  }
  return result;
}

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
int compare(s21_decimal value_1, s21_decimal value_2) {
  int result_compare = 0;
  int sign_1 = get_sign_decimal(value_1);
  int sign_2 = get_sign_decimal(value_2);

  if (!check_decimal_zero(value_1) || !check_decimal_zero(value_2)) {
    if (!sign_1 && sign_2) {
      result_compare = 1;
    } else if (sign_1 && !sign_2) {
      result_compare = -1;
    } else {
      int scale_1 = get_scale_decimal(value_1);
      int scale_2 = get_scale_decimal(value_2);

      if (scale_1 > scale_2)
        decimal_normalization(&value_2, scale_1 - scale_2);
      else if (scale_1 < scale_2)
        decimal_normalization(&value_1, scale_2 - scale_1);

      result_compare = is_greater(value_1, value_2);
      if (sign_1) result_compare *= -1;
    }
  }
  return result_compare;
}