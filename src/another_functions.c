#include "s21_decimal.h"

// --- another functions --- /

int s21_floor(s21_decimal value, s21_decimal *result);
int s21_round(s21_decimal value, s21_decimal *result);
int s21_truncate(s21_decimal value, s21_decimal *result) {
  int error = OK;
  nullify_decimal(result);
  if (!get_scale_decimal(value)) {
    // если нет порядка -> просто скопировать
    copy_decimal(result, value);
  }
  return error;
}
int s21_negate(s21_decimal value, s21_decimal *result);