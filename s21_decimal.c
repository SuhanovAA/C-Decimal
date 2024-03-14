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

/*  <-----  Transform Functions    ----->  */

/**
 * Преобразование из float в int.
 *
 * @param src число float (откуда переводится)
 * @param *dst число decimal (куда переводится)
 *
 * @return 0 - ОК \
 * @return 1 - ОШИБКА КОНВЕРТАЦИИ
 */
int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  int error = 0;
  nullify_decimal(dst);
  if ((fabs(src) < powl(10.0, -28.0)) || (fabs(src) >= powl(2.0, 96.0)))
    error = 1;
  else {
    int scale = 0;
    if (src < 0) {
      invert_sign_decimal(dst);
      src = -src;
    }
    double number = (double)src;

    while (number < 1.0 && scale < 28) {
      number *= 10;
      scale++;
    }
    while (number / pow(10.0, 7) < 1.0 && scale < 28) {
      number *= 10;
      scale++;
    }
    number = floor(number);
    if (fmod(number, 10.0) >= 5) {
      number += 10 - fmod(number, 10.0);
      number = round(number);
    }
    if (scale > 0) {
      number = number / 10;
      scale--;
    }
    while (scale > 0 && (fmod(number, 10.0) < pow(10.0, -8))) {
      number = number / 10;
      number = round(number);
      scale--;
    }
    for (int i = 0; i < 96; i++)
      set_bit_decimal(dst, i, float_get_bit(number, i));
    set_scale_decimal(dst, scale);
  }

  return error;
}
/**
 * Преобразование из decimal в float.
 *
 * @param src число float (откуда переводится)
 * @param *dst число decimal (куда переводится)
 *
 * @return 0 - ОК \
 * @return 1 - ОШИБКА КОНВЕРТАЦИИ
 */
int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  int error = check_decimal(src);
  if (!error) {
    int scale = get_scale_decimal(src);
    int sign = get_sign_decimal(src);
    double temp = (double)0.0;

    for (int i = 0; i < 96; i++)
      if (get_bit_decimal(src, i)) temp += pow(2, i);

    while (scale) {
      temp /= 10;
      scale--;
    }
    *dst = (float)temp;
    if (sign) {
      *dst *= -1;
    }
  }
  return error;
}

/**
 * Преобразование из int в decimal.
 *
 * @param src число float (откуда переводится)
 * @param *dst число decimal (куда переводится)
 *
 * @return 0 - ОК \
 * @return 1 - ОШИБКА КОНВЕРТАЦИИ
 */
int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  nullify_decimal(dst);
  dst->bits[0] = abs(src);
  if (src < 0) invert_sign_decimal(dst);
  return 0;
}

/**
 * Преобразование из decimal в int.
 *
 * @param src число float (откуда переводится)
 * @param *dst число decimal (куда переводится)
 *
 * @return 0 - ОК \
 * @return 1 - ОШИБКА КОНВЕРТАЦИИ
 */
int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  int error = 0;
  double mantissa = 0;
  int scale = get_scale_decimal(src);

  for (int i = 95; i >= 0; --i) {
    mantissa = mantissa * 2 + get_bit_decimal(src, i);
  }

  mantissa /= (pow(10, scale));

  if (get_bit_decimal(src, 127)) {
    mantissa *= -1;
  }
  if (scale > 28 || mantissa > MAX_INT || mantissa < (int)((-MAX_INT) - 1)) {
    error = 1;
  } else {
    *dst = mantissa;
  }

  return error;
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



int float_get_bit(double number, int index) {
  int result = 0;
  for (int i = 0; i < index; i++) number = floor(number / 2);
  result = (int)number % 2;
  return result;
}