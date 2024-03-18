#include "tests.h"

START_TEST(s21_fromint_test_1) {
  // src = -280899064
  int src = -280899064;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -280899064
  s21_decimal standart = {{280899064, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_2) {
  // src = -1952047300
  int src = -1952047300;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1952047300
  s21_decimal standart = {{1952047300, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_3) {
  // src = -732112063
  int src = -732112063;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -732112063
  s21_decimal standart = {{732112063, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_4) {
  // src = -545169452
  int src = -545169452;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -545169452
  s21_decimal standart = {{545169452, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_5) {
  // src = 1920262151
  int src = 1920262151;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1920262151
  s21_decimal standart = {{1920262151, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_6) {
  // src = 314973312
  int src = 314973312;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 314973312
  s21_decimal standart = {{314973312, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_7) {
  // src = 929046711
  int src = 929046711;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 929046711
  s21_decimal standart = {{929046711, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_8) {
  // src = -2013022653
  int src = -2013022653;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2013022653
  s21_decimal standart = {{2013022653, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_9) {
  // src = 616984439
  int src = 616984439;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 616984439
  s21_decimal standart = {{616984439, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_10) {
  // src = 2044822351
  int src = 2044822351;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2044822351
  s21_decimal standart = {{2044822351, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_11) {
  // src = 771452340
  int src = 771452340;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 771452340
  s21_decimal standart = {{771452340, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_12) {
  // src = 1792139639
  int src = 1792139639;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1792139639
  s21_decimal standart = {{1792139639, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_13) {
  // src = -339370928
  int src = -339370928;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -339370928
  s21_decimal standart = {{339370928, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_14) {
  // src = -1133490373
  int src = -1133490373;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1133490373
  s21_decimal standart = {{1133490373, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_15) {
  // src = 1972174482
  int src = 1972174482;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1972174482
  s21_decimal standart = {{1972174482, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_16) {
  // src = 910127438
  int src = 910127438;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 910127438
  s21_decimal standart = {{910127438, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_17) {
  // src = -124171003
  int src = -124171003;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -124171003
  s21_decimal standart = {{124171003, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_18) {
  // src = 858299620
  int src = 858299620;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 858299620
  s21_decimal standart = {{858299620, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_19) {
  // src = -1801084459
  int src = -1801084459;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1801084459
  s21_decimal standart = {{1801084459, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_20) {
  // src = 1194587620
  int src = 1194587620;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1194587620
  s21_decimal standart = {{1194587620, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_21) {
  // src = -76295846
  int src = -76295846;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -76295846
  s21_decimal standart = {{76295846, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_22) {
  // src = 809704888
  int src = 809704888;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 809704888
  s21_decimal standart = {{809704888, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_23) {
  // src = -549983192
  int src = -549983192;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -549983192
  s21_decimal standart = {{549983192, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_24) {
  // src = -392106712
  int src = -392106712;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -392106712
  s21_decimal standart = {{392106712, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_25) {
  // src = 2031417561
  int src = 2031417561;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2031417561
  s21_decimal standart = {{2031417561, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_26) {
  // src = 1231697302
  int src = 1231697302;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1231697302
  s21_decimal standart = {{1231697302, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_27) {
  // src = -1276713043
  int src = -1276713043;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1276713043
  s21_decimal standart = {{1276713043, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_28) {
  // src = -69313859
  int src = -69313859;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -69313859
  s21_decimal standart = {{69313859, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_29) {
  // src = -1465203853
  int src = -1465203853;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1465203853
  s21_decimal standart = {{1465203853, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_30) {
  // src = 295348376
  int src = 295348376;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 295348376
  s21_decimal standart = {{295348376, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_31) {
  // src = -854049914
  int src = -854049914;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -854049914
  s21_decimal standart = {{854049914, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_32) {
  // src = -69468124
  int src = -69468124;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -69468124
  s21_decimal standart = {{69468124, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_33) {
  // src = -1256041048
  int src = -1256041048;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1256041048
  s21_decimal standart = {{1256041048, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_34) {
  // src = 186824349
  int src = 186824349;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 186824349
  s21_decimal standart = {{186824349, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_35) {
  // src = 288313787
  int src = 288313787;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 288313787
  s21_decimal standart = {{288313787, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_36) {
  // src = -40497401
  int src = -40497401;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -40497401
  s21_decimal standart = {{40497401, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_37) {
  // src = 654055715
  int src = 654055715;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 654055715
  s21_decimal standart = {{654055715, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_38) {
  // src = 488924078
  int src = 488924078;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 488924078
  s21_decimal standart = {{488924078, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_39) {
  // src = 1998789157
  int src = 1998789157;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1998789157
  s21_decimal standart = {{1998789157, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_40) {
  // src = 1264524110
  int src = 1264524110;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1264524110
  s21_decimal standart = {{1264524110, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_41) {
  // src = -919024719
  int src = -919024719;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -919024719
  s21_decimal standart = {{919024719, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_42) {
  // src = 1154745867
  int src = 1154745867;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1154745867
  s21_decimal standart = {{1154745867, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_43) {
  // src = -1736657890
  int src = -1736657890;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1736657890
  s21_decimal standart = {{1736657890, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_44) {
  // src = 162164652
  int src = 162164652;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 162164652
  s21_decimal standart = {{162164652, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_45) {
  // src = -1112815079
  int src = -1112815079;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1112815079
  s21_decimal standart = {{1112815079, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_46) {
  // src = 228699833
  int src = 228699833;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 228699833
  s21_decimal standart = {{228699833, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_47) {
  // src = -675208259
  int src = -675208259;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -675208259
  s21_decimal standart = {{675208259, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_48) {
  // src = 328270811
  int src = 328270811;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 328270811
  s21_decimal standart = {{328270811, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_49) {
  // src = 1091540292
  int src = 1091540292;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1091540292
  s21_decimal standart = {{1091540292, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_50) {
  // src = -1697537989
  int src = -1697537989;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1697537989
  s21_decimal standart = {{1697537989, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_51) {
  // src = 1678679997
  int src = 1678679997;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1678679997
  s21_decimal standart = {{1678679997, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_52) {
  // src = 383686627
  int src = 383686627;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 383686627
  s21_decimal standart = {{383686627, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_53) {
  // src = 1570892167
  int src = 1570892167;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1570892167
  s21_decimal standart = {{1570892167, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_54) {
  // src = -46908084
  int src = -46908084;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -46908084
  s21_decimal standart = {{46908084, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_55) {
  // src = -119986417
  int src = -119986417;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -119986417
  s21_decimal standart = {{119986417, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_56) {
  // src = 1275410348
  int src = 1275410348;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1275410348
  s21_decimal standart = {{1275410348, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_57) {
  // src = 1911972473
  int src = 1911972473;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1911972473
  s21_decimal standart = {{1911972473, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_58) {
  // src = -1687565220
  int src = -1687565220;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1687565220
  s21_decimal standart = {{1687565220, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_59) {
  // src = 257374090
  int src = 257374090;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 257374090
  s21_decimal standart = {{257374090, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_60) {
  // src = 1172555807
  int src = 1172555807;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1172555807
  s21_decimal standart = {{1172555807, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_61) {
  // src = 371516415
  int src = 371516415;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 371516415
  s21_decimal standart = {{371516415, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_62) {
  // src = 2096326655
  int src = 2096326655;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2096326655
  s21_decimal standart = {{2096326655, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_63) {
  // src = 1251050128
  int src = 1251050128;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1251050128
  s21_decimal standart = {{1251050128, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_64) {
  // src = -370274771
  int src = -370274771;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -370274771
  s21_decimal standart = {{370274771, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_65) {
  // src = 606918010
  int src = 606918010;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 606918010
  s21_decimal standart = {{606918010, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_66) {
  // src = 2108739450
  int src = 2108739450;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2108739450
  s21_decimal standart = {{2108739450, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_67) {
  // src = -1708749011
  int src = -1708749011;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1708749011
  s21_decimal standart = {{1708749011, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_68) {
  // src = 548213536
  int src = 548213536;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 548213536
  s21_decimal standart = {{548213536, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_69) {
  // src = 454282174
  int src = 454282174;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 454282174
  s21_decimal standart = {{454282174, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_70) {
  // src = 381274563
  int src = 381274563;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 381274563
  s21_decimal standart = {{381274563, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_71) {
  // src = 1827872211
  int src = 1827872211;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1827872211
  s21_decimal standart = {{1827872211, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_72) {
  // src = -141144516
  int src = -141144516;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -141144516
  s21_decimal standart = {{141144516, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_73) {
  // src = -1242082565
  int src = -1242082565;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1242082565
  s21_decimal standart = {{1242082565, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_74) {
  // src = 1602154219
  int src = 1602154219;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1602154219
  s21_decimal standart = {{1602154219, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_75) {
  // src = -840711920
  int src = -840711920;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -840711920
  s21_decimal standart = {{840711920, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_76) {
  // src = -782169011
  int src = -782169011;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -782169011
  s21_decimal standart = {{782169011, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_77) {
  // src = -356558818
  int src = -356558818;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -356558818
  s21_decimal standart = {{356558818, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_78) {
  // src = -423965168
  int src = -423965168;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -423965168
  s21_decimal standart = {{423965168, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_79) {
  // src = 1969187559
  int src = 1969187559;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1969187559
  s21_decimal standart = {{1969187559, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_80) {
  // src = -1540558327
  int src = -1540558327;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1540558327
  s21_decimal standart = {{1540558327, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_81) {
  // src = 1639496806
  int src = 1639496806;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1639496806
  s21_decimal standart = {{1639496806, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_82) {
  // src = -1197057511
  int src = -1197057511;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1197057511
  s21_decimal standart = {{1197057511, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_83) {
  // src = 262465674
  int src = 262465674;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 262465674
  s21_decimal standart = {{262465674, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_84) {
  // src = 305416839
  int src = 305416839;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 305416839
  s21_decimal standart = {{305416839, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_85) {
  // src = 1141611423
  int src = 1141611423;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1141611423
  s21_decimal standart = {{1141611423, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_86) {
  // src = -1615095020
  int src = -1615095020;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1615095020
  s21_decimal standart = {{1615095020, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_87) {
  // src = 30173139
  int src = 30173139;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 30173139
  s21_decimal standart = {{30173139, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_88) {
  // src = 230997885
  int src = 230997885;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 230997885
  s21_decimal standart = {{230997885, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_89) {
  // src = -1495020029
  int src = -1495020029;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1495020029
  s21_decimal standart = {{1495020029, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_90) {
  // src = -1837092739
  int src = -1837092739;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1837092739
  s21_decimal standart = {{1837092739, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_91) {
  // src = 1863641329
  int src = 1863641329;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1863641329
  s21_decimal standart = {{1863641329, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_92) {
  // src = -949119427
  int src = -949119427;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -949119427
  s21_decimal standart = {{949119427, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_93) {
  // src = -1703916177
  int src = -1703916177;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1703916177
  s21_decimal standart = {{1703916177, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_94) {
  // src = 23082529
  int src = 23082529;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 23082529
  s21_decimal standart = {{23082529, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_95) {
  // src = 669657437
  int src = 669657437;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 669657437
  s21_decimal standart = {{669657437, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_96) {
  // src = 931622735
  int src = 931622735;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 931622735
  s21_decimal standart = {{931622735, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_97) {
  // src = -179000890
  int src = -179000890;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -179000890
  s21_decimal standart = {{179000890, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_98) {
  // src = -494331625
  int src = -494331625;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -494331625
  s21_decimal standart = {{494331625, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_99) {
  // src = 347215374
  int src = 347215374;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 347215374
  s21_decimal standart = {{347215374, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromint_test_100) {
  // src = 1641984041
  int src = 1641984041;
  s21_decimal res = {0};
  int code = s21_from_int_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1641984041
  s21_decimal standart = {{1641984041, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

//
//
//

int a, add, equal;
START_TEST(from_int_to_decimal_0) {
  s21_decimal val = {{0, 0, 0, 0}};
  int res = 0;
  int tmp = -2147483648;
  s21_from_int_to_decimal(tmp, &val);
  s21_from_decimal_to_int(val, &res);
  ck_assert_int_eq(res, tmp);
}
END_TEST

static int value_int_to_dec[] = {
    1,            //                             1
    2,            //                             2
    10000,        //                         10000
    2147483647,   //                    2147483647
    -2147483648,  //                   -2147483648
    0,            //                             0
    222222222,    //                     222222222
    1000000000,   //                    1000000000
    -1000000000,  //                   -1000000000
};

static s21_decimal expected_result_int_to_dec[] = {
    {{0x00000001, 0x00000000, 0x00000000,
      0x00000000}},  //                              1
    {{0x00000002, 0x00000000, 0x00000000,
      0x00000000}},  //                              2
    {{0x00002710, 0x00000000, 0x00000000,
      0x00000000}},  //                          10000
    {{0x7FFFFFFF, 0x00000000, 0x00000000,
      0x00000000}},  //                     2147483647
    {{0x80000000, 0x00000000, 0x00000000,
      0x80000000}},  //                    -2147483648
    {{0x00000000, 0x00000000, 0x00000000,
      0x00000000}},  //                              0
    {{0x0D3ED78E, 0x00000000, 0x00000000,
      0x00000000}},  //                      222222222
    {{0x3B9ACA00, 0x00000000, 0x00000000,
      0x00000000}},  //                     1000000000
    {{0x3B9ACA00, 0x00000000, 0x00000000,
      0x80000000}},  //                    -1000000000
};

START_TEST(test_int_to_dec) {
  for (size_t i = 0; i < sizeof(value_int_to_dec) / sizeof(int); ++i) {
    s21_decimal tmp;
    int ret = s21_from_int_to_decimal(value_int_to_dec[i], &tmp);
    int result_equal = s21_is_equal(tmp, expected_result_int_to_dec[i]);
    ck_assert_int_eq(result_equal, 1);
    ck_assert_int_eq(ret, 0);
  }
}
END_TEST

START_TEST(from_int_to_decimal_1) {
  s21_decimal val = {{0, 0, 0, 0}};
  int res = 0;
  int tmp = -123456789;
  s21_from_int_to_decimal(tmp, &val);
  s21_from_decimal_to_int(val, &res);
  ck_assert_int_eq(res, tmp);
}
END_TEST

START_TEST(from_int_to_decimal_2) {
  s21_decimal val = {{0, 0, 0, 0}};
  int res = 0;
  int tmp = 2147483647;
  s21_from_int_to_decimal(tmp, &val);
  s21_from_decimal_to_int(val, &res);
  ck_assert_int_eq(res, tmp);
}
END_TEST

START_TEST(s21_from_int_to_decimal_1) {
  s21_decimal val = {0};

  s21_from_int_to_decimal(0, &val);
  ck_assert_int_eq(val.bits[0], 0);
  ck_assert_int_eq(val.bits[1], 0);
  ck_assert_int_eq(val.bits[2], 0);
  ck_assert_int_eq(val.bits[3], 0);

  decimal_nullify(&val);
  s21_from_int_to_decimal(-128, &val);
  ck_assert_int_eq(val.bits[0], 128);
  ck_assert_int_eq(val.bits[1], 0);
  ck_assert_int_eq(val.bits[2], 0);
  ck_assert_int_eq(val.bits[3], -2147483648);

  decimal_nullify(&val);
  s21_from_int_to_decimal(127, &val);
  ck_assert_int_eq(val.bits[0], 127);
  ck_assert_int_eq(val.bits[1], 0);
  ck_assert_int_eq(val.bits[2], 0);
  ck_assert_int_eq(val.bits[3], 0);

  decimal_nullify(&val);
  s21_from_int_to_decimal(-2147483648, &val);
  ck_assert_int_eq(val.bits[0], -2147483648);
  ck_assert_int_eq(val.bits[1], 0);
  ck_assert_int_eq(val.bits[2], 0);
  ck_assert_int_eq(val.bits[3], -2147483648);

  decimal_nullify(&val);
  s21_from_int_to_decimal(2147483647, &val);
  ck_assert_int_eq(val.bits[0], 2147483647);
  ck_assert_int_eq(val.bits[1], 0);
  ck_assert_int_eq(val.bits[2], 0);
  ck_assert_int_eq(val.bits[3], 0);
}
END_TEST

START_TEST(s21_test_from_int_to_decimal_0) {
  a = 100;
  s21_decimal b = {{0, 0, 0, 0}};
  s21_decimal *ptr_b = &b;

  add = s21_from_int_to_decimal(a, ptr_b);  // a записываем в b
  s21_decimal etalon = {{100, 0, 0, 0}};
  ck_assert_int_eq(add, 0);
  // выходное значение s21_from_int_to_decimal - 0 TRUE и 1 FALSE
  // s21_is_equal Возвращаемое значение: 0 - FALSE 1 - TRUE
  equal = s21_is_equal(b, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(s21_test_from_int_to_decimal_1) {
  a = 100;
  s21_decimal b = {{0, 0, 0, 0}};
  s21_decimal *ptr_b = &b;

  add = s21_from_int_to_decimal(a, ptr_b);  // a записываем в b
  s21_decimal etalon = {{1000, 0, 0, 0}};
  ck_assert_int_eq(add, 0);
  // выходное значение s21_from_int_to_decimal -
  // 0 TRUE и 1 FALSE
  // s21_is_equal Возвращаемое значение: 0 - FALSE 1 - TRUE
  equal = s21_is_equal(b, etalon);
  ck_assert_int_eq(equal, 0);
}
END_TEST

START_TEST(s21_test_from_int_to_decimal_2) {
  a = INT_MAX;
  s21_decimal b = {{0, 0, 0, 0}};
  s21_decimal *ptr_b = &b;

  add = s21_from_int_to_decimal(a, ptr_b);  // a записываем в b
  s21_decimal etalon = {{INT_MAX, 0, 0, 0}};
  ck_assert_int_eq(add, 0);  // выходное значение s21_from_int_to_decimal -
                             // 0 TRUE и 1 FALSE
  // s21_is_equal Возвращаемое значение: 0 - FALSE 1 - TRUE
  equal = s21_is_equal(b, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(s21_test_from_int_to_decimal_3) {
  a = -INT_MAX;
  s21_decimal b = {{0, 0, 0, 0}};
  s21_decimal *ptr_b = &b;

  add = s21_from_int_to_decimal(a, ptr_b);  // a записываем в b
  s21_decimal etalon = {{INT_MAX, 0, 0, 0}};
  ck_assert_int_eq(add, 0);  // выходное значение s21_from_int_to_decimal -
                             // 0 TRUE и 1 FALSE
  // s21_is_equal Возвращаемое значение: 0 - FALSE 1 - TRUE
  equal = s21_is_equal(b, etalon);
  ck_assert_int_eq(equal, 0);
}
END_TEST

START_TEST(s21_test_from_int_to_decimal_4) {
  a = -INT_MAX;
  s21_decimal b = {{0, 0, 0, 0}};
  s21_decimal *ptr_b = &b;

  add = s21_from_int_to_decimal(a, ptr_b);  // a записываем в b
  s21_decimal etalon = {{INT_MAX, 0, 0, ~(INT_MAX)}};
  ck_assert_int_eq(add, 0);  // выходное значение s21_from_int_to_decimal -
                             // 0 TRUE и 1 FALSE
  // s21_is_equal Возвращаемое значение: 0 - FALSE 1 - TRUE
  equal = s21_is_equal(b, etalon);
  ck_assert_int_eq(equal, 1);
}
END_TEST

START_TEST(s21_test_from_int_to_decimal_5) {
  a = 0;  // ERROR of NAN
  s21_decimal b = {{0, 0, 0, 0}};
  s21_decimal *ptr_b = &b;

  add = s21_from_int_to_decimal(a, ptr_b);  // a записываем в b
  s21_decimal etalon = {{INT_MAX, 0, 0, ~(INT_MAX)}};
  ck_assert_int_eq(add, 0);  // выходное значение s21_from_int_to_decimal -
                             // 0 TRUE и 1 FALSE
  // s21_is_equal Возвращаемое значение: 0 - FALSE 1 - TRUE
  equal = s21_is_equal(b, etalon);
  ck_assert_int_eq(equal, 0);
}
END_TEST

START_TEST(s21_from_int_to_decimalTest1) {
  // 6412
  int src1 = 1;
  s21_decimal origin = {0}, result = {0};
  s21_decimal *res = &result;
  s21_from_int_to_decimal(src1, res);

  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_from_int_to_decimalTest2) {
  // 6428
  int src1 = -1;
  s21_decimal origin = {0}, result = {0};
  s21_decimal *res = &result;
  s21_from_int_to_decimal(src1, res);

  origin.bits[0] = 0b00000000000000000000000000000001;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_from_int_to_decimalTest3) {
  // 6444
  int src1 = 0;
  s21_decimal origin = {0}, result = {0};
  s21_decimal *res = &result;
  s21_from_int_to_decimal(src1, res);

  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_from_int_to_decimalTest4) {
  // 6460
  int src1 = 0;
  s21_decimal origin = {0}, result = {0};
  s21_decimal *res = &result;
  s21_from_int_to_decimal(src1, res);

  origin.bits[0] = 0b00000000000000000000000000000000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_from_int_to_decimalTest5) {
  // 6476
  int src1 = -987879878;
  s21_decimal origin = {0}, result = {0};
  s21_decimal *res = &result;
  s21_from_int_to_decimal(src1, res);

  origin.bits[0] = 0b00111010111000011101100111000110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_from_int_to_decimalTest6) {
  // 6492
  int src1 = -2147483646;
  s21_decimal origin = {0}, result = {0};
  s21_decimal *res = &result;
  s21_from_int_to_decimal(src1, res);

  origin.bits[0] = 0b01111111111111111111111111111110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_from_int_to_decimalTest7) {
  // 6508
  int src1 = 2147483646;
  s21_decimal origin = {0}, result = {0};
  s21_decimal *res = &result;
  s21_from_int_to_decimal(src1, res);

  origin.bits[0] = 0b01111111111111111111111111111110;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_from_int_to_decimalTest8) {
  // 6524
  int src1 = 796132784;
  s21_decimal origin = {0}, result = {0};
  s21_decimal *res = &result;
  s21_from_int_to_decimal(src1, res);

  origin.bits[0] = 0b00101111011101000000010110110000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_from_int_to_decimalTest9) {
  // 6540
  int src1 = -12345677;
  s21_decimal origin = {0}, result = {0};
  s21_decimal *res = &result;
  s21_from_int_to_decimal(src1, res);
  origin.bits[0] = 0b00000000101111000110000101001101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

Suite *suite_from_int_to_decimal(void) {
  Suite *s = suite_create("\033[42m-=S21_DECIMAL_FROM_INT=-\033[0m");
  TCase *tc = tcase_create("case_fromint");

  tcase_add_test(tc, s21_fromint_test_1);
  tcase_add_test(tc, s21_fromint_test_2);
  tcase_add_test(tc, s21_fromint_test_3);
  tcase_add_test(tc, s21_fromint_test_4);
  tcase_add_test(tc, s21_fromint_test_5);
  tcase_add_test(tc, s21_fromint_test_6);
  tcase_add_test(tc, s21_fromint_test_7);
  tcase_add_test(tc, s21_fromint_test_8);
  tcase_add_test(tc, s21_fromint_test_9);
  tcase_add_test(tc, s21_fromint_test_10);
  tcase_add_test(tc, s21_fromint_test_11);
  tcase_add_test(tc, s21_fromint_test_12);
  tcase_add_test(tc, s21_fromint_test_13);
  tcase_add_test(tc, s21_fromint_test_14);
  tcase_add_test(tc, s21_fromint_test_15);
  tcase_add_test(tc, s21_fromint_test_16);
  tcase_add_test(tc, s21_fromint_test_17);
  tcase_add_test(tc, s21_fromint_test_18);
  tcase_add_test(tc, s21_fromint_test_19);
  tcase_add_test(tc, s21_fromint_test_20);
  tcase_add_test(tc, s21_fromint_test_21);
  tcase_add_test(tc, s21_fromint_test_22);
  tcase_add_test(tc, s21_fromint_test_23);
  tcase_add_test(tc, s21_fromint_test_24);
  tcase_add_test(tc, s21_fromint_test_25);
  tcase_add_test(tc, s21_fromint_test_26);
  tcase_add_test(tc, s21_fromint_test_27);
  tcase_add_test(tc, s21_fromint_test_28);
  tcase_add_test(tc, s21_fromint_test_29);
  tcase_add_test(tc, s21_fromint_test_30);
  tcase_add_test(tc, s21_fromint_test_31);
  tcase_add_test(tc, s21_fromint_test_32);
  tcase_add_test(tc, s21_fromint_test_33);
  tcase_add_test(tc, s21_fromint_test_34);
  tcase_add_test(tc, s21_fromint_test_35);
  tcase_add_test(tc, s21_fromint_test_36);
  tcase_add_test(tc, s21_fromint_test_37);
  tcase_add_test(tc, s21_fromint_test_38);
  tcase_add_test(tc, s21_fromint_test_39);
  tcase_add_test(tc, s21_fromint_test_40);
  tcase_add_test(tc, s21_fromint_test_41);
  tcase_add_test(tc, s21_fromint_test_42);
  tcase_add_test(tc, s21_fromint_test_43);
  tcase_add_test(tc, s21_fromint_test_44);
  tcase_add_test(tc, s21_fromint_test_45);
  tcase_add_test(tc, s21_fromint_test_46);
  tcase_add_test(tc, s21_fromint_test_47);
  tcase_add_test(tc, s21_fromint_test_48);
  tcase_add_test(tc, s21_fromint_test_49);
  tcase_add_test(tc, s21_fromint_test_50);
  tcase_add_test(tc, s21_fromint_test_51);
  tcase_add_test(tc, s21_fromint_test_52);
  tcase_add_test(tc, s21_fromint_test_53);
  tcase_add_test(tc, s21_fromint_test_54);
  tcase_add_test(tc, s21_fromint_test_55);
  tcase_add_test(tc, s21_fromint_test_56);
  tcase_add_test(tc, s21_fromint_test_57);
  tcase_add_test(tc, s21_fromint_test_58);
  tcase_add_test(tc, s21_fromint_test_59);
  tcase_add_test(tc, s21_fromint_test_60);
  tcase_add_test(tc, s21_fromint_test_61);
  tcase_add_test(tc, s21_fromint_test_62);
  tcase_add_test(tc, s21_fromint_test_63);
  tcase_add_test(tc, s21_fromint_test_64);
  tcase_add_test(tc, s21_fromint_test_65);
  tcase_add_test(tc, s21_fromint_test_66);
  tcase_add_test(tc, s21_fromint_test_67);
  tcase_add_test(tc, s21_fromint_test_68);
  tcase_add_test(tc, s21_fromint_test_69);
  tcase_add_test(tc, s21_fromint_test_70);
  tcase_add_test(tc, s21_fromint_test_71);
  tcase_add_test(tc, s21_fromint_test_72);
  tcase_add_test(tc, s21_fromint_test_73);
  tcase_add_test(tc, s21_fromint_test_74);
  tcase_add_test(tc, s21_fromint_test_75);
  tcase_add_test(tc, s21_fromint_test_76);
  tcase_add_test(tc, s21_fromint_test_77);
  tcase_add_test(tc, s21_fromint_test_78);
  tcase_add_test(tc, s21_fromint_test_79);
  tcase_add_test(tc, s21_fromint_test_80);
  tcase_add_test(tc, s21_fromint_test_81);
  tcase_add_test(tc, s21_fromint_test_82);
  tcase_add_test(tc, s21_fromint_test_83);
  tcase_add_test(tc, s21_fromint_test_84);
  tcase_add_test(tc, s21_fromint_test_85);
  tcase_add_test(tc, s21_fromint_test_86);
  tcase_add_test(tc, s21_fromint_test_87);
  tcase_add_test(tc, s21_fromint_test_88);
  tcase_add_test(tc, s21_fromint_test_89);
  tcase_add_test(tc, s21_fromint_test_90);
  tcase_add_test(tc, s21_fromint_test_91);
  tcase_add_test(tc, s21_fromint_test_92);
  tcase_add_test(tc, s21_fromint_test_93);
  tcase_add_test(tc, s21_fromint_test_94);
  tcase_add_test(tc, s21_fromint_test_95);
  tcase_add_test(tc, s21_fromint_test_96);
  tcase_add_test(tc, s21_fromint_test_97);
  tcase_add_test(tc, s21_fromint_test_98);
  tcase_add_test(tc, s21_fromint_test_99);
  tcase_add_test(tc, s21_fromint_test_100);

  tcase_add_test(tc, from_int_to_decimal_0);
  tcase_add_test(tc, test_int_to_dec);
  tcase_add_test(tc, from_int_to_decimal_1);
  tcase_add_test(tc, from_int_to_decimal_2);
  tcase_add_test(tc, s21_from_int_to_decimal_1);
  tcase_add_test(tc, s21_test_from_int_to_decimal_0);
  tcase_add_test(tc, s21_test_from_int_to_decimal_1);
  tcase_add_test(tc, s21_test_from_int_to_decimal_2);
  tcase_add_test(tc, s21_test_from_int_to_decimal_3);
  tcase_add_test(tc, s21_test_from_int_to_decimal_4);
  tcase_add_test(tc, s21_test_from_int_to_decimal_5);
  tcase_add_test(tc, s21_from_int_to_decimalTest1);
  tcase_add_test(tc, s21_from_int_to_decimalTest2);
  tcase_add_test(tc, s21_from_int_to_decimalTest3);
  tcase_add_test(tc, s21_from_int_to_decimalTest4);
  tcase_add_test(tc, s21_from_int_to_decimalTest5);
  tcase_add_test(tc, s21_from_int_to_decimalTest6);
  tcase_add_test(tc, s21_from_int_to_decimalTest7);
  tcase_add_test(tc, s21_from_int_to_decimalTest8);
  tcase_add_test(tc, s21_from_int_to_decimalTest9);

  suite_add_tcase(s, tc);
  return s;
}