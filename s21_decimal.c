#include "s21_decimal.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int is_sub = 0;
  int error = add_and_sub_core(value_1, value_2, result, is_sub);
  return error;
}

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int is_sub = 1;
  int error = add_and_sub_core(value_1, value_2, result, is_sub);
  return error;
}

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int error = 0;
  int sign_1 = decimal_get_sign(value_1);
  int sign_2 = decimal_get_sign(value_2);
  int scale_1 = decimal_get_scale(value_1);
  int scale_2 = decimal_get_scale(value_2);
  big_decimal big_result, big_value_1, big_value_2;

  bd_nullify(&big_result);
  convert_decimal_to_big_decimal(value_1, &big_value_1);
  convert_decimal_to_big_decimal(value_2, &big_value_2);
  big_result = bd_mul(big_value_1, big_value_2);
  bd_set_scale(&big_result, scale_1 + scale_2);

  if (sign_1 != sign_2) bd_invert_sign(&big_result);
  error = convert_big_decimal_to_decimal(big_result, result);
  return error;
}

// int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
//   int error = OK;
//   big_decimal big_value_1, big_value_2, big_result, reminder, temp_result;
//   convert_decimal_to_big_decimal(value_1, &big_value_1);
//   convert_decimal_to_big_decimal(value_2, &big_value_2);
//   int sign = s21_get_sign(big_value_1) ^ s21_get_sign(big_value_2);
//   decimal_nullify(result);
//   if (bd_equal_zero(big_value_2))
//     error = ERROR_DIVISION_BY_ZERO;
//   else {
//     bd_nullify(&big_result);
//     bd_nullify(&reminder);
//     bd_nullify(&temp_result);
//     s21_simple_div(big_value_1, big_value_2, &big_result, &reminder);
//     int exp_result =
//         s21_get_exponent(big_value_1) - s21_get_exponent(big_value_2);
//     if (exp_result > 0)
//       s21_set_exponent(&big_result, exp_result);
//     else
//       s21_set_exponent(&big_result, 0);
//     int reminder_zero = s21_is_equal_zero(reminder);
//     while (!reminder_zero &&
//            s21_simple_mult_by_10(&big_result) != ERROR_OVERFLOW) {
//       if (exp_result < 0)
//         exp_result++;
//       else
//         s21_set_exponent(&big_result, s21_get_exponent(big_result) + 1);
//       s21_set_exponent(&temp_result, s21_get_exponent(big_result));
//       s21_simple_mult_by_10(&reminder);
//       s21_simple_div(reminder, big_value_2, &temp_result, &reminder);
//       s21_simple_add(big_result, temp_result, &big_result);
//       s21_reset_to_zero_bd(&temp_result);
//       reminder_zero = s21_is_equal_zero(reminder);
//     }
//     while (exp_result < 0 && !(error = s21_simple_mult_by_10(&big_result))) {
//       exp_result++;
//     }
//     if (exp_result < 0) error = ERROR_OVERFLOW;

//     if (!error) {
//       s21_set_sign(&big_result, sign);
//       error = s21_convert_big_to_small(big_result, result);
//     }
//     if (error == ERROR_OVERFLOW && sign == NEG) error = ERROR_NEG_OVERFLOW;
//   }

