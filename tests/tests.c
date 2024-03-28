#include "tests.h"

void run_testcase(Suite* testcase) {
  printf("\n");
  SRunner* sr = srunner_create(testcase);

  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);

  srunner_free(sr);
}

int main(void) {
  run_testcase(suite_add());
  run_testcase(suite_sub());
  run_testcase(suite_mul());
  // run_testcase(suite_div());

  run_testcase(suite_from_int_to_decimal());
  run_testcase(suite_from_decimal_to_float());
  run_testcase(suite_from_decimal_to_int());
  run_testcase(suite_float_to_decimal());

  run_testcase(test_comp());

  run_testcase(suite_negate());
  run_testcase(suite_truncate());
  run_testcase(suite_round());
  run_testcase(suite_floor());

  return 0;
}