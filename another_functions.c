#include "s21_decimal.h"

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