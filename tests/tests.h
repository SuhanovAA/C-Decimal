#ifndef TESTS_DECIMAL
#define TESTS_DECIMAL

#include <check.h>
#include <limits.h>

#include "../s21_decimal.h"

#define EXPONENT_PLUS_1 65536
#define EXPONENT_PLUS_2 196608
#define S21_MAX_UINT -1

Suite* suite_add(void);
Suite* suite_sub(void);
Suite* suite_mul(void);
// Suite* suite_div(void);

Suite* suite_from_int_to_decimal(void);
Suite* suite_from_decimal_to_float(void);
Suite* suite_from_decimal_to_int(void);
Suite* suite_float_to_decimal(void);

Suite* test_comp(void);

Suite* suite_negate(void);
Suite* suite_truncate(void);
Suite* suite_round(void);
Suite* suite_floor(void);

void run_testcase(Suite* testcase);

#endif