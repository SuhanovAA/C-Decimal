#include "s21_decimal.h"

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
  int error_convert = 1;
  if (check_overflow_big_decimal(value) != 1) {
    error_convert = 0;
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