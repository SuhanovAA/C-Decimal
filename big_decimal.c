#include "s21_decimal.h"

int bd_is_greater(big_decimal value_1, big_decimal value_2) {
  int comp = 0;
  for (int i = 223; i >= 0 && comp == 0; i--) {
    comp = bd_get_bit(value_1, i) - bd_get_bit(value_2, i);
  }
  return comp;
}

int bd_check_equal_bits(big_decimal value_1, big_decimal value_2) {
  int result = 0;
  for (int i = 223; i >= 0 && !result; i--) {
    result = bd_get_bit(value_1, i) - bd_get_bit(value_2, i);
  }
  return result;
}

int bd_bits_is_equal_zero(big_decimal value) {
  int result = 1;
  for (int i = 0; i < 224 && result == 1; i++) {
    if (!bd_get_bit(value, i)) {
      result = 0;
    }
  }
  return result;
}

void bd_normalization(big_decimal *dst, int diff) {
  int scale = bd_get_scale(*dst);
  for (int i = 0; i < diff; i++) {
    big_decimal temp_1 = *dst;
    big_decimal temp_2 = *dst;
    bd_shift_left(&temp_1, 1);
    bd_shift_left(&temp_2, 3);
    bd_summ(temp_1, temp_2, dst);
  }
  bd_set_scale(dst, scale + diff);
}

void bd_shift_left(big_decimal *value, int shift) {
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

void bd_summ(big_decimal value_1, big_decimal value_2, big_decimal *result) {
  int memory = 0;
  unsigned tmp = 0;
  for (int i = 0; i < 224; i++) {
    tmp = bd_get_bit(value_1, i) + bd_get_bit(value_2, i) + memory;
    memory = tmp / 2;
    tmp %= 2;
    bd_set_bit(result, i, tmp);
  }
}

void bd_diff(big_decimal value_1, big_decimal value_2, big_decimal *result) {
  int memory = 0;
  int tmp = 0;
  for (int i = 0; i < 224; i++) {
    tmp = bd_get_bit(value_1, i) - bd_get_bit(value_2, i) - memory;
    memory = tmp < 0 ? 1 : 0;
    tmp %= 2;
    bd_set_bit(result, i, tmp);
  }
}

void bd_nullify_mantissa(big_decimal *dst) {
  int i;
  for (i = 0; i <= 6; i++) {
    dst->bits[i] = 0;
  }
}

int bd_check_zero(big_decimal value) {
  int i;
  int check_zero = 1;
  for (i = 0; i <= 6 && check_zero != 0; i++) {
    if (value.bits[i] != 0) {
      check_zero = 0;
    }
  }
  return check_zero;
}

int bd_get_bit(big_decimal value, int bit_index) {
  unsigned int result = 0, bits_index = 0, flag = 0;
  const unsigned int step = 32;
  int i = 32;
  for (i = step; bits_index <= 7 && flag != 1; i += step, bits_index++) {
    if (i > bit_index) {
      result = value.bits[bits_index] & 1 << bit_index;
      flag = 1;
    }
  }
  return (int)result ? 1 : 0;
}

void bd_set_bit(big_decimal *dst, int bit_index, int bit_value) {
  unsigned int bits_index = 0, flag = 0;
  const unsigned int step = 32;
  int i = 32;
  for (i = step; bits_index <= 7 && flag != 1; i += step, bits_index++) {
    if (i > bit_index) {
      dst->bits[bits_index] = (dst->bits[bits_index] & ~(1 << bit_index)) |
                              (bit_value << bit_index);
      flag = 1;
    }
  }
}

int bd_get_sign(big_decimal value) {
  int value_sign;
  value_sign = bd_get_bit(value, 255);
  return value_sign;
}

int bd_get_scale(big_decimal value) {
  return (int)((unsigned int)(value.bits[7] & ~(1 << 31)) >> 16);
}

void bd_set_scale(big_decimal *value, int scale) {
  value->bits[7] &= ~(255 << 16);
  value->bits[7] |= scale << 16;
}

void bd_invert_sign(big_decimal *dst) {
  bd_set_bit(dst, 255, ((bd_get_sign(*dst) + 1) % 2));
}

void convert_decimal_to_big_decimal(s21_decimal value, big_decimal *dst) {
  bd_null(dst);
  big_decimal result;

  for (unsigned int i = 0U; i < 3U; i++) result.bits[i] = value.bits[i];
  for (unsigned int i = 3U; i < 7U; i++) result.bits[i] = 0U;
  result.bits[7U] = value.bits[3U];

  *dst = result;
}

big_decimal from_decimal_to_big_decimal(s21_decimal value) {
  big_decimal result;

  for (unsigned int i = 0U; i < 3U; i++) result.bits[i] = value.bits[i];
  for (unsigned int i = 3U; i < 7U; i++) result.bits[i] = 0U;
  result.bits[7U] = value.bits[3U];

  return result;
}

int convert_big_decimal_to_decimal(big_decimal value, s21_decimal *dst) {
  int error_convert = 0;
  decimal_null(dst);
  if (!bd_check_overflow(value) || bd_get_scale(value) > 28) {
    error_convert = 1;
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

int bd_get_exponent(big_decimal dec) {
  return (int)((unsigned int)(dec.bits[7] & ~(1 << 31)) >> 16);
}

void bd_set_exponent(big_decimal *dec, int value) {
  dec->bits[7] &= ~(255 << 16);
  dec->bits[7] |= value << 16;
}

void bd_bitwise_addition(big_decimal value_1, big_decimal value_2,
                         big_decimal *result) {
  unsigned memo = 0;
  for (int i = 0; i < 32 * 7 - 1; ++i) {
    unsigned result_bit =
        bd_get_bit(value_1, i) + bd_get_bit(value_2, i) + memo;
    memo = result_bit / 2;
    result_bit %= 2;
    bd_set_bit(result, i, result_bit);
  }
}

int bd_check_overflow(big_decimal value) {
  int i;
  int check_overflow = 1;
  for (i = 3; i <= 6 && check_overflow != 0; i++) {
    if (value.bits[i] != 0) {
      check_overflow = 0;
    }
  }
  return check_overflow;
}

void bd_null(big_decimal *dst) {
  for (unsigned int i = 0U; i < 8U; i++) dst->bits[i] = 0;
}