//   return error;
// }

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  int error = 0, sign = 0;
  if (src < 0) {
    src = -src;
    sign = 1;
  }
  if ((src < 1E-28 && src != 0) || src != src || src > 2E96) {
    decimal_nullify(dst);
    error = 1;
  }
  if (!error) {
    convert_float_to_decimal(src, dst, &error, sign);
  }
  return error;
}

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  int error = decimal_check_scale_mask(src);
  if (!error) {
    int scale = decimal_get_scale(src);
    int sign = decimal_get_sign(src);
    double temp = (double)0.0;

    for (int i = 0; i < 96; i++)
      if (decimal_get_bit(src, i)) temp += pow(2, i);

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
  decimal_nullify(dst);
  dst->bits[0] = abs(src);
  if (src < 0) decimal_invert_sign(dst);
  return 0;
}
int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  int error = 0;
  double mantissa = 0;
  int scale = decimal_get_scale(src);

  for (int i = 95; i >= 0; --i) {
    mantissa = mantissa * 2 + decimal_get_bit(src, i);
  }

  mantissa /= (pow(10, scale));

  if (decimal_get_bit(src, 127)) {
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
    int scale = decimal_get_scale(value);
    if (!scale) {
      *result = value;
    } else {
      if (!decimal_get_sign(value)) {
        error = s21_truncate(value, result);
      } else {
        s21_decimal valueBuffer;
        s21_decimal one = {{1, 0, 0, 0}};
        decimal_nullify(&valueBuffer);
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

int s21_round(s21_decimal value, s21_decimal *result) {
  int error = decimal_check_scale_mask(value);
  if (!error) {
    int scale = decimal_get_scale(value);

    if (!scale) {
      *result = value;
    } else {
      unsigned sign = decimal_get_sign(value);
      big_decimal big_result;
      big_decimal big_ten_dec = from_int_to_big_decimal(10);
      big_decimal big_scale_ten_dec = big_ten_dec;

      for (int i = 0; i < scale - 1; i++) {
        big_scale_ten_dec = bd_mul(big_scale_ten_dec, big_ten_dec);
      }

      convert_decimal_to_big_decimal(value, &big_result);
      if (sign) bd_invert_sign(&big_result);

      big_decimal one;
      big_decimal remainder = big_result;
      bd_nullify(&one);
      one.bits[0] = 1;

      bd_div_ten(&big_result, &remainder, big_scale_ten_dec);
      s21_decimal rem_small, half;
      decimal_nullify(&half);
      half.bits[0] = 5;
      decimal_set_scale(&half, 1);
      convert_big_decimal_to_decimal(remainder, &rem_small);

      if (s21_is_greater_or_equal(rem_small, half)) {
        bd_summ(big_result, one, &big_result);
      }
      convert_big_decimal_to_decimal(big_result, result);
      if (sign) decimal_invert_sign(result);
    }
  }
  return error;
}

int s21_truncate(s21_decimal value, s21_decimal *result) {
  decimal_nullify(result);
  int scale = decimal_get_scale(value);
  while (scale > 0) {
    decimal_div_by_ten(&value);
    scale--;
  }
  decimal_set_scale(&value, 0);
  *result = value;
  return 0;
}

int s21_negate(s21_decimal value, s21_decimal *result) {
  decimal_nullify(result);
  int error = decimal_check_scale_mask(value);
  if (!error) {
    *result = value;
    decimal_invert_sign(result);
  }
  return error;
}

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

int compare(s21_decimal value_1, s21_decimal value_2) {
  int comp = 0;
  big_decimal bd_value_1, bd_value_2;
  convert_decimal_to_big_decimal(value_1, &bd_value_1);
  convert_decimal_to_big_decimal(value_2, &bd_value_2);

  int sign_1 = decimal_get_sign(value_1);
  int sign_2 = decimal_get_sign(value_2);

  if (!decimal_mantissa_equal_zero(value_1) ||
      !decimal_mantissa_equal_zero(value_2)) {
    if (!sign_1 && sign_2) {
      comp = 1;
    } else if (sign_1 && !sign_2) {
      comp = -1;
    } else {
      int scale_1 = decimal_get_scale(value_1);
      int scale_2 = decimal_get_scale(value_2);

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

void decimal_set_bit(s21_decimal *dst, int bit_index, int bit_value) {
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

int decimal_mantissa_equal_zero(s21_decimal value) {
  int check_zero = 1;
  for (int i = 0; i <= 2 && check_zero != 0; i++) {
    if (value.bits[i] != 0) {
      check_zero = 0;
    }
  }
  return check_zero;
}

int decimal_get_bit(s21_decimal value, int bit_index) {
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

int decimal_get_sign(s21_decimal value) { return decimal_get_bit(value, 127); }

int decimal_get_scale(s21_decimal value) {
  return (int)((unsigned int)(value.bits[3] & ~(1 << 31)) >> 16);
}

void decimal_set_scale(s21_decimal *value, int scale) {
  value->bits[3] &= ~(127 << 16);
  value->bits[3] |= scale << 16;
}

void decimal_invert_sign(s21_decimal *dst) {
  decimal_set_bit(dst, 127, ((decimal_get_sign(*dst) + 1) % 2));
}

int decimal_div_by_ten(s21_decimal *result) {
  int remainder_by_ten = 0;
  for (int i = 95; i >= 0; --i) {
    int get_bit = decimal_get_bit(*result, i);
    int result_by_ten = (get_bit + remainder_by_ten * 2) / 10;
    remainder_by_ten = (get_bit + remainder_by_ten * 2) % 10;
    decimal_set_bit(result, i, result_by_ten);
  }
  return remainder_by_ten;
}

int decimal_check_scale_mask(s21_decimal value) {
  return ((value.bits[3] &= SCALE_ERROR_MASK) != 0);
}

int decimal_three_add(s21_decimal value_1, s21_decimal value_2,
                      s21_decimal value_3, int index) {
  return (decimal_get_bit(value_1, index) + decimal_get_bit(value_2, index) +
          decimal_get_bit(value_3, index));
}

int decimal_binary_add(s21_decimal value_1, s21_decimal value_2,
                       s21_decimal *result) {
  int error =
      (decimal_check_scale_mask(value_1) || decimal_check_scale_mask(value_2));
  if (!error) {
    unsigned bit_value = 0;
    decimal_nullify(result);
    for (int i = 0; i < 95; i++) {
      bit_value = decimal_three_add(value_1, value_2, *result, i);
      decimal_set_bit(result, i + 1, bit_value / 2);
      decimal_set_bit(result, i, bit_value % 2);
    }
    bit_value = decimal_three_add(value_1, value_2, *result, 95);
    if (bit_value / 2) error = ERROR_OVERFLOW;
    decimal_set_bit(result, 95, bit_value % 2);
  }
  return error;
}

void decimal_nullify(s21_decimal *dst) {
  for (unsigned int i = 0U; i < 4U; i++) dst->bits[i] = 0;
}

int bd_is_greater(big_decimal value_1, big_decimal value_2) {
  int comp = 0;
  for (int i = 223; i >= 0 && comp == 0; i--) {
    comp = bd_get_bit(value_1, i) - bd_get_bit(value_2, i);
  }
  return comp;
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

void bd_nullify(big_decimal *dst) {
  for (unsigned int i = 0U; i < 8U; i++) dst->bits[i] = 0;
}

int bd_get_scale(big_decimal value) {
  return (int)((unsigned int)(value.bits[7] & ~(1 << 31)) >> 16);
}

void bd_set_scale(big_decimal *value, int scale) {
  value->bits[7] &= ~(255 << 16);
  value->bits[7] |= scale << 16;
}

void convert_decimal_to_big_decimal(s21_decimal value, big_decimal *dst) {
  bd_nullify(dst);
  big_decimal result;

  for (unsigned int i = 0U; i < 3U; i++) result.bits[i] = value.bits[i];
  for (unsigned int i = 3U; i < 7U; i++) result.bits[i] = 0U;
  result.bits[7U] = value.bits[3U];

  *dst = result;
}

int bd_get_sign(big_decimal value) {
  return bd_get_bit(value, SIZE_BIG_DECIMAL * 32 - 1);
}

void bd_invert_sign(big_decimal *dst) {
  int sign = bd_get_sign(*dst);
  bd_set_bit(dst, 255, sign ? SIGN_POS : SIGN_NEG);
}

int bd_mantissa_is_not_null(big_decimal value) {
  int big = 0;
  for (int i = 3; i < SIZE_BIG_DECIMAL - 1 && !big; i++)
    if (value.bits[i] != 0) big = 1;
  return big;
}

int convert_big_decimal_to_decimal(big_decimal value, s21_decimal *result) {
  int error = 0;
  int sign = bd_get_sign(value);
  unsigned scale = bd_get_scale(value);
  big_decimal big_result = value;

  if (bd_mantissa_is_not_null(big_result)) {
    if (!scale) {
      error = sign ? 2 : 1;
    } else {
      s21_decimal ten_decimal;
      big_decimal ten_big_decimal;

      s21_from_int_to_decimal(10, &ten_decimal);
      convert_decimal_to_big_decimal(ten_decimal, &ten_big_decimal);

      while (bd_mantissa_is_not_null(big_result) && scale > 0) {
        big_decimal remainder = big_result;
        bd_div_ten(&big_result, &remainder, ten_big_decimal);
        bd_bank_round(&big_result, remainder);
        scale--;
      }

      if (bd_mantissa_is_not_null(big_result)) {
        error = sign ? 2 : 1;
      } else {
        bd_set_scale(&big_result, scale);
        if (sign) bd_invert_sign(&big_result);
      }
    }
  }
  if (!error) {
    for (int i = 0; i < 3; i++) result->bits[i] = big_result.bits[i];
    result->bits[3] = big_result.bits[SIZE_BIG_DECIMAL - 1];
  }
  return error;
}

void bd_shift_left(big_decimal *dst, int shift) {
  if (shift) {
    unsigned mem = 0;
    for (int i = 0; i < SIZE_BIG_DECIMAL - 1; i++) {
      unsigned tmp = dst->bits[i];
      dst->bits[i] <<= shift;
      dst->bits[i] |= mem;
      mem = tmp >> (32 - shift);
    }
  }
}

void bd_bank_round(big_decimal *value, big_decimal remainder) {
  if (remainder.bits[0] > 5) {
    value->bits[0] += 1;
  } else if (remainder.bits[0] == 5) {
    if (bd_get_bit(*value, 0)) value->bits[0] += 1;
  }
}

void bd_diff(big_decimal value_1, big_decimal value_2, big_decimal *result) {
  int memory = 0;
  for (int i = 0; i < (SIZE_BIG_DECIMAL - 1) * 32; i++) {
    int res = bd_get_bit(value_1, i) - bd_get_bit(value_2, i) - memory;
    memory = res < 0 ? 1 : 0;
    res %= 2;

    bd_set_bit(result, i, res);
  }
}

int add_and_sub_core(s21_decimal value_1, s21_decimal value_2,
                     s21_decimal *result, int is_sub) {
  int error = OK;
  int sign_1 = decimal_get_sign(value_1), sign_2 = decimal_get_sign(value_2);
  int scale_1 = decimal_get_scale(value_1),
      scale_2 = decimal_get_scale(value_2);
  big_decimal bd_result, bd_value_1, bd_value_2;

  convert_decimal_to_big_decimal(value_1, &bd_value_1);
  convert_decimal_to_big_decimal(value_2, &bd_value_2);
  bd_nullify(&bd_result);

  if (scale_1 > scale_2)
    bd_normalization(&bd_value_2, scale_1 - scale_2);
  else if (scale_1 != scale_2)
    bd_normalization(&bd_value_1, scale_2 - scale_1);

  if (sign_1) bd_invert_sign(&bd_value_1);
  if (sign_2) bd_invert_sign(&bd_value_2);

  if (abs(sign_1 - sign_2) == is_sub) {
    bd_summ(bd_value_1, bd_value_2, &bd_result);
    if (sign_1) bd_invert_sign(&bd_result);
  } else {
    if (!bd_is_greater(bd_value_1, bd_value_2)) {
      bd_nullify(&bd_result);
    } else {
      if (bd_is_greater(bd_value_1, bd_value_2) > 0) {
        bd_diff(bd_value_1, bd_value_2, &bd_result);
        if (sign_1) bd_invert_sign(&bd_result);
      } else {
        bd_diff(bd_value_2, bd_value_1, &bd_result);
        if (is_sub) bd_invert_sign(&bd_result);
        if (sign_2) bd_invert_sign(&bd_result);
      }
    }
  }
  bd_set_scale(&bd_result, scale_1 > scale_2 ? scale_1 : scale_2);
  error = convert_big_decimal_to_decimal(bd_result, result);
  return error;
}

big_decimal bd_mul(big_decimal big_val_1, big_decimal big_val_2) {
  big_decimal tmp_res;
  big_decimal result;
  bd_nullify(&result);

  for (int i = 0; i < (SIZE_BIG_DECIMAL - 1) * 32; i++) {
    big_decimal buffer = result;
    for (int j = 0; j < (SIZE_BIG_DECIMAL - 1) * 32; j++) {
      int res_bit = bd_get_bit(big_val_1, i) * bd_get_bit(big_val_2, j);
      bd_set_bit(&tmp_res, j, res_bit);
    }
    for (int k = 0; k < i; k++) bd_shift_left(&tmp_res, 1);
    bd_summ(buffer, tmp_res, &result);
  }
  return result;
}

void bd_res_and_remainder(big_decimal *big_result, big_decimal delitel,
                          big_decimal *remainder) {
  big_decimal temp = delitel;
  big_decimal temp_for_compare = delitel;
  int count = -1;

  while (bd_is_greater(*remainder, temp) >= 0) {
    bd_shift_left(&temp_for_compare, 1);
    count++;
    if (bd_is_greater(temp_for_compare, *remainder) >= 0) break;
    bd_shift_left(&temp, 1);
  }

  while (count + 1) {
    temp = delitel;
    for (int k = 0; k < count; k++) bd_shift_left(&temp, 1);

    if (bd_is_greater(temp, *remainder) > 0) {
      bd_shift_left(big_result, 1);
    } else {
      bd_diff(*remainder, temp, remainder);
      bd_shift_left(big_result, 1);
      bd_set_bit(big_result, 0, SIGN_NEG);
    }
    count--;
  }
}

void bd_div_ten(big_decimal *big_result, big_decimal *remainder,
                big_decimal big_ten_decimal) {
  bd_nullify(big_result);
  bd_res_and_remainder(big_result, big_ten_decimal, remainder);
}

big_decimal from_int_to_big_decimal(int src) {
  big_decimal dst;
  unsigned int sign = (src >= 0) ? 0 : 1;
  bd_nullify(&dst);
  dst.bits[0] = src;
  if (sign) bd_invert_sign(&dst);
  return dst;
}

void convert_float_to_decimal(float src, s21_decimal *dst, int *error,
                              int sign) {
  double mantissa;
  int exp;
  char float_str[50];
  sprintf(float_str, "%E", src);
  char *exp_str = strchr(float_str, 'E');
  exp_str += 1;
  sscanf(exp_str, "%d", &exp);
  float_str[8] = 0;
  sscanf(float_str, "%lf", &mantissa);
  if (exp > 28 || exp < -28) {
    *error = 1;
  } else {
    int counter = 0;
    double mantissa_temp = mantissa;
    for (int i = 0; i < 6; i++) {
      if (mantissa_temp != (int)mantissa_temp) counter++;
      mantissa_temp *= 10;
    }
    decimal_nullify(dst);
    dst->bits[0] = (int)(mantissa * pow(10, counter));
    decimal_set_scale(dst, counter);

    big_decimal big_dst;
    big_decimal ten_big_decimal = from_int_to_big_decimal(10);
    convert_decimal_to_big_decimal(*dst, &big_dst);
    for (int i = 0; i < exp; i++) {
      if (counter) {
        bd_set_scale(&big_dst, counter - 1);
        counter--;
      } else {
        big_dst = bd_mul(big_dst, ten_big_decimal);
      }
    }
    if (exp < 0) {
      unsigned scale = bd_get_scale(big_dst);
      bd_set_scale(&big_dst, scale - exp);
    }
    *error = convert_big_decimal_to_decimal(big_dst, dst);
    if (sign) decimal_invert_sign(dst);
    if (*error) *error = 1;
  }
}

int bd_equal_zero(big_decimal value) {
  int result = true;
  for (unsigned int i = SIZE_BIG_DECIMAL * 6 - 1; i >= 0 && !result; i--)
    if (bd_get_bit(value, i)) result = false;
  return result;
}