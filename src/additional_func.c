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

int decimal_is_equal_zero(s21_decimal value) {
  int result = 1;
  for (int i = 0; i < 96 && result == 1; i++) {
    if (!get_bit_decimal(value, i)) {
      result = 0;
    }
  }
  return result;
}

int big_decimal_is_equal_zero(big_decimal value) {
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

void big_decimal_summ(big_decimal value_1, big_decimal value_2,
                      big_decimal *result) {
  int memory = 0;
  unsigned tmp = 0;
  for (int i = 0; i < 224; i++) {
    tmp = get_bit_big_decimal(value_1, i) + get_bit_big_decimal(value_2, i) + memory;
    memory = tmp / 2;
    tmp %= 2;
    set_bit_big_decimal(result, i, tmp);
  }
}

void big_decimal_diff(big_decimal value_1, big_decimal value_2,
                      big_decimal *result) {
  int memory = 0;
  int tmp = 0;
  for (int i = 0; i < 224; i++) {
    tmp = get_bit_big_decimal(value_1, i) - get_bit_big_decimal(value_2, i) - memory;
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
  return (value.bits[SIZE_DECIMAL - 1] &= SCALE_BITS) >> 16;
}

int get_scale_big_decimal(big_decimal value) {
  return (value.bits[SIZE_BIG_DECIMAL - 1] &= SCALE_BITS) >> 16;
}

void set_scale_decimal(s21_decimal *value, int scale) {
  int sign = get_sign_decimal(*value);
  value->bits[3] = 0;
  value->bits[3] >>= 16;
  value->bits[3] |= scale;
  value->bits[3] <<= 16;
  if (sign) {
    invert_sign_decimal(value);
  }
}

void set_scale_big_decimal(big_decimal *value, int scale) {
  int sign = get_sign_big_decimal(*value);
  value->bits[3] = 0;
  value->bits[3] >>= 16;
  value->bits[3] |= scale;
  value->bits[3] <<= 16;
  if (sign) {
    invert_sign_big_decimal(value);
  }
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
  // convert mantissa
  for (i = 0; i <= SIZE_DECIMAL_MANTISSA; i++) {
    for (j = 31; j >= 0; j--) {
      dst->bits[i] |= value.bits[i] & (1 << j);
    }
  }
  // convert scale
  for (j = 31; j >= 0; j--) {
    dst->bits[SIZE_BIG_DECIMAL - 1] |= value.bits[SIZE_DECIMAL - 1] & (1 << j);
  }
}

int convert_big_decimal_to_decimal(big_decimal value, s21_decimal *dst) {
  int error_convert = OK;
  if (check_overflow_big_decimal(value) != OK) {
    error_convert = ERROR_OVERFLOW;
  } else {
    int i, j;
    nullify_decimal(dst);
    for (i = 0; i <= SIZE_DECIMAL_MANTISSA; i++) {
      for (j = 31; j >= 0; j--) {
        dst->bits[i] |= value.bits[i] & (1 << j);
      }
    }
    for (j = 31; j >= 0; j--) {
      dst->bits[3] |= value.bits[i] & (1 << j);
    }
  }
  return error_convert;
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