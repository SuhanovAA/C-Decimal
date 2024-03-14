#include "s21_decimal.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int error = (check_decimal(value_1) && check_decimal(value_2));

  if (!error) {
    big_decimal big_value_1, big_value_2, big_result;
    int sign_1 = get_sign_decimal(value_1);
    int sign_2 = get_sign_decimal(value_2);
    int scale_1 = get_scale_decimal(value_1);
    int scale_2 = get_scale_decimal(value_2);

    if (scale_1 > scale_2)
      decimal_normalization(&value_2, scale_1 - scale_2);
    else if (scale_1 < scale_2)
      decimal_normalization(&value_1, scale_2 - scale_1);

    convert_decimal_to_big_decimal(value_1, &big_value_1);
    convert_decimal_to_big_decimal(value_2, &big_value_2);

    bitwise_addition(big_value_1, big_value_2, &big_result);

    // if (!check_overflow_big_decimal(big_result)){
    //     error = 1;
    // }else{
    if (sign_1 + sign_2) {
      invert_sign_big_decimal(&big_result);
    }
    convert_big_decimal_to_decimal(big_result, result);
    // }
  }

  return error;
}
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

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

// --- another functions --- /

int s21_floor(s21_decimal value, s21_decimal *result);
int s21_round(s21_decimal value, s21_decimal *result);

/**
 * Возвращает целые цифры указанного Decimal числа; любые дробные цифры
 * отбрасываются, включая конечные нули.
 *
 * @param value входящий массив
 * @param result исходящий (результат операции) массив
 *
 * @return 0 - OK \
 * @return 1 - ошибка вычисления
 */
// int s21_truncate(s21_decimal value, s21_decimal *result) {
//   int error = check_decimal(value);
//   if (!error) {
//     unsigned int scale = get_scale_decimal(value);
//     if (!scale) {
//       copy_decimal(result, value);
//     } else {
//       s21_decimal ten;
//       s21_decimal valueBuff;
//       nullify_decimal(&valueBuff);
//       s21_from_int_to_decimal(10, &ten);
//       int error = 0;
//       int sign_op = get_sign_decimal(value);
//       value.bits[3] = 0;

//       while (scale > 0) {
//         s21_div(value, ten, result);
//         copy_decimal(&value, *result);
//         scale--;
//       }
//       if (sign_op == 1) {
//         result->bits[3] = (unsigned long)1 << 31;
//       }
//     }
//   }
//   return error;
// }

// деление на 10 децимала
int s21_divide_by_10(s21_decimal *decimal) {
  int remainder = 0;
  for (int i = 2; i >= 0; i--) {
    long int_rewriting = (remainder * 0x100000000) + (long)decimal->bits[i];
    decimal->bits[i] = int_rewriting / 10;
    remainder = int_rewriting - (10 * decimal->bits[i]);
  }
  return remainder;
}

int s21_truncate(s21_decimal value, s21_decimal *result) {
  if (result) {
    int exponent = get_scale_decimal(value);
    nullify_decimal(result);  // занулим result
    if (exponent > 0) {
      while (exponent > 0) {
        s21_divide_by_10(&value);
        exponent--;
      }
    }
    s21_set_scale(&value, 0);
    for (int i = 0; i <= 3; i++) result->bits[i] = value.bits[i];
  }
  return OK;
}
/**
 * Возвращает результат умножения указанного Decimal на -1.
 * Массив value проверяется на overflov. Если проверка пройдена, то копируется
 * value в result и меняется знак на противоположный в result
 *
 * @param value входящий массив
 * @param result исходящий (результат операции) массив
 *
 * @return 0 - OK \
 * @return 1 - ошибка вычисления
 */
