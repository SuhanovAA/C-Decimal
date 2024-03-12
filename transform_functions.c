#include "s21_decimal.h"

// --- transform functions --- //

/*
Возвращаемое значение - код ошибки:

0 - OK
1 - ошибка конвертации

Уточнение про преобразование числа типа float:

Если числа слишком малы (0 < |x| < 1e-28), вернуть ошибку и значение, равное 0
Если числа слишком велики (|x| > 79,228,162,514,264,337,593,543,950,335) или
равны бесконечности, вернуть ошибку При обработке числа с типом float
преобразовывать все содержащиеся в нём значимые десятичные цифры. Если таких
цифр больше 7, то значение числа округляется к ближайшему, у которого не больше
7 значимых цифр.

Уточнение про преобразование из числа типа decimal в тип int:

Если в числе типа decimal есть дробная часть, то её следует отбросить (например,
0.9 преобразуется 0)
*/

// int s21_from_float_to_decimal(float src, s21_decimal *dst);
int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  int error = check_decimal(src);
  if (!error) {
    int scale = get_scale_decimal(src);
    int sign = get_sign_decimal(src);

    *dst = 0.0;

    for (int i = 0; i < 96; i++) {
      if (get_bit_decimal(src, i)) {
        *dst += pow(2, i);
      }
    }

    while (scale) {
      *dst /= 10;
      scale--;
    }

    if (sign) {
      *dst *= -1;
    }
  }
  return error;
}

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  int error = OK;
  int sign = SIGN_POS;
  if (dst == NULL_NUMB || src > MAX_INT || src < MIN_INT) {
    error = ERROR_CONVERSION;
  } else {
    nullify_decimal(dst);
    if (src < 0) {
      sign = SIGN_NEG;
      src = -src;
    }
    dst->bits[0] = src;
    if (sign) invert_sign_decimal(dst);
  }
  return error;
}

// часть тестов не проходит
int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  int error = check_decimal(src);
  if (!error) {
    int data = 0;
    int scale = get_scale_decimal(src);

    if (scale + 31 < 95) {
      for (int i = scale + 31; i <= 95; ++i) {
        if (get_bit_decimal(src, i)) {
          error = 1;
        }
      }
    }

    if (!error) {
      for (int i = scale + 30; i >= scale; --i) {
        data <<= 1;
        data |= get_bit_decimal(src, i);
      }
      if (get_sign_decimal(src)) {
        data = -data;
      }
      *dst = data;
    }
  }

  return error;
}
