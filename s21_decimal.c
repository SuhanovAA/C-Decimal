#include "s21_decimal.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

int s21_is_greater(s21_decimal value_1, s21_decimal value_2) {
  return compare(value_1, value_2) == 1 ? 1 : 0;
}

int s21_is_greater_or_equal(s21_decimal value_1, s21_decimal value_2) {
  return compare(value_1, value_2) >= 0 ? 1 : 0;
}

int s21_is_less(s21_decimal value_1, s21_decimal value_2) {
  return compare(value_1, value_2) == -1 ? 1 : 0;
}

int s21_is_less_or_equal(s21_decimal value_1, s21_decimal value_2) {
  return compare(value_1, value_2) <= 0 ? 1 : 0;
}

int s21_is_equal(s21_decimal value_1, s21_decimal value_2) {
  return compare(value_1, value_2) ? 0 : 1;
}

int s21_is_not_equal(s21_decimal value_1, s21_decimal value_2) {
  return compare(value_1, value_2) ? 1 : 0;
}

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  int error = 0;
  decimal_null(dst);
  if ((fabs(src) < powl(10.0, -28.0)) || (fabs(src) >= powl(2.0, 96.0)))
    error = 1;
  else {
    int scale = 0;
    if (src < 0) {
      decimal_invert_sign(dst);
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

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  int error = decimal_check_scale_mask(src);
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

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  decimal_null(dst);
  dst->bits[0] = abs(src);
  if (src < 0) decimal_invert_sign(dst);
  return 0;
}

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

int s21_floor(s21_decimal value, s21_decimal *result) {
  int error = decimal_check_scale_mask(value);
  if (!error) {
    int scale = get_scale_decimal(value);
    if (!scale) {
      *result = value;
    } else {
      if (!get_sign_decimal(value)) {
        error = s21_truncate(value, result);
      } else {
        s21_decimal valueBuffer;
        s21_decimal one = {{1, 0, 0, 0}};
        decimal_null(&valueBuffer);
        error = s21_truncate(value, result);
        result->bits[3] = 0;
        decimal_binary_add(*result, one, &valueBuffer);
        *result = valueBuffer;
        result->bits[3] = (unsigned long)1 << 31;
      }
    }
  }

  return error;
}

// int s21_round(s21_decimal value, s21_decimal *result);

int s21_truncate(s21_decimal value, s21_decimal *result) {
  decimal_null(result);
  int scale = get_scale_decimal(value);
  while (scale > 0) {
    decimal_div_by_ten(&value);
    scale--;
  }
  set_scale_decimal(&value, 0);
  *result = value;
  return 0;
}

int s21_negate(s21_decimal value, s21_decimal *result) {
  decimal_null(result);
  int error = decimal_check_scale_mask(value);
  if (!error) {
    *result = value;
    decimal_invert_sign(result);
  }
  return error;
}

int compare(s21_decimal value_1, s21_decimal value_2) {
  int comp = 0;
  big_decimal bd_value_1, bd_value_2;
  convert_decimal_to_big_decimal(value_1, &bd_value_1);
  convert_decimal_to_big_decimal(value_2, &bd_value_2);

  int sign_1 = get_sign_decimal(value_1);
  int sign_2 = get_sign_decimal(value_2);

  if (!decimal_mantissa_equal_zero(value_1) ||
      !decimal_mantissa_equal_zero(value_2)) {
    if (!sign_1 && sign_2) {
      comp = 1;
    } else if (sign_1 && !sign_2) {
      comp = -1;
    } else {
      int scale_1 = get_scale_decimal(value_1);
      int scale_2 = get_scale_decimal(value_2);

      if (scale_1 > scale_2)
        bd_normalization(&bd_value_2, scale_1 - scale_2);
      else if (scale_1 < scale_2)
        bd_normalization(&bd_value_1, scale_2 - scale_1);

      comp = bd_is_greater(bd_value_1, bd_value_2);
      if (sign_1) comp *= -1;
    }
  }
  return comp;
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
  for (int i = step; bits_index <= SIZE_DECIMAL && flag != 1;
       i += step, bits_index++) {
    if (i > bit_index) {
      dst->bits[bits_index] = (dst->bits[bits_index] & ~(1 << bit_index)) |
                              (bit_value << bit_index);
      flag = 1;
    }
  }
}

int decimal_is_greater(s21_decimal value_1, s21_decimal value_2) {
  int result = 0;
  for (int i = 95; i >= 0; i--) {
    result = get_bit_decimal(value_1, i) - get_bit_decimal(value_2, i);
    if (result) break;
  }
  return result;
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

void decimal_summ(s21_decimal value_1, s21_decimal value_2,
                  s21_decimal *result) {
  decimal_null(result);
  int memory = 0;
  for (int i = 0; i < 96; i++) {
    unsigned tmp =
        get_bit_decimal(value_1, i) + get_bit_decimal(value_2, i) + memory;
    memory = tmp / 2;
    tmp %= 2;
    set_bit_decimal(result, i, tmp);
  }
}

int decimal_mantissa_equal_zero(s21_decimal value) {
  int check_zero = 1;
  for (int i = 0; i <= 2 && check_zero != 0; i++) {
    if (value.bits[i] != 0) {
      check_zero = 0;
    }
  }
  return check_zero;
}

int get_bit_decimal(s21_decimal value, int bit_index) {
  unsigned int result = 0, bits_index = 0, flag = 0;
  const unsigned int step = 32;
  for (int i = step; bits_index <= SIZE_DECIMAL && flag != 1;
       i += step, bits_index++) {
    if (i > bit_index) {
      result = value.bits[bits_index] & 1 << bit_index;
      flag = 1;
    }
  }
  return (int)result ? 1 : 0;
}

int get_sign_decimal(s21_decimal value) { return get_bit_decimal(value, 127); }

int get_scale_decimal(s21_decimal value) {
  return (int)((unsigned int)(value.bits[3] & ~(1 << 31)) >> 16);
}

void set_scale_decimal(s21_decimal *value, int scale) {
  value->bits[3] &= ~(127 << 16);
  value->bits[3] |= scale << 16;
}

void decimal_invert_sign(s21_decimal *dst) {
  set_bit_decimal(dst, 127, ((get_sign_decimal(*dst) + 1) % 2));
}

float float_generate_random(float a, float b) {
  return (float)(a + (float)rand() / RAND_MAX * (b - a));
}

int decimal_div_by_ten(s21_decimal *result) {
  int remainder_by_ten = 0;
  for (int i = 95; i >= 0; --i) {
    int get_bit = get_bit_decimal(*result, i);
    int result_by_ten = (get_bit + remainder_by_ten * 2) / 10;
    remainder_by_ten = (get_bit + remainder_by_ten * 2) % 10;
    set_bit_decimal(result, i, result_by_ten);
  }
  return remainder_by_ten;
}

int decimal_check_scale_mask(s21_decimal value) {
  return ((value.bits[3] &= SCALE_ERROR_MASK) != 0);
}

int decimal_three_add(s21_decimal value_1, s21_decimal value_2,
                      s21_decimal value_3, int index) {
  return (get_bit_decimal(value_1, index) + get_bit_decimal(value_2, index) +
          get_bit_decimal(value_3, index));
}

int decimal_binary_add(s21_decimal value_1, s21_decimal value_2,
                       s21_decimal *result) {
  int error =
      (decimal_check_scale_mask(value_1) || decimal_check_scale_mask(value_2));
  if (!error) {
    unsigned bit_value = 0;
    decimal_null(result);
    for (int i = 0; i < 95; i++) {
      bit_value = decimal_three_add(value_1, value_2, *result, i);
      set_bit_decimal(result, i + 1, bit_value / 2);
      set_bit_decimal(result, i, bit_value % 2);
    }
    bit_value = decimal_three_add(value_1, value_2, *result, 95);
    if (bit_value / 2) error = ERROR_OVERFLOW;
    set_bit_decimal(result, 95, bit_value % 2);
  }
  return error;
}

void decimal_null(s21_decimal *dst) {
  for (unsigned int i = 0U; i < 4U; i++) dst->bits[i] = 0;
}