int s21_negate(s21_decimal value, s21_decimal *result) {
  int error = check_decimal(value);
  if (!error) {
    copy_decimal(result, value);
    invert_sign_decimal(result);
  }
  return error;
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

void set_bit_decimal(s21_decimal *dst, int bit_index, int bit_value) {
  unsigned int bits_index = 0, flag = 0;
  const unsigned int step = 32;
  int i = 32;
  for (i = step; bits_index <= SIZE_DECIMAL && flag != 1;
       i += step, bits_index++) {
    if (i > bit_index) {
      dst->bits[bits_index] = (dst->bits[bits_index] & ~(1 << bit_index)) |
                              (bit_value << bit_index);
      flag = 1;
    }
  }
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

#include "s21_decimal.h"

void copy_decimal(s21_decimal *new__decimal_array, s21_decimal src) {
  for (int i = 0; i < SIZE_DECIMAL; i++) {
    new__decimal_array->bits[i] = src.bits[i];
  }
}

void copy_big_decimal(s21_decimal *new_big_decimal_array, s21_decimal src) {
  for (int i = 0; i < SIZE_BIG_DECIMAL; i++) {
    new_big_decimal_array->bits[i] = src.bits[i];
  }
}

int big_decimal_check_equal_bits(big_decimal value_1, big_decimal value_2) {
  int result = 0;
  for (int i = 223; i >= 0 && !result; i--) {
    result = get_bit_big_decimal(value_1, i) - get_bit_big_decimal(value_2, i);
  }
  return result;
}

int decimal_bits_is_equal_zero(s21_decimal value) {
  int result = 1;
  for (int i = 0; i < 96 && result == 1; i++) {
    if (!get_bit_decimal(value, i)) {
      result = 0;
    }
  }
  return result;
}

int big_decimal_bits_is_equal_zero(big_decimal value) {
  int result = 1;
  for (int i = 0; i < 224 && result == 1; i++) {
    if (!get_bit_big_decimal(value, i)) {
      result = 0;
    }
  }
  return result;
}

void big_decimal_normalization(big_decimal *dst, int diff) {
  int scale = get_scale_big_decimal(*dst);
  for (int i = 0; i < diff; i++) {
    big_decimal temp_1 = *dst;
    big_decimal temp_2 = *dst;
    big_decimal_shift_left(&temp_1, 1);
    big_decimal_shift_left(&temp_2, 3);
    big_decimal_summ(temp_1, temp_2, dst);
  }
  set_scale_big_decimal(dst, scale + diff);
}

void decimal_normalization(s21_decimal *dst, int diff) {
  int scale = get_scale_decimal(*dst);
  for (int i = 0; i < diff; i++) {
    s21_decimal temp_1 = *dst;
    s21_decimal temp_2 = *dst;
    decimal_shift_left(&temp_1, 1);
    decimal_shift_left(&temp_2, 3);
    decimal_summ(temp_1, temp_2, dst);
  }
  set_scale_decimal(dst, scale + diff);
}

void big_decimal_shift_left(big_decimal *value, int shift) {
  if (shift) {
    unsigned memory = 0;
    for (int i = 0; i < 7; ++i) {
      unsigned temp = value->bits[i];
      value->bits[i] <<= shift;
      value->bits[i] |= memory;
      memory = temp >> (32 - shift);
    }
  }
}

void decimal_shift_left(s21_decimal *value, int shift) {
  if (shift) {
    unsigned memory = 0;
    for (int i = 0; i < 3; ++i) {
      unsigned temp = value->bits[i];
      value->bits[i] <<= shift;
      value->bits[i] |= memory;
      memory = temp >> (32 - shift);
    }
  }
}

void big_decimal_summ(big_decimal value_1, big_decimal value_2,
                      big_decimal *result) {
  int memory = 0;
  unsigned tmp = 0;
  for (int i = 0; i < 224; i++) {
    tmp = get_bit_big_decimal(value_1, i) + get_bit_big_decimal(value_2, i) +
          memory;
    memory = tmp / 2;
    tmp %= 2;
    set_bit_big_decimal(result, i, tmp);
  }
}

void decimal_summ(s21_decimal value_1, s21_decimal value_2,
                  s21_decimal *result) {
  int memory = 0;
  unsigned tmp = 0;
  for (int i = 0; i < 96; i++) {
    tmp = get_bit_decimal(value_1, i) + get_bit_decimal(value_2, i) + memory;
    memory = tmp / 2;
    tmp %= 2;
    set_bit_decimal(result, i, tmp);
  }
}

void big_decimal_diff(big_decimal value_1, big_decimal value_2,
                      big_decimal *result) {
  int memory = 0;
  int tmp = 0;
  for (int i = 0; i < 224; i++) {
    tmp = get_bit_big_decimal(value_1, i) - get_bit_big_decimal(value_2, i) -
          memory;
    memory = tmp < 0 ? 1 : 0;
    tmp %= 2;
    set_bit_big_decimal(result, i, tmp);
  }
}

void nullify_decimal(s21_decimal *dst) {
  int i;
  for (i = 0; i < SIZE_DECIMAL; i++) {
    dst->bits[i] = 0;
  }
}

void nullify_big_decimal(big_decimal *dst) {
  int i;
  for (i = 0; i < SIZE_BIG_DECIMAL; i++) {
    dst->bits[i] = 0;
  }
}

void nullify_mantissa_decimal(s21_decimal *dst) {
  int i;
  for (i = 0; i <= SIZE_DECIMAL_MANTISSA; i++) {
    dst->bits[i] = 0;
  }
}

void nullify_mantissa_big_decimal(big_decimal *dst) {
  int i;
  for (i = 0; i <= SIZE_BIG_DECIMAL_MANTISSA; i++) {
    dst->bits[i] = 0;
  }
}

int check_decimal_zero(s21_decimal value) {
  int i;
  int check_zero = 1;
  for (i = 0; i <= SIZE_DECIMAL_MANTISSA && check_zero != 0; i++) {
    if (value.bits[i] != 0) {
      check_zero = 0;
    }
  }
  return check_zero;
}

int check_big_decimal_zero(big_decimal value) {
  int i;
  int check_zero = 1;
  for (i = 0; i <= SIZE_BIG_DECIMAL_MANTISSA && check_zero != 0; i++) {
    if (value.bits[i] != 0) {
      check_zero = 0;
    }
  }
  return check_zero;
}

int get_bit_decimal(s21_decimal value, int bit_index) {
  unsigned int result = 0, bits_index = 0, flag = 0;
  const unsigned int step = 32;
  int i = 32;
  for (i = step; bits_index <= SIZE_DECIMAL && flag != 1;
       i += step, bits_index++) {
    if (i > bit_index) {
      result = value.bits[bits_index] & 1 << bit_index;
      flag = 1;
    }
  }
  return (int)result ? 1 : 0;
}

int get_bit_big_decimal(big_decimal value, int bit_index) {
  unsigned int result = 0, bits_index = 0, flag = 0;
  const unsigned int step = 32;
  int i = 32;
  for (i = step; bits_index <= SIZE_BIG_DECIMAL && flag != 1;
       i += step, bits_index++) {
    if (i > bit_index) {
      result = value.bits[bits_index] & 1 << bit_index;
      flag = 1;
    }
  }
  return (int)result ? 1 : 0;
}

void set_bit_big_decimal(big_decimal *dst, int bit_index, int bit_value) {
  unsigned int bits_index = 0, flag = 0;
  const unsigned int step = 32;
  int i = 32;
  for (i = step; bits_index <= SIZE_BIG_DECIMAL && flag != 1;
       i += step, bits_index++) {
    if (i > bit_index) {
      dst->bits[bits_index] = (dst->bits[bits_index] & ~(1 << bit_index)) |
                              (bit_value << bit_index);
      flag = 1;
    }
  }
}

int get_sign_decimal(s21_decimal value) {
  int value_sign;
  value_sign = get_bit_decimal(value, 127);
  return value_sign;
}

int get_sign_big_decimal(big_decimal value) {
  int value_sign;
  value_sign = get_bit_big_decimal(value, 255);
  return value_sign;
}

int get_scale_decimal(s21_decimal value) {
  return (int)((unsigned int)(value.bits[3] & ~(1 << 31)) >> 16);
}

int get_scale_big_decimal(big_decimal value) {
  return (int)((unsigned int)(value.bits[7] & ~(1 << 31)) >> 16);
}

void set_scale_decimal(s21_decimal *value, int scale) {
  value->bits[3] &= ~(127 << 16);
  value->bits[3] |= scale << 16;
}

s21_decimal *s21_set_scale(s21_decimal *decimal, int scale) {
  int sign = 0;
  sign = get_sign_decimal(*decimal);
  if (scale >= 0 && scale <= 28) {
    decimal->bits[3] &= 0;
    decimal->bits[3] |= (scale <<= 16);
    set_bit_decimal(decimal, 127, sign);
  }
  return decimal;
}

void set_scale_big_decimal(big_decimal *value, int scale) {
  value->bits[7] &= ~(255 << 16);
  value->bits[7] |= scale << 16;
}

void invert_sign_decimal(s21_decimal *dst) {
  set_bit_decimal(dst, 127, ((get_sign_decimal(*dst) + 1) % 2));
}

void invert_sign_big_decimal(big_decimal *dst) {
  set_bit_big_decimal(dst, 255, ((get_sign_big_decimal(*dst) + 1) % 2));
}

void convert_decimal_to_big_decimal(s21_decimal value, big_decimal *dst) {
  nullify_big_decimal(dst);
  int i, j;
  for (i = 0; i <= SIZE_DECIMAL_MANTISSA; i++) {
    for (j = 31; j >= 0; j--) {
      dst->bits[i] |= value.bits[i] & (1 << j);
    }
  }
  for (j = 31; j >= 0; j--) {
    dst->bits[SIZE_BIG_DECIMAL - 1] |= value.bits[SIZE_DECIMAL - 1] & (1 << j);
  }
}

int convert_big_decimal_to_decimal(big_decimal value, s21_decimal *dst) {
  int error_convert = OK;
  nullify_decimal(dst);
  if (!check_overflow_big_decimal(value) || get_scale_big_decimal(value) > 28) {
    error_convert = ERROR_OVERFLOW;
  } else {
    for (int i = 0; i < 3; ++i) {
      for (int j = 31; j >= 0; --j) {
        dst->bits[i] = dst->bits[i] | (value.bits[i] & (1 << j));
      }
    }
    for (int j = 31; j >= 0; --j) {
      dst->bits[3] = dst->bits[3] | (value.bits[7] & (1 << j));
    }
  }
  return error_convert;
}

int s21_get_exponent(big_decimal dec) {
  return (int)((unsigned int)(dec.bits[7] & ~(1 << 31)) >> 16);
}

void s21_set_exponent(big_decimal *dec, int value) {
  dec->bits[7] &= ~(255 << 16);
  dec->bits[7] |= value << 16;
}

void bitwise_addition(big_decimal value_1, big_decimal value_2,
                      big_decimal *result) {
  unsigned memo = 0;
  for (int i = 0; i < 32 * 7 - 1; ++i) {
    unsigned result_bit = get_bit_big_decimal(value_1, i) +
                          get_bit_big_decimal(value_2, i) + memo;
    memo = result_bit / 2;
    result_bit %= 2;
    set_bit_big_decimal(result, i, result_bit);
  }
}

// errors

int check_overflow_big_decimal(big_decimal value) {
  int i;
  int check_overflow = 1;
  for (i = 3; i <= SIZE_BIG_DECIMAL_MANTISSA && check_overflow != 0; i++) {
    if (value.bits[i] != 0) {
      check_overflow = 0;
    }
  }
  return check_overflow;
}

int check_decimal(s21_decimal value) {
  int error = OK;
  if ((value.bits[3] &= SCALE_ERROR_MASK) != 0) error = ERROR_OVERFLOW;
  return error;
}