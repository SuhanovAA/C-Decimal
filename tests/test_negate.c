#include "tests.h"

START_TEST(s21_negate_test_1) {
  // src = 598483184034620.67574564512422
  s21_decimal src = {{-1588534618, -1581026868, -1050583455, 917504}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -598483184034620.67574564512422
  s21_decimal standart = {{-1588534618, -1581026868, -1050583455, -2146566144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_2) {
  // src = -449.24117343829724314880538730
  s21_decimal src = {{1276213354, 252096555, -1859626015, -2145779712}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 449.24117343829724314880538730
  s21_decimal standart = {{1276213354, 252096555, -1859626015, 1703936}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_3) {
  // src = 102622169031.02616685899191141
  s21_decimal src = {{633901925, 184967568, 556315893, 1114112}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -102622169031.02616685899191141
  s21_decimal standart = {{633901925, 184967568, 556315893, -2146369536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_4) {
  // src = -4970014715045683904947.5368755
  s21_decimal src = {{2113513267, -1422802943, -1600716921, -2147024896}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4970014715045683904947.5368755
  s21_decimal standart = {{2113513267, -1422802943, -1600716921, 458752}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_5) {
  // src = -87865901613.73005099772307529
  s21_decimal src = {{1677355081, 365151916, 476322007, -2146369536}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 87865901613.73005099772307529
  s21_decimal standart = {{1677355081, 365151916, 476322007, 1114112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_6) {
  // src = 565.45279134816989889854403952
  s21_decimal src = {{-1449953936, 379641823, -1229641572, 1703936}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -565.45279134816989889854403952
  s21_decimal standart = {{-1449953936, 379641823, -1229641572, -2145779712}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_7) {
  // src = -5659.7179950779768419031298923
  s21_decimal src = {{-211438741, -174276925, -1226828024, -2145845248}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5659.7179950779768419031298923
  s21_decimal standart = {{-211438741, -174276925, -1226828024, 1638400}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_8) {
  // src = -156481690405184959.04092644049
  s21_decimal src = {{1412424401, 1965068810, 848288943, -2146762752}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 156481690405184959.04092644049
  s21_decimal standart = {{1412424401, 1965068810, 848288943, 720896}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_9) {
  // src = -5822701222755.0325801353318455
  s21_decimal src = {{-1131311049, -1191833220, -1138474639, -2146435072}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5822701222755.0325801353318455
  s21_decimal standart = {{-1131311049, -1191833220, -1138474639, 1048576}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_10) {
  // src = 53085.951615441431008123270297
  s21_decimal src = {{1654895769, 2130727505, -1417172093, 1572864}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -53085.951615441431008123270297
  s21_decimal standart = {{1654895769, 2130727505, -1417172093, -2145910784}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_11) {
  // src = -45808818054.17714447549122267
  s21_decimal src = {{-1781872933, 1145297224, 248330100, -2146369536}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 45808818054.17714447549122267
  s21_decimal standart = {{-1781872933, 1145297224, 248330100, 1114112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_12) {
  // src = 31791652334454630009072.063376
  s21_decimal src = {{-1779362928, 1700714377, 1723428926, 393216}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -31791652334454630009072.063376
  s21_decimal standart = {{-1779362928, 1700714377, 1723428926, -2147090432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_13) {
  // src = 21946.703717593512523229168798
  s21_decimal src = {{-213515106, 2042382116, 1189733192, 1572864}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -21946.703717593512523229168798
  s21_decimal standart = {{-213515106, 2042382116, 1189733192, -2145910784}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_14) {
  // src = 5.852549211570983951888987210
  s21_decimal src = {{-917064630, 2096714326, 317267328, 1769472}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5.852549211570983951888987210
  s21_decimal standart = {{-917064630, 2096714326, 317267328, -2145714176}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_15) {
  // src = 3648828464895523.6794905371305
  s21_decimal src = {{56074921, 1431673500, 1978033874, 851968}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3648828464895523.6794905371305
  s21_decimal standart = {{56074921, 1431673500, 1978033874, -2146631680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_16) {
  // src = -62766124171.243083241093102279
  s21_decimal src = {{260078279, 1064439436, -892408887, -2146304000}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 62766124171.243083241093102279
  s21_decimal standart = {{260078279, 1064439436, -892408887, 1179648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_17) {
  // src = 29.097450270474491721632434073
  s21_decimal src = {{511428505, -636219407, 1577375939, 1769472}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -29.097450270474491721632434073
  s21_decimal standart = {{511428505, -636219407, 1577375939, -2145714176}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_18) {
  // src = 32796567916179.03999728888069
  s21_decimal src = {{-669112059, -326638529, 177790550, 917504}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -32796567916179.03999728888069
  s21_decimal standart = {{-669112059, -326638529, 177790550, -2146566144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_19) {
  // src = 1751.7240106107319724001965775
  s21_decimal src = {{-51398961, -216516979, 949611488, 1638400}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1751.7240106107319724001965775
  s21_decimal standart = {{-51398961, -216516979, 949611488, -2145845248}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_20) {
  // src = 6563555.2235651176013230774237
  s21_decimal src = {{1068242909, 1326889882, -736856880, 1441792}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6563555.2235651176013230774237
  s21_decimal standart = {{1068242909, 1326889882, -736856880, -2146041856}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_21) {
  // src = 7838931332.6912088622080487609
  s21_decimal src = {{-1564446535, 1865087773, -45474106, 1245184}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7838931332.6912088622080487609
  s21_decimal standart = {{-1564446535, 1865087773, -45474106, -2146238464}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_22) {
  // src = 12951135307130.45557498006146
  s21_decimal src = {{1543424642, 776198529, 70208245, 917504}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -12951135307130.45557498006146
  s21_decimal standart = {{1543424642, 776198529, 70208245, -2146566144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_23) {
  // src = 5896766247.1145736631982562069
  s21_decimal src = {{902896405, -513644464, -1098323909, 1245184}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5896766247.1145736631982562069
  s21_decimal standart = {{902896405, -513644464, -1098323909, -2146238464}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_24) {
  // src = -2820072626652173843365978.8218
  s21_decimal src = {{-1013064774, 822893687, 1528764434, -2147221504}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2820072626652173843365978.8218
  s21_decimal standart = {{-1013064774, 822893687, 1528764434, 262144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_25) {
  // src = 50018812899.850840384986950616
  s21_decimal src = {{358624216, -1897461776, -1583442016, 1179648}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -50018812899.850840384986950616
  s21_decimal standart = {{358624216, -1897461776, -1583442016, -2146304000}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_26) {
  // src = -716218.05961173375565006755199
  s21_decimal src = {{-1250306689, 94365976, -412341415, -2145976320}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 716218.05961173375565006755199
  s21_decimal standart = {{-1250306689, 94365976, -412341415, 1507328}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_27) {
  // src = 432543236.56531674145494968139
  s21_decimal src = {{211593035, -471847465, -1950145713, 1310720}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -432543236.56531674145494968139
  s21_decimal standart = {{211593035, -471847465, -1950145713, -2146172928}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_28) {
  // src = -3879293581622852119001858815.6
  s21_decimal src = {{-204136964, 1942548825, 2102969264, -2147418112}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3879293581622852119001858815.6
  s21_decimal standart = {{-204136964, 1942548825, 2102969264, 65536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_29) {
  // src = -480834713505241771527.57327611
  s21_decimal src = {{59893499, -239911558, -1688357092, -2146959360}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 480834713505241771527.57327611
  s21_decimal standart = {{59893499, -239911558, -1688357092, 524288}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_30) {
  // src = 40863486501386327.983341287793
  s21_decimal src = {{1062058353, 29021458, -2079753254, 786432}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -40863486501386327.983341287793
  s21_decimal standart = {{1062058353, 29021458, -2079753254, -2146697216}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_31) {
  // src = 182731533114862407373.12772524
  s21_decimal src = {{1073090988, -327690605, 990589625, 524288}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -182731533114862407373.12772524
  s21_decimal standart = {{1073090988, -327690605, 990589625, -2146959360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_32) {
  // src = -841875152522.8861247278702210
  s21_decimal src = {{73031298, -1445517338, 456381434, -2146435072}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 841875152522.8861247278702210
  s21_decimal standart = {{73031298, -1445517338, 456381434, 1048576}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_33) {
  // src = 4320918704671957.0579164447630
  s21_decimal src = {{901989262, 1586104750, -1952592573, 851968}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4320918704671957.0579164447630
  s21_decimal standart = {{901989262, 1586104750, -1952592573, -2146631680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_34) {
  // src = -343110901964.70674290507778713
  s21_decimal src = {{-697300327, -1855512153, 1860007926, -2146369536}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 343110901964.70674290507778713
  s21_decimal standart = {{-697300327, -1855512153, 1860007926, 1114112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_35) {
  // src = -461943400.31421731171096683296
  s21_decimal src = {{-1484168416, -300315690, -1790767106, -2146172928}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 461943400.31421731171096683296
  s21_decimal standart = {{-1484168416, -300315690, -1790767106, 1310720}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_36) {
  // src = 37378543886.984655598068560122
  s21_decimal src = {{2020733178, 1420245810, 2026294924, 1179648}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -37378543886.984655598068560122
  s21_decimal standart = {{2020733178, 1420245810, 2026294924, -2146304000}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_37) {
  // src = -283037106599043819270.22397781
  s21_decimal src = {{1923090773, 1475205564, 1534347229, -2146959360}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 283037106599043819270.22397781
  s21_decimal standart = {{1923090773, 1475205564, 1534347229, 524288}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_38) {
  // src = 623846.61402945040302411151232
  s21_decimal src = {{1103951744, 611090012, -913088025, 1507328}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -623846.61402945040302411151232
  s21_decimal standart = {{1103951744, 611090012, -913088025, -2145976320}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_39) {
  // src = -5107923171230887864990415056.3
  s21_decimal src = {{901593123, -1852041685, -1525956597, -2147418112}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5107923171230887864990415056.3
  s21_decimal standart = {{901593123, -1852041685, -1525956597, 65536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_40) {
  // src = -584219976189985867353751837.27
  s21_decimal src = {{-922980497, -115698884, -1127904460, -2147352576}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 584219976189985867353751837.27
  s21_decimal standart = {{-922980497, -115698884, -1127904460, 131072}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_41) {
  // src = -590483397103754320236078.02528
  s21_decimal src = {{1772812960, -933913777, -1093950387, -2147155968}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 590483397103754320236078.02528
  s21_decimal standart = {{1772812960, -933913777, -1093950387, 327680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_42) {
  // src = 75637932472592586081780316657
  s21_decimal src = {{-1959052815, 1953515171, -194626761, 0}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -75637932472592586081780316657
  s21_decimal standart = {{-1959052815, 1953515171, -194626761, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_43) {
  // src = -648900076235.10565156550245598
  s21_decimal src = {{865762526, -427113145, -777272935, -2146369536}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 648900076235.10565156550245598
  s21_decimal standart = {{865762526, -427113145, -777272935, 1114112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_44) {
  // src = -616413410352374763388756533.94
  s21_decimal src = {{-1408606958, 1143394333, -953383503, -2147352576}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 616413410352374763388756533.94
  s21_decimal standart = {{-1408606958, 1143394333, -953383503, 131072}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_45) {
  // src = 194464180831.44045320035694253
  s21_decimal src = {{284489389, -1544862643, 1054192436, 1114112}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -194464180831.44045320035694253
  s21_decimal standart = {{284489389, -1544862643, 1054192436, -2146369536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_46) {
  // src = -138166645591512404.18701345006
  s21_decimal src = {{-222560018, -1817791384, 749002886, -2146762752}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 138166645591512404.18701345006
  s21_decimal standart = {{-222560018, -1817791384, 749002886, 720896}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_47) {
  // src = -7036084052322137.6483045790380
  s21_decimal src = {{1474155180, -1463996968, -480698489, -2146631680}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 7036084052322137.6483045790380
  s21_decimal standart = {{1474155180, -1463996968, -480698489, 851968}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_48) {
  // src = -10021301255251865.652956818528
  s21_decimal src = {{-614929312, -1701712141, 543255829, -2146697216}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 10021301255251865.652956818528
  s21_decimal standart = {{-614929312, -1701712141, 543255829, 786432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_49) {
  // src = -12365048549546125.788605588883
  s21_decimal src = {{83371411, 65851532, 670310625, -2146697216}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 12365048549546125.788605588883
  s21_decimal standart = {{83371411, 65851532, 670310625, 786432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_50) {
  // src = 5999035338843287885520432454.0
  s21_decimal src = {{1063994556, -1736869850, -1042883723, 65536}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5999035338843287885520432454.0
  s21_decimal standart = {{1063994556, -1736869850, -1042883723, -2147418112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_51) {
  // src = -485300833875818.98731931147693
  s21_decimal src = {{1477287341, -60347920, -1664146205, -2146566144}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 485300833875818.98731931147693
  s21_decimal standart = {{1477287341, -60347920, -1664146205, 917504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_52) {
  // src = 7147.933611905997019101978004
  s21_decimal src = {{-957424236, -1973399929, 387490257, 1572864}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7147.933611905997019101978004
  s21_decimal standart = {{-957424236, -1973399929, 387490257, -2145910784}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_53) {
  // src = 5672577787541.0592808639920257
  s21_decimal src = {{1975253121, 1814693861, -1219856716, 1048576}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5672577787541.0592808639920257
  s21_decimal standart = {{1975253121, 1814693861, -1219856716, -2146435072}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_54) {
  // src = 46861424659928787792126.504392
  s21_decimal src = {{1104637384, 442506732, -1754604375, 393216}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -46861424659928787792126.504392
  s21_decimal standart = {{1104637384, 442506732, -1754604375, -2147090432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_55) {
  // src = -73.22207687146033851637595933
  s21_decimal src = {{-1094287587, 385213615, 396937674, -2145779712}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 73.22207687146033851637595933
  s21_decimal standart = {{-1094287587, 385213615, 396937674, 1703936}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_56) {
  // src = 71731207821790349013657415284
  s21_decimal src = {{2041933428, -989065517, -406410729, 0}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -71731207821790349013657415284
  s21_decimal standart = {{2041933428, -989065517, -406410729, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_57) {
  // src = 81077365784.26199739036643821
  s21_decimal src = {{392999405, -1660031455, 439521280, 1114112}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -81077365784.26199739036643821
  s21_decimal standart = {{392999405, -1660031455, 439521280, -2146369536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_58) {
  // src = -443549768774643504.24918493449
  s21_decimal src = {{103123209, -1913157850, -1890479182, -2146762752}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 443549768774643504.24918493449
  s21_decimal standart = {{103123209, -1913157850, -1890479182, 720896}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_59) {
  // src = -6807412965483.7690718332177207
  s21_decimal src = {{468503351, 394047438, -604661333, -2146435072}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6807412965483.7690718332177207
  s21_decimal standart = {{468503351, 394047438, -604661333, 1048576}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_60) {
  // src = 5596575268.4937700520312179427
  s21_decimal src = {{-1525151005, 1244661694, -1261057764, 1245184}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5596575268.4937700520312179427
  s21_decimal standart = {{-1525151005, 1244661694, -1261057764, -2146238464}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_61) {
  // src = 10797457.339461555669525848053
  s21_decimal src = {{3399669, 1023012544, 585331335, 1376256}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -10797457.339461555669525848053
  s21_decimal standart = {{3399669, 1023012544, 585331335, -2146107392}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_62) {
  // src = 179523785.08970540576473417771
  s21_decimal src = {{528287787, 152029160, 973200389, 1310720}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -179523785.08970540576473417771
  s21_decimal standart = {{528287787, 152029160, 973200389, -2146172928}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_63) {
  // src = -2565.9778143501286176963124450
  s21_decimal src = {{1791974626, 1864049784, 1391019360, -2145845248}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2565.9778143501286176963124450
  s21_decimal standart = {{1791974626, 1864049784, 1391019360, 1638400}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_64) {
  // src = 706074862274529664524913376.8
  s21_decimal src = {{-455775032, -825818276, 382763949, 65536}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -706074862274529664524913376.8
  s21_decimal standart = {{-455775032, -825818276, 382763949, -2147418112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_65) {
  // src = 289869263342020121410.39872678
  s21_decimal src = {{-130585946, 1120793343, 1571384425, 524288}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -289869263342020121410.39872678
  s21_decimal standart = {{-130585946, 1120793343, 1571384425, -2146959360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_66) {
  // src = 7599860147026.777640473020939
  s21_decimal src = {{1396525579, 427872686, 411989244, 983040}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7599860147026.777640473020939
  s21_decimal standart = {{1396525579, 427872686, 411989244, -2146500608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_67) {
  // src = 52267856917352760812621.81758
  s21_decimal src = {{1761951102, 450013016, 283344620, 327680}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -52267856917352760812621.81758
  s21_decimal standart = {{1761951102, 450013016, 283344620, -2147155968}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_68) {
  // src = -5829262.9324147379763322065099
  s21_decimal src = {{898928843, -1474717567, -1134917529, -2146041856}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5829262.9324147379763322065099
  s21_decimal standart = {{898928843, -1474717567, -1134917529, 1441792}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_69) {
  // src = 2516556521069210091141456273.3
  s21_decimal src = {{-1044459603, -1447831989, 1364228023, 65536}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2516556521069210091141456273.3
  s21_decimal standart = {{-1044459603, -1447831989, 1364228023, -2147418112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_70) {
  // src = -23980841148684450232421.853097
  s21_decimal src = {{2002790313, -1839650330, 1300004003, -2147090432}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 23980841148684450232421.853097
  s21_decimal standart = {{2002790313, -1839650330, 1300004003, 393216}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_71) {
  // src = -698939508314784406667075.68284
  s21_decimal src = {{160474780, -1055712758, -506008630, -2147155968}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 698939508314784406667075.68284
  s21_decimal standart = {{160474780, -1055712758, -506008630, 327680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_72) {
  // src = -751.12044109089461754884338421
  s21_decimal src = {{-370068747, 623163212, -223135226, -2145779712}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 751.12044109089461754884338421
  s21_decimal standart = {{-370068747, 623163212, -223135226, 1703936}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_73) {
  // src = -67476588093202287.506498041705
  s21_decimal src = {{-1843087511, 549635825, -637054126, -2146697216}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 67476588093202287.506498041705
  s21_decimal standart = {{-1843087511, 549635825, -637054126, 786432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_74) {
  // src = -782217357040730155.01606178197
  s21_decimal src = {{1773489557, 1276230671, -54558507, -2146762752}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 782217357040730155.01606178197
  s21_decimal standart = {{1773489557, 1276230671, -54558507, 720896}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_75) {
  // src = -90.43833769053529856690321837
  s21_decimal src = {{1777039789, 1203632, 490267211, -2145779712}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 90.43833769053529856690321837
  s21_decimal standart = {{1777039789, 1203632, 490267211, 1703936}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_76) {
  // src = -2898.020202326046983409990543
  s21_decimal src = {{228948879, -157028031, 157101989, -2145910784}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2898.020202326046983409990543
  s21_decimal standart = {{228948879, -157028031, 157101989, 1572864}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_77) {
  // src = -298965333394552089020085.08906
  s21_decimal src = {{-1688464918, -768230002, 1620694319, -2147155968}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 298965333394552089020085.08906
  s21_decimal standart = {{-1688464918, -768230002, 1620694319, 327680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_78) {
  // src = 42320115555541249142.930645097
  s21_decimal src = {{-1962303383, 1107116448, -2000789235, 589824}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -42320115555541249142.930645097
  s21_decimal standart = {{-1962303383, 1107116448, -2000789235, -2146893824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_79) {
  // src = -20537075399.99943810252360799
  s21_decimal src = {{1574784095, -747796740, 111331708, -2146369536}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 20537075399.99943810252360799
  s21_decimal standart = {{1574784095, -747796740, 111331708, 1114112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_80) {
  // src = 31.848985895512620797415345316
  s21_decimal src = {{1789349028, -134223657, 1726536984, 1769472}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -31.848985895512620797415345316
  s21_decimal standart = {{1789349028, -134223657, 1726536984, -2145714176}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_81) {
  // src = -1828911029269969418071.7760116
  s21_decimal src = {{484904564, -1681048414, 991454655, -2147024896}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1828911029269969418071.7760116
  s21_decimal standart = {{484904564, -1681048414, 991454655, 458752}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_82) {
  // src = 28386338.150949934906037003649
  s21_decimal src = {{-1075026559, -1681892803, 1538826474, 1376256}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -28386338.150949934906037003649
  s21_decimal standart = {{-1075026559, -1681892803, 1538826474, -2146107392}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_83) {
  // src = -1929473548.8559896645906847566
  s21_decimal src = {{-734668978, -1239140859, 1045969706, -2146238464}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1929473548.8559896645906847566
  s21_decimal standart = {{-734668978, -1239140859, 1045969706, 1245184}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_84) {
  // src = 196841371151397632067.52351436
  s21_decimal src = {{481342668, 802532077, 1067079211, 524288}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -196841371151397632067.52351436
  s21_decimal standart = {{481342668, 802532077, 1067079211, -2146959360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_85) {
  // src = -22352971822589659098.635868029
  s21_decimal src = {{-1396926595, -1812696533, 1211757030, -2146893824}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 22352971822589659098.635868029
  s21_decimal standart = {{-1396926595, -1812696533, 1211757030, 589824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_86) {
  // src = -11744961319555469198.178034474
  s21_decimal src = {{491692842, -339247317, 636695628, -2146893824}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 11744961319555469198.178034474
  s21_decimal standart = {{491692842, -339247317, 636695628, 589824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_87) {
  // src = -780.23834660524942766289500997
  s21_decimal src = {{573094725, 985897565, -65286744, -2145779712}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 780.23834660524942766289500997
  s21_decimal standart = {{573094725, 985897565, -65286744, 1703936}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_88) {
  // src = -434544979899639738.111263890
  s21_decimal src = {{1902019730, -1879078416, 23556730, -2146893824}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 434544979899639738.111263890
  s21_decimal standart = {{1902019730, -1879078416, 23556730, 589824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_89) {
  // src = 534320358099151949791.67487293
  s21_decimal src = {{878953789, 1166797409, -1398410831, 524288}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -534320358099151949791.67487293
  s21_decimal standart = {{878953789, 1166797409, -1398410831, -2146959360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_90) {
  // src = 48874477.51771738777682433330
  s21_decimal src = {{-1780230862, -2065811928, 264949073, 1310720}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -48874477.51771738777682433330
  s21_decimal standart = {{-1780230862, -2065811928, 264949073, -2146172928}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_91) {
  // src = 27113423389045717.718589237428
  s21_decimal src = {{-1765283660, 412887110, 1469821627, 786432}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -27113423389045717.718589237428
  s21_decimal standart = {{-1765283660, 412887110, 1469821627, -2146697216}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_92) {
  // src = 7097754636517001783840623098
  s21_decimal src = {{46156282, -712793804, 384770049, 0}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7097754636517001783840623098
  s21_decimal standart = {{46156282, -712793804, 384770049, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_93) {
  // src = -38225489304625251.722001205638
  s21_decimal src = {{-663402106, 1803051346, 2072207927, -2146697216}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 38225489304625251.722001205638
  s21_decimal standart = {{-663402106, 1803051346, 2072207927, 786432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_94) {
  // src = -91539109719691485315.85350774
  s21_decimal src = {{231242870, 547145831, 496234508, -2146959360}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 91539109719691485315.85350774
  s21_decimal standart = {{231242870, 547145831, 496234508, 524288}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_95) {
  // src = -738372168502816519374642.21
  s21_decimal src = {{1430507421, -1950052879, 4002723, -2147352576}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 738372168502816519374642.21
  s21_decimal standart = {{1430507421, -1950052879, 4002723, 131072}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_96) {
  // src = 18981288567.724298142148399498
  s21_decimal src = {{431427978, 365276855, 1028977715, 1179648}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -18981288567.724298142148399498
  s21_decimal standart = {{431427978, 365276855, 1028977715, -2146304000}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_97) {
  // src = -499193469580544143961723457.21
  s21_decimal src = {{-1912790663, 210507787, -1588834075, -2147352576}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 499193469580544143961723457.21
  s21_decimal standart = {{-1912790663, 210507787, -1588834075, 131072}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_98) {
  // src = 7704.5890536600463862722746418
  s21_decimal src = {{749492274, 185239769, -118301201, 1638400}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7704.5890536600463862722746418
  s21_decimal standart = {{749492274, 185239769, -118301201, -2145845248}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_99) {
  // src = 100253370.11916432122376693112
  s21_decimal src = {{-168745608, 1765044976, 543474608, 1310720}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -100253370.11916432122376693112
  s21_decimal standart = {{-168745608, 1765044976, 543474608, -2146172928}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_100) {
  // src = -575241770298345778.75131721523
  s21_decimal src = {{-275486925, 1328734277, -1176575411, -2146762752}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 575241770298345778.75131721523
  s21_decimal standart = {{-275486925, 1328734277, -1176575411, 720896}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_101) {
  // src = 18446744073709551615
  s21_decimal src = {{-1, -1, 0, 0}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -18446744073709551615
  s21_decimal standart = {{-1, -1, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_negate_test_102) {
  // src = -18446744073709551615
  s21_decimal src = {{-1, -1, 0, -2147483648}};
  s21_decimal res = {0};
  int code = s21_negate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 18446744073709551615
  s21_decimal standart = {{-1, -1, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST
//
//
//
void negate_test_function(float n, float accuracy) {
  s21_decimal var1 = {{0}}, var2 = {{0}}, var3 = {{0}};
  float value1 = 0.0, value2 = 0.0;
  s21_from_float_to_decimal(n, &var1);
  s21_negate(var1, &var2);
  s21_from_decimal_to_float(var2, &value2);
  value1 = -1 * n;
  s21_from_float_to_decimal(value1, &var3);
  ck_assert_float_eq_tol(value1, value2, accuracy);
  return;
}

START_TEST(negate_0) {
  s21_decimal val = {{2, 0, 0, 0}};
  s21_decimal res = {{0}};
  int sign_before = get_sign_decimal(val);
  s21_negate(val, &res);
  int sign_after = get_sign_decimal(res);

  ck_assert_int_ne(sign_before, sign_after);
}
END_TEST

START_TEST(negate_1) {
  s21_decimal val = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res;
  int sign_before = get_sign_decimal(val);
  s21_negate(val, &res);
  int sign_after = get_sign_decimal(res);
  ck_assert_int_ne(sign_before, sign_after);
}
END_TEST

START_TEST(negate_2) {
  s21_decimal val = {{0, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {{0}};
  int sign_before = get_sign_decimal(val);
  s21_negate(val, &res);
  int sign_after = get_sign_decimal(res);
  ck_assert_int_ne(sign_before, sign_after);
}
END_TEST

START_TEST(negate_3) {
  s21_decimal val = {{0}};
  s21_decimal res = {{0}};
  int sign_before = get_sign_decimal(val);
  s21_negate(val, &res);
  int sign_after = get_sign_decimal(res);
  ck_assert_int_ne(sign_before, sign_after);
}
END_TEST

START_TEST(negate_5) {
  s21_decimal value_1 = {{5, 0xFFFFFFFF, 0, 0}};
  decimal_invert_sign(&value_1);
  s21_decimal check = {{5, 0xFFFFFFFF, 0, 0}};
  s21_decimal result = {0};
  int return_value = s21_negate(value_1, &result);
  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(negate_6) {
  s21_decimal value_1 = {{1, 1, 1, 0}};
  s21_decimal check = {{1, 1, 1, 0x80000000}};
  s21_decimal result = {0};
  int return_value = s21_negate(value_1, &result);
  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(negate_7) {
  float a = 10.1234e5;
  float res_a = 0;
  s21_decimal src = {0};
  s21_from_float_to_decimal(a, &src);
  s21_decimal res = {0};
  s21_negate(src, &res);
  s21_from_decimal_to_float(res, &res_a);
  ck_assert_float_eq(-10.1234e5, res_a);
}
END_TEST

Suite *suite_negate(void) {
  Suite* s = suite_create("\033[42m-=S21_DECIMAL_NEGATE=-\033[0m");
  TCase* tc1_1 = tcase_create("case_negate");
  tcase_add_test(tc1_1, s21_negate_test_1);
  tcase_add_test(tc1_1, s21_negate_test_2);
  tcase_add_test(tc1_1, s21_negate_test_3);
  tcase_add_test(tc1_1, s21_negate_test_4);
  tcase_add_test(tc1_1, s21_negate_test_5);
  tcase_add_test(tc1_1, s21_negate_test_6);
  tcase_add_test(tc1_1, s21_negate_test_7);
  tcase_add_test(tc1_1, s21_negate_test_8);
  tcase_add_test(tc1_1, s21_negate_test_9);
  tcase_add_test(tc1_1, s21_negate_test_10);
  tcase_add_test(tc1_1, s21_negate_test_11);
  tcase_add_test(tc1_1, s21_negate_test_12);
  tcase_add_test(tc1_1, s21_negate_test_13);
  tcase_add_test(tc1_1, s21_negate_test_14);
  tcase_add_test(tc1_1, s21_negate_test_15);
  tcase_add_test(tc1_1, s21_negate_test_16);
  tcase_add_test(tc1_1, s21_negate_test_17);
  tcase_add_test(tc1_1, s21_negate_test_18);
  tcase_add_test(tc1_1, s21_negate_test_19);
  tcase_add_test(tc1_1, s21_negate_test_20);
  tcase_add_test(tc1_1, s21_negate_test_21);
  tcase_add_test(tc1_1, s21_negate_test_22);
  tcase_add_test(tc1_1, s21_negate_test_23);
  tcase_add_test(tc1_1, s21_negate_test_24);
  tcase_add_test(tc1_1, s21_negate_test_25);
  tcase_add_test(tc1_1, s21_negate_test_26);
  tcase_add_test(tc1_1, s21_negate_test_27);
  tcase_add_test(tc1_1, s21_negate_test_28);
  tcase_add_test(tc1_1, s21_negate_test_29);
  tcase_add_test(tc1_1, s21_negate_test_30);
  tcase_add_test(tc1_1, s21_negate_test_31);
  tcase_add_test(tc1_1, s21_negate_test_32);
  tcase_add_test(tc1_1, s21_negate_test_33);
  tcase_add_test(tc1_1, s21_negate_test_34);
  tcase_add_test(tc1_1, s21_negate_test_35);
  tcase_add_test(tc1_1, s21_negate_test_36);
  tcase_add_test(tc1_1, s21_negate_test_37);
  tcase_add_test(tc1_1, s21_negate_test_38);
  tcase_add_test(tc1_1, s21_negate_test_39);
  tcase_add_test(tc1_1, s21_negate_test_40);
  tcase_add_test(tc1_1, s21_negate_test_41);
  tcase_add_test(tc1_1, s21_negate_test_42);
  tcase_add_test(tc1_1, s21_negate_test_43);
  tcase_add_test(tc1_1, s21_negate_test_44);
  tcase_add_test(tc1_1, s21_negate_test_45);
  tcase_add_test(tc1_1, s21_negate_test_46);
  tcase_add_test(tc1_1, s21_negate_test_47);
  tcase_add_test(tc1_1, s21_negate_test_48);
  tcase_add_test(tc1_1, s21_negate_test_49);
  tcase_add_test(tc1_1, s21_negate_test_50);
  tcase_add_test(tc1_1, s21_negate_test_51);
  tcase_add_test(tc1_1, s21_negate_test_52);
  tcase_add_test(tc1_1, s21_negate_test_53);
  tcase_add_test(tc1_1, s21_negate_test_54);
  tcase_add_test(tc1_1, s21_negate_test_55);
  tcase_add_test(tc1_1, s21_negate_test_56);
  tcase_add_test(tc1_1, s21_negate_test_57);
  tcase_add_test(tc1_1, s21_negate_test_58);
  tcase_add_test(tc1_1, s21_negate_test_59);
  tcase_add_test(tc1_1, s21_negate_test_60);
  tcase_add_test(tc1_1, s21_negate_test_61);
  tcase_add_test(tc1_1, s21_negate_test_62);
  tcase_add_test(tc1_1, s21_negate_test_63);
  tcase_add_test(tc1_1, s21_negate_test_64);
  tcase_add_test(tc1_1, s21_negate_test_65);
  tcase_add_test(tc1_1, s21_negate_test_66);
  tcase_add_test(tc1_1, s21_negate_test_67);
  tcase_add_test(tc1_1, s21_negate_test_68);
  tcase_add_test(tc1_1, s21_negate_test_69);
  tcase_add_test(tc1_1, s21_negate_test_70);
  tcase_add_test(tc1_1, s21_negate_test_71);
  tcase_add_test(tc1_1, s21_negate_test_72);
  tcase_add_test(tc1_1, s21_negate_test_73);
  tcase_add_test(tc1_1, s21_negate_test_74);
  tcase_add_test(tc1_1, s21_negate_test_75);
  tcase_add_test(tc1_1, s21_negate_test_76);
  tcase_add_test(tc1_1, s21_negate_test_77);
  tcase_add_test(tc1_1, s21_negate_test_78);
  tcase_add_test(tc1_1, s21_negate_test_79);
  tcase_add_test(tc1_1, s21_negate_test_80);
  tcase_add_test(tc1_1, s21_negate_test_81);
  tcase_add_test(tc1_1, s21_negate_test_82);
  tcase_add_test(tc1_1, s21_negate_test_83);
  tcase_add_test(tc1_1, s21_negate_test_84);
  tcase_add_test(tc1_1, s21_negate_test_85);
  tcase_add_test(tc1_1, s21_negate_test_86);
  tcase_add_test(tc1_1, s21_negate_test_87);
  tcase_add_test(tc1_1, s21_negate_test_88);
  tcase_add_test(tc1_1, s21_negate_test_89);
  tcase_add_test(tc1_1, s21_negate_test_90);
  tcase_add_test(tc1_1, s21_negate_test_91);
  tcase_add_test(tc1_1, s21_negate_test_92);
  tcase_add_test(tc1_1, s21_negate_test_93);
  tcase_add_test(tc1_1, s21_negate_test_94);
  tcase_add_test(tc1_1, s21_negate_test_95);
  tcase_add_test(tc1_1, s21_negate_test_96);
  tcase_add_test(tc1_1, s21_negate_test_97);
  tcase_add_test(tc1_1, s21_negate_test_98);
  tcase_add_test(tc1_1, s21_negate_test_99);
  tcase_add_test(tc1_1, s21_negate_test_100);
  tcase_add_test(tc1_1, s21_negate_test_101);
  tcase_add_test(tc1_1, s21_negate_test_102);



  tcase_add_test(tc1_1, negate_0);
  tcase_add_test(tc1_1, negate_1);
  tcase_add_test(tc1_1, negate_2);
  tcase_add_test(tc1_1, negate_3);
  tcase_add_test(tc1_1, negate_5);
  tcase_add_test(tc1_1, negate_6);
  tcase_add_test(tc1_1, negate_7);


  suite_add_tcase(s, tc1_1);
  return s;
}