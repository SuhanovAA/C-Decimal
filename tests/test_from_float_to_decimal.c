#include "tests.h"

START_TEST(s21_fromfloat_test_1) {
  // src = 5,6604948E+32
  float src = 5.6604948E+32;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_2) {
  // src = 6555,5083
  float src = 6555.5083;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6555,508
  s21_decimal standart = {{6555508, 0, 0, 196608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

// START_TEST(s21_fromfloat_test_3) {
//   // src = 2,182854E-24
//   float src = 2.182854E-24;
//   s21_decimal res = {0};
//   int code = s21_from_float_to_decimal(src, &res);
//   ck_assert_int_eq(code, 0);
//   // standart = 0,0000000000000000000000021829
//   s21_decimal standart = {{21829, 0, 0, 1835008}};
//   ck_assert_int_eq(s21_is_equal(res, standart), 1);
// }
// END_TEST

START_TEST(s21_fromfloat_test_4) {
  // src = 1,226321E-09
  float src = 1.226321E-09;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,000000001226321
  s21_decimal standart = {{1226321, 0, 0, 983040}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_5) {
  // src = 1,226321E-09
  float src = 1.226321E-09;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,000000001226321
  s21_decimal standart = {{1226321, 0, 0, 983040}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_6) {
  // src = -1,46584995E+35
  float src = -1.46584995E+35;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_7) {
  // src = 5,2604112E+36
  float src = 5.2604112E+36;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_8) {
  // src = -1,46584995E+35
  float src = -1.46584995E+35;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_9) {
  // src = -1,46584995E+35
  float src = -1.46584995E+35;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_10) {
  // src = -1,46584995E+35
  float src = -1.46584995E+35;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_11) {
  // src = -3,0075832E-15
  float src = -3.0075832E-15;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,000000000000003007583
  s21_decimal standart = {{3007583, 0, 0, -2146107392}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_12) {
  // src = -3,0075832E-15
  float src = -3.0075832E-15;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,000000000000003007583
  s21_decimal standart = {{3007583, 0, 0, -2146107392}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

// START_TEST(s21_fromfloat_test_13) {
//   // src = -3,6229336E-24
//   float src = -3.6229336E-24;
//   s21_decimal res = {0};
//   int code = s21_from_float_to_decimal(src, &res);
//   ck_assert_int_eq(code, 0);
//   // standart = -0,0000000000000000000000036229
//   s21_decimal standart = {{36229, 0, 0, -2145648640}};
//   ck_assert_int_eq(s21_is_equal(res, standart), 1);
// }
// END_TEST

START_TEST(s21_fromfloat_test_14) {
  // src = 1,13204755E-29
  float src = 1.13204755E-29;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_15) {
  // src = -3,0075832E-15
  float src = -3.0075832E-15;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,000000000000003007583
  s21_decimal standart = {{3007583, 0, 0, -2146107392}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

// START_TEST(s21_fromfloat_test_16) {
//   // src = 5,5840236E-27
//   float src = 5.5840236E-27;
//   s21_decimal res = {0};
//   int code = s21_from_float_to_decimal(src, &res);
//   ck_assert_int_eq(code, 0);
//   // standart = 0,0000000000000000000000000056
//   s21_decimal standart = {{56, 0, 0, 1835008}};
//   ck_assert_int_eq(s21_is_equal(res, standart), 1);
// }
// END_TEST

START_TEST(s21_fromfloat_test_17) {
  // src = -3,0466877E-19
  float src = -3.0466877E-19;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0000000000000000003046688
  s21_decimal standart = {{3046688, 0, 0, -2145845248}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_18) {
  // src = 6,5312148E+35
  float src = 6.5312148E+35;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_19) {
  // src = -6,758245E+31
  float src = -6.758245E+31;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_20) {
  // src = -3,0075832E-15
  float src = -3.0075832E-15;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,000000000000003007583
  s21_decimal standart = {{3007583, 0, 0, -2146107392}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_21) {
  // src = -3,0075832E-15
  float src = -3.0075832E-15;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,000000000000003007583
  s21_decimal standart = {{3007583, 0, 0, -2146107392}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_22) {
  // src = -3,0075832E-15
  float src = -3.0075832E-15;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,000000000000003007583
  s21_decimal standart = {{3007583, 0, 0, -2146107392}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_23) {
  // src = -3,0075832E-15
  float src = -3.0075832E-15;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,000000000000003007583
  s21_decimal standart = {{3007583, 0, 0, -2146107392}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_24) {
  // src = 3,9037086E-19
  float src = 3.9037086E-19;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000000000000000003903709
  s21_decimal standart = {{3903709, 0, 0, 1638400}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_25) {
  // src = -3,1662749E+35
  float src = -3.1662749E+35;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_26) {
  // src = 3272,3533
  float src = 3272.3533;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3272,353
  s21_decimal standart = {{3272353, 0, 0, 196608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_27) {
  // src = -0,009059809
  float src = -0.009059809;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,009059809
  s21_decimal standart = {{9059809, 0, 0, -2146893824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_28) {
  // src = 38,50333
  float src = 38.50333;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 38,50333
  s21_decimal standart = {{3850333, 0, 0, 327680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_29) {
  // src = 38,50333
  float src = 38.50333;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 38,50333
  s21_decimal standart = {{3850333, 0, 0, 327680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_30) {
  // src = -1,5454542E-38
  float src = -1.5454542E-38;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_31) {
  // src = 3,3549171E+31
  float src = 3.3549171E+31;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_32) {
  // src = 3990,966
  float src = 3990.966;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3990,966
  s21_decimal standart = {{3990966, 0, 0, 196608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

// START_TEST(s21_fromfloat_test_33) {
//   // src = 3,3517787E-28
//   float src = 3.3517787E-28;
//   s21_decimal res = {0};
//   int code = s21_from_float_to_decimal(src, &res);
//   ck_assert_int_eq(code, 0);
//   // standart = 0,0000000000000000000000000003
//   s21_decimal standart = {{3, 0, 0, 1835008}};
//   ck_assert_int_eq(s21_is_equal(res, standart), 1);
// }
// END_TEST

START_TEST(s21_fromfloat_test_34) {
  // src = -4,093904E-05
  float src = -4.093904E-05;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,00004093904
  s21_decimal standart = {{4093904, 0, 0, -2146762752}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_35) {
  // src = 3,3549171E+31
  float src = 3.3549171E+31;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_36) {
  // src = 3,3549171E+31
  float src = 3.3549171E+31;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

// START_TEST(s21_fromfloat_test_37) {
//   // src = -7,1694494E-25
//   float src = -7.1694494E-25;
//   s21_decimal res = {0};
//   int code = s21_from_float_to_decimal(src, &res);
//   ck_assert_int_eq(code, 0);
//   // standart = -0,0000000000000000000000007169
//   s21_decimal standart = {{7169, 0, 0, -2145648640}};
//   ck_assert_int_eq(s21_is_equal(res, standart), 1);
// }
// END_TEST

START_TEST(s21_fromfloat_test_38) {
  // src = -7,3409734E-07
  float src = -7.3409734E-07;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0000007340973
  s21_decimal standart = {{7340973, 0, 0, -2146631680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_39) {
  // src = 5,342156E-15
  float src = 5.342156E-15;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,000000000000005342156
  s21_decimal standart = {{5342156, 0, 0, 1376256}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_40) {
  // src = 3,3549171E+31
  float src = 3.3549171E+31;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_41) {
  // src = -7,454701E+32
  float src = -7.454701E+32;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_42) {
  // src = 1,4071575E+37
  float src = 1.4071575E+37;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_43) {
  // src = -0,041781243
  float src = -0.041781243;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,04178124
  s21_decimal standart = {{4178124, 0, 0, -2146959360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_44) {
  // src = -7,454701E+32
  float src = -7.454701E+32;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

// START_TEST(s21_fromfloat_test_45) {
//   // src = 2,418131E-26
//   float src = 2.418131E-26;
//   s21_decimal res = {0};
//   int code = s21_from_float_to_decimal(src, &res);
//   ck_assert_int_eq(code, 0);
//   // standart = 0,0000000000000000000000000242
//   s21_decimal standart = {{242, 0, 0, 1835008}};
//   ck_assert_int_eq(s21_is_equal(res, standart), 1);
// }
// END_TEST

START_TEST(s21_fromfloat_test_46) {
  // src = -4,9613042E-30
  float src = -4.9613042E-30;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_47) {
  // src = -0,06822155
  float src = -0.06822155;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,06822155
  s21_decimal standart = {{6822155, 0, 0, -2146959360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_48) {
  // src = 1,2649774E-30
  float src = 1.2649774E-30;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_49) {
  // src = 6,0001985E-23
  float src = 6.0001985E-23;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,000000000000000000000060002
  s21_decimal standart = {{60002, 0, 0, 1769472}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_50) {
  // src = -7,454701E+32
  float src = -7.454701E+32;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_51) {
  // src = 0,00016836119
  float src = 0.00016836119;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0001683612
  s21_decimal standart = {{1683612, 0, 0, 655360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_52) {
  // src = -1,3006981E+29
  float src = -1.3006981E+29;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_53) {
  // src = 6,0001985E-23
  float src = 6.0001985E-23;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,000000000000000000000060002
  s21_decimal standart = {{60002, 0, 0, 1769472}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_54) {
  // src = -2,6160372E+36
  float src = -2.6160372E+36;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_55) {
  // src = 6,0001985E-23
  float src = 6.0001985E-23;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,000000000000000000000060002
  s21_decimal standart = {{60002, 0, 0, 1769472}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_56) {
  // src = 8,3443724E-11
  float src = 8.3443724E-11;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,00000000008344372
  s21_decimal standart = {{8344372, 0, 0, 1114112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_57) {
  // src = 1,3937073E+29
  float src = 1.3937073E+29;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

// START_TEST(s21_fromfloat_test_58) {
//   // src = -1,1074363E-24
//   float src = -1.1074363E-24;
//   s21_decimal res = {0};
//   int code = s21_from_float_to_decimal(src, &res);
//   ck_assert_int_eq(code, 0);
//   // standart = -0,0000000000000000000000011074
//   s21_decimal standart = {{11074, 0, 0, -2145648640}};
//   ck_assert_int_eq(s21_is_equal(res, standart), 1);
// }
// END_TEST

START_TEST(s21_fromfloat_test_59) {
  // src = 6,0001985E-23
  float src = 6.0001985E-23;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,000000000000000000000060002
  s21_decimal standart = {{60002, 0, 0, 1769472}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_60) {
  // src = -2,4265725E+30
  float src = -2.4265725E+30;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_61) {
  // src = 6,0001985E-23
  float src = 6.0001985E-23;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,000000000000000000000060002
  s21_decimal standart = {{60002, 0, 0, 1769472}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_62) {
  // src = 6,0001985E-23
  float src = 6.0001985E-23;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,000000000000000000000060002
  s21_decimal standart = {{60002, 0, 0, 1769472}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

// START_TEST(s21_fromfloat_test_63) {
//   // src = -9,965142E-22
//   float src = -9.965142E-22;
//   s21_decimal res = {0};
//   int code = s21_from_float_to_decimal(src, &res);
//   ck_assert_int_eq(code, 0);
//   // standart = -0,0000000000000000000009965142
//   s21_decimal standart = {{9965142, 0, 0, -2145648640}};
//   ck_assert_int_eq(s21_is_equal(res, standart), 1);
// }
// END_TEST

// START_TEST(s21_fromfloat_test_64) {
//   // src = -9,965142E-22
//   float src = -9.965142E-22;
//   s21_decimal res = {0};
//   int code = s21_from_float_to_decimal(src, &res);
//   ck_assert_int_eq(code, 0);
//   // standart = -0,0000000000000000000009965142
//   s21_decimal standart = {{9965142, 0, 0, -2145648640}};
//   ck_assert_int_eq(s21_is_equal(res, standart), 1);
// }
// END_TEST

// START_TEST(s21_fromfloat_test_65) {
//   // src = -9,965142E-22
//   float src = -9.965142E-22;
//   s21_decimal res = {0};
//   int code = s21_from_float_to_decimal(src, &res);
//   ck_assert_int_eq(code, 0);
//   // standart = -0,0000000000000000000009965142
//   s21_decimal standart = {{9965142, 0, 0, -2145648640}};
//   ck_assert_int_eq(s21_is_equal(res, standart), 1);
// }
// END_TEST

// START_TEST(s21_fromfloat_test_66) {
//   // src = -9,965142E-22
//   float src = -9.965142E-22;
//   s21_decimal res = {0};
//   int code = s21_from_float_to_decimal(src, &res);
//   ck_assert_int_eq(code, 0);
//   // standart = -0,0000000000000000000009965142
//   s21_decimal standart = {{9965142, 0, 0, -2145648640}};
//   ck_assert_int_eq(s21_is_equal(res, standart), 1);
// }
// END_TEST

// START_TEST(s21_fromfloat_test_67) {
//   // src = -9,965142E-22
//   float src = -9.965142E-22;
//   s21_decimal res = {0};
//   int code = s21_from_float_to_decimal(src, &res);
//   ck_assert_int_eq(code, 0);
//   // standart = -0,0000000000000000000009965142
//   s21_decimal standart = {{9965142, 0, 0, -2145648640}};
//   ck_assert_int_eq(s21_is_equal(res, standart), 1);
// }
// END_TEST

START_TEST(s21_fromfloat_test_68) {
  // src = 3,1464293E-11
  float src = 3.1464293E-11;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,00000000003146429
  s21_decimal standart = {{3146429, 0, 0, 1114112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_69) {
  // src = 3,1464293E-11
  float src = 3.1464293E-11;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,00000000003146429
  s21_decimal standart = {{3146429, 0, 0, 1114112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_70) {
  // src = 1,226321E-09
  float src = 1.226321E-09;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,000000001226321
  s21_decimal standart = {{1226321, 0, 0, 983040}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_71) {
  // src = 1,2162383E-36
  float src = 1.2162383E-36;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_72) {
  // src = 3,1464293E-11
  float src = 3.1464293E-11;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,00000000003146429
  s21_decimal standart = {{3146429, 0, 0, 1114112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_73) {
  // src = 6,315735E-36
  float src = 6.315735E-36;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_74) {
  // src = 3,8968946E+37
  float src = 3.8968946E+37;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_75) {
  // src = 1,2162383E-36
  float src = 1.2162383E-36;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_76) {
  // src = 1,2162383E-36
  float src = 1.2162383E-36;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_77) {
  // src = 2,1676204E+29
  float src = 2.1676204E+29;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_78) {
  // src = 2,2389713E-11
  float src = 2.2389713E-11;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,00000000002238971
  s21_decimal standart = {{2238971, 0, 0, 1114112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_79) {
  // src = 1,2162383E-36
  float src = 1.2162383E-36;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_80) {
  // src = -0,005325469
  float src = -0.005325469;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,005325469
  s21_decimal standart = {{5325469, 0, 0, -2146893824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_81) {
  // src = -7607994
  float src = -7607994;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7607994
  s21_decimal standart = {{7607994, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_82) {
  // src = -0,005325469
  float src = -0.005325469;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,005325469
  s21_decimal standart = {{5325469, 0, 0, -2146893824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_83) {
  // src = -1,3681856E+33
  float src = -1.3681856E+33;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_84) {
  // src = -0,005325469
  float src = -0.005325469;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,005325469
  s21_decimal standart = {{5325469, 0, 0, -2146893824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_85) {
  // src = -1,3681856E+33
  float src = -1.3681856E+33;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_86) {
  // src = 3,1336565E-20
  float src = 3.1336565E-20;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,00000000000000000003133656
  s21_decimal standart = {{3133656, 0, 0, 1703936}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_87) {
  // src = -0,005325469
  float src = -0.005325469;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,005325469
  s21_decimal standart = {{5325469, 0, 0, -2146893824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_88) {
  // src = -0,2785984
  float src = -0.2785984;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,2785984
  s21_decimal standart = {{2785984, 0, 0, -2147024896}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_89) {
  // src = -0,2785984
  float src = -0.2785984;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,2785984
  s21_decimal standart = {{2785984, 0, 0, -2147024896}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_90) {
  // src = -173968,5
  float src = -173968.5;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -173968,5
  s21_decimal standart = {{1739685, 0, 0, -2147418112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_91) {
  // src = -2,9210715
  float src = -2.9210715;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2,921072
  s21_decimal standart = {{2921072, 0, 0, -2147090432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_92) {
  // src = 2285124
  float src = 2285124;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2285124
  s21_decimal standart = {{2285124, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_93) {
  // src = -43497,523
  float src = -43497.523;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -43497,52
  s21_decimal standart = {{4349752, 0, 0, -2147352576}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_94) {
  // src = 1,5080695E+37
  float src = 1.5080695E+37;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_fromfloat_test_95) {
  // src = -1,603158E+36
  float src = -1.603158E+36;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

// START_TEST(s21_fromfloat_test_96) {
//   // src = -1,8037249E-28
//   float src = -1.8037249E-28;
//   s21_decimal res = {0};
//   int code = s21_from_float_to_decimal(src, &res);
//   ck_assert_int_eq(code, 0);
//   // standart = -0,0000000000000000000000000002
//   s21_decimal standart = {{2, 0, 0, -2145648640}};
//   ck_assert_int_eq(s21_is_equal(res, standart), 1);
// }
// END_TEST

START_TEST(s21_fromfloat_test_97) {
  // src = 0,0002073879
  float src = 0.0002073879;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0002073879
  s21_decimal standart = {{2073879, 0, 0, 655360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

// START_TEST(s21_fromfloat_test_98) {
//   // src = -1,8037249E-28
//   float src = -1.8037249E-28;
//   s21_decimal res = {0};
//   int code = s21_from_float_to_decimal(src, &res);
//   ck_assert_int_eq(code, 0);
//   // standart = -0,0000000000000000000000000002
//   s21_decimal standart = {{2, 0, 0, -2145648640}};
//   ck_assert_int_eq(s21_is_equal(res, standart), 1);
// }
// END_TEST

// START_TEST(s21_fromfloat_test_99) {
//   // src = -3,0978769E-24
//   float src = -3.0978769E-24;
//   s21_decimal res = {0};
//   int code = s21_from_float_to_decimal(src, &res);
//   ck_assert_int_eq(code, 0);
//   // standart = -0,0000000000000000000000030979
//   s21_decimal standart = {{30979, 0, 0, -2145648640}};
//   ck_assert_int_eq(s21_is_equal(res, standart), 1);
// }
// END_TEST

START_TEST(s21_fromfloat_test_100) {
  // src = -7607994
  float src = -7607994;
  s21_decimal res = {0};
  int code = s21_from_float_to_decimal(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7607994
  s21_decimal standart = {{7607994, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

//
//
//

START_TEST(s21_from_float_to_decimal_1) {
  s21_decimal val;
  float fl1 = 3;
  float fl2 = 127.1234;
  float fl1_res = 0;
  float fl2_res = 0;

  s21_from_float_to_decimal(fl1, &val);

  s21_from_decimal_to_float(val, &fl1_res);
  ck_assert_double_eq_tol(fl1, fl1_res, 1e-28);

  s21_from_float_to_decimal(fl2, &val);
  s21_from_decimal_to_float(val, &fl2_res);
  ck_assert_double_eq_tol(fl2, fl2_res, 1e-28);
}
END_TEST

START_TEST(s21_from_float_to_decimal_2) {
  s21_decimal val;
  float fl1 = -128.023;
  float fl2 = 12345.37643764;
  float fl1_res = 0;
  float fl2_res = 0;

  s21_from_float_to_decimal(fl1, &val);
  s21_from_decimal_to_float(val, &fl1_res);
  ck_assert_double_eq_tol(fl1, fl1_res, 1e-6);

  s21_from_float_to_decimal(fl2, &val);
  s21_from_decimal_to_float(val, &fl2_res);
  ck_assert_double_eq_tol(fl2, fl2_res, 1e-2);
}
END_TEST

START_TEST(s21_from_float_to_decimal_5) {
  s21_decimal val;
  s21_from_float_to_decimal(1.02E+09, &val);
  ck_assert_int_eq(val.bits[0], 1020000000);
  ck_assert_int_eq(val.bits[1], 0);
  ck_assert_int_eq(val.bits[2], 0);
  ck_assert_int_eq(val.bits[3], 0);
}
END_TEST

START_TEST(s21_from_float_to_decimal_6) {
  s21_decimal val;
  float fl1 = -333.2222;
  float fl2 = -2.1474836E+20;
  float fl1_res = 0;
  float fl2_res = 0;

  s21_from_float_to_decimal(fl1, &val);
  s21_from_decimal_to_float(val, &fl1_res);
  ck_assert_double_eq_tol(fl1, fl1_res, 1e15);

  s21_from_float_to_decimal(fl2, &val);
  s21_from_decimal_to_float(val, &fl2_res);
  ck_assert_double_eq_tol(fl2, fl2_res, 1e15);
}
END_TEST

START_TEST(s21_from_float_to_decimal_7) {
  s21_decimal val;
  float a = 1.0 / 0.0;
  s21_from_float_to_decimal(a, &val);
  ck_assert_int_eq(val.bits[0], 0);
  ck_assert_int_eq(val.bits[1], 0);
  ck_assert_int_eq(val.bits[2], 0);
  ck_assert_int_eq(val.bits[3], 0);
}
END_TEST

START_TEST(s21_from_float_to_decimal_8) {
  s21_decimal val;
  float a = -1.0 / 0.0;
  s21_from_float_to_decimal(a, &val);
  ck_assert_int_eq(val.bits[0], 0);
  ck_assert_int_eq(val.bits[1], 0);
  ck_assert_int_eq(val.bits[2], 0);
  ck_assert_int_eq(val.bits[3], 0);
}
END_TEST

START_TEST(s21_from_float_to_decimal_10) {
  s21_decimal val;
  float a = 1e-30;
  s21_from_float_to_decimal(a, &val);
  ck_assert_int_eq(val.bits[0], 0);
  ck_assert_int_eq(val.bits[1], 0);
  ck_assert_int_eq(val.bits[2], 0);
  ck_assert_int_eq(val.bits[3], 0);
}
END_TEST

START_TEST(s21_from_float_to_decimal_11) {
  s21_decimal dec;
  float tmp = 0;
  float tmp1 = 0.03;
  s21_from_float_to_decimal(tmp1, &dec);
  s21_from_decimal_to_float(dec, &tmp);
  ck_assert_float_eq_tol(tmp, tmp1, 1e-06);
}
END_TEST

START_TEST(s21_from_float_to_decimal_12) {
  s21_decimal dec;
  s21_from_float_to_decimal(-128.023, &dec);
  float tmp = 0;
  s21_from_decimal_to_float(dec, &tmp);
  ck_assert_float_eq_tol(tmp, -128.023, 1e-06);
}
END_TEST

START_TEST(s21_from_float_to_decimal_13) {
  s21_decimal dec;
  s21_from_float_to_decimal(-2.1474836E+09, &dec);
  float tmp = 0;
  s21_from_decimal_to_float(dec, &tmp);
  ck_assert_float_eq_tol(tmp, -2.1474836E+09, 1e3);
}
END_TEST

START_TEST(s21_from_float_to_decimal_14) {
  s21_decimal dec;
  s21_from_float_to_decimal(22.14836E+03, &dec);
  float tmp = 0;
  s21_from_decimal_to_float(dec, &tmp);
  ck_assert_float_eq_tol(tmp, 22.14836E+03, 1e-06);
}
END_TEST

START_TEST(s21_from_float_to_decimal_15) {
  s21_decimal dec;
  s21_from_float_to_decimal(1.02E+08, &dec);
  float tmp = 0;
  s21_from_decimal_to_float(dec, &tmp);
  ck_assert_float_eq_tol(tmp, 1.02E+08, 1e-06);
}
END_TEST

START_TEST(s21_from_float_to_decimal_16) {
  s21_decimal dec;
  s21_from_float_to_decimal(-333.2222, &dec);
  float tmp = 0;
  s21_from_decimal_to_float(dec, &tmp);
  ck_assert_float_eq_tol(tmp, -333.2222, 1e-06);
}
END_TEST

START_TEST(s21_from_float_to_decimal_17) {
  s21_decimal dec;
  float a = 1.0 / 0.0;
  int ret = s21_from_float_to_decimal(a, &dec);
  ck_assert_int_eq(ret, 1);
}
END_TEST

START_TEST(s21_from_float_to_decimal_18) {
  s21_decimal dec;
  float a = -1.0 / 0.0;
  s21_from_float_to_decimal(a, &dec);
  ck_assert_int_eq(dec.bits[0], 0);
  ck_assert_int_eq(dec.bits[1], 0);
  ck_assert_int_eq(dec.bits[2], 0);
  ck_assert_int_eq(dec.bits[3], 0);
}
END_TEST

START_TEST(s21_from_float_to_decimal_19) {
  s21_decimal dec;
  float a = 1e35;
  int b = s21_from_float_to_decimal(a, &dec);
  ck_assert_int_eq(b, 1);
}
END_TEST

Suite* suite_float_to_decimal(void) {
  Suite* s = suite_create("\033[42m-=S21_DECIMAL_FROM_FLOAT=-\033[0m");
  TCase* tc = tcase_create("case_fromfloat");

  tcase_add_test(tc, s21_fromfloat_test_1);
  tcase_add_test(tc, s21_fromfloat_test_2);
  // tcase_add_test(tc, s21_fromfloat_test_3);
  tcase_add_test(tc, s21_fromfloat_test_4);
  tcase_add_test(tc, s21_fromfloat_test_5);
  tcase_add_test(tc, s21_fromfloat_test_6);
  tcase_add_test(tc, s21_fromfloat_test_7);
  tcase_add_test(tc, s21_fromfloat_test_8);
  tcase_add_test(tc, s21_fromfloat_test_9);
  tcase_add_test(tc, s21_fromfloat_test_10);
  tcase_add_test(tc, s21_fromfloat_test_11);
  tcase_add_test(tc, s21_fromfloat_test_12);
  // tcase_add_test(tc, s21_fromfloat_test_13);
  tcase_add_test(tc, s21_fromfloat_test_14);
  tcase_add_test(tc, s21_fromfloat_test_15);
  // tcase_add_test(tc, s21_fromfloat_test_16);
  tcase_add_test(tc, s21_fromfloat_test_17);
  tcase_add_test(tc, s21_fromfloat_test_18);
  tcase_add_test(tc, s21_fromfloat_test_19);
  tcase_add_test(tc, s21_fromfloat_test_20);
  tcase_add_test(tc, s21_fromfloat_test_21);
  tcase_add_test(tc, s21_fromfloat_test_22);
  tcase_add_test(tc, s21_fromfloat_test_23);
  tcase_add_test(tc, s21_fromfloat_test_24);
  tcase_add_test(tc, s21_fromfloat_test_25);
  tcase_add_test(tc, s21_fromfloat_test_26);
  tcase_add_test(tc, s21_fromfloat_test_27);
  tcase_add_test(tc, s21_fromfloat_test_28);
  tcase_add_test(tc, s21_fromfloat_test_29);
  tcase_add_test(tc, s21_fromfloat_test_30);
  tcase_add_test(tc, s21_fromfloat_test_31);
  tcase_add_test(tc, s21_fromfloat_test_32);
  // tcase_add_test(tc, s21_fromfloat_test_33);
  tcase_add_test(tc, s21_fromfloat_test_34);
  tcase_add_test(tc, s21_fromfloat_test_35);
  tcase_add_test(tc, s21_fromfloat_test_36);
  // tcase_add_test(tc, s21_fromfloat_test_37);
  tcase_add_test(tc, s21_fromfloat_test_38);
  tcase_add_test(tc, s21_fromfloat_test_39);
  tcase_add_test(tc, s21_fromfloat_test_40);
  tcase_add_test(tc, s21_fromfloat_test_41);
  tcase_add_test(tc, s21_fromfloat_test_42);
  tcase_add_test(tc, s21_fromfloat_test_43);
  tcase_add_test(tc, s21_fromfloat_test_44);
  // tcase_add_test(tc, s21_fromfloat_test_45);
  tcase_add_test(tc, s21_fromfloat_test_46);
  tcase_add_test(tc, s21_fromfloat_test_47);
  tcase_add_test(tc, s21_fromfloat_test_48);
  tcase_add_test(tc, s21_fromfloat_test_49);
  tcase_add_test(tc, s21_fromfloat_test_50);
  tcase_add_test(tc, s21_fromfloat_test_51);
  tcase_add_test(tc, s21_fromfloat_test_52);
  tcase_add_test(tc, s21_fromfloat_test_53);
  tcase_add_test(tc, s21_fromfloat_test_54);
  tcase_add_test(tc, s21_fromfloat_test_55);
  tcase_add_test(tc, s21_fromfloat_test_56);
  tcase_add_test(tc, s21_fromfloat_test_57);
  // tcase_add_test(tc, s21_fromfloat_test_58);
  tcase_add_test(tc, s21_fromfloat_test_59);
  tcase_add_test(tc, s21_fromfloat_test_60);
  tcase_add_test(tc, s21_fromfloat_test_61);
  tcase_add_test(tc, s21_fromfloat_test_62);
  // tcase_add_test(tc, s21_fromfloat_test_63);
  // tcase_add_test(tc, s21_fromfloat_test_64);
  // tcase_add_test(tc, s21_fromfloat_test_65);
  // tcase_add_test(tc, s21_fromfloat_test_66);
  // tcase_add_test(tc, s21_fromfloat_test_67);
  tcase_add_test(tc, s21_fromfloat_test_68);
  tcase_add_test(tc, s21_fromfloat_test_69);
  tcase_add_test(tc, s21_fromfloat_test_70);
  tcase_add_test(tc, s21_fromfloat_test_71);
  tcase_add_test(tc, s21_fromfloat_test_72);
  tcase_add_test(tc, s21_fromfloat_test_73);
  tcase_add_test(tc, s21_fromfloat_test_74);
  tcase_add_test(tc, s21_fromfloat_test_75);
  tcase_add_test(tc, s21_fromfloat_test_76);
  tcase_add_test(tc, s21_fromfloat_test_77);
  tcase_add_test(tc, s21_fromfloat_test_78);
  tcase_add_test(tc, s21_fromfloat_test_79);
  tcase_add_test(tc, s21_fromfloat_test_80);
  tcase_add_test(tc, s21_fromfloat_test_81);
  tcase_add_test(tc, s21_fromfloat_test_82);
  tcase_add_test(tc, s21_fromfloat_test_83);
  tcase_add_test(tc, s21_fromfloat_test_84);
  tcase_add_test(tc, s21_fromfloat_test_85);
  tcase_add_test(tc, s21_fromfloat_test_86);
  tcase_add_test(tc, s21_fromfloat_test_87);
  tcase_add_test(tc, s21_fromfloat_test_88);
  tcase_add_test(tc, s21_fromfloat_test_89);
  tcase_add_test(tc, s21_fromfloat_test_90);
  tcase_add_test(tc, s21_fromfloat_test_91);
  tcase_add_test(tc, s21_fromfloat_test_92);
  tcase_add_test(tc, s21_fromfloat_test_93);
  tcase_add_test(tc, s21_fromfloat_test_94);
  tcase_add_test(tc, s21_fromfloat_test_95);
  // tcase_add_test(tc, s21_fromfloat_test_96);
  tcase_add_test(tc, s21_fromfloat_test_97);
  // tcase_add_test(tc, s21_fromfloat_test_98);
  // tcase_add_test(tc, s21_fromfloat_test_99);
  tcase_add_test(tc, s21_fromfloat_test_100);
  tcase_add_test(tc, s21_from_float_to_decimal_1);
  tcase_add_test(tc, s21_from_float_to_decimal_2);
  tcase_add_test(tc, s21_from_float_to_decimal_5);
  tcase_add_test(tc, s21_from_float_to_decimal_6);
  tcase_add_test(tc, s21_from_float_to_decimal_7);
  tcase_add_test(tc, s21_from_float_to_decimal_8);
  tcase_add_test(tc, s21_from_float_to_decimal_10);
  tcase_add_test(tc, s21_from_float_to_decimal_11);
  tcase_add_test(tc, s21_from_float_to_decimal_12);
  tcase_add_test(tc, s21_from_float_to_decimal_13);
  tcase_add_test(tc, s21_from_float_to_decimal_14);
  tcase_add_test(tc, s21_from_float_to_decimal_15);
  tcase_add_test(tc, s21_from_float_to_decimal_16);
  tcase_add_test(tc, s21_from_float_to_decimal_17);
  tcase_add_test(tc, s21_from_float_to_decimal_18);
  tcase_add_test(tc, s21_from_float_to_decimal_19);

  suite_add_tcase(s, tc);
  return s;
}
