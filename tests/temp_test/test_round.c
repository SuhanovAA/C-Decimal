#include "tests.h"

START_TEST(s21_round_test_1) {
  // src = 1163209315,6207333864881611594
  s21_decimal src = {{-2026020022, -2037154644, 630577033, 1245184}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1163209316
  s21_decimal standart = {{1163209316, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_2) {
  // src = -277291313371,14762684053224959
  s21_decimal src = {{-805667329, -679526935, 1503199221, -2146369536}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -277291313371
  s21_decimal standart = {{-1881560869, 64, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_3) {
  // src = 60417954098933009943845923046
  s21_decimal src = {{408938726, -1891362535, -1019703442, 0}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 60417954098933009943845923046
  s21_decimal standart = {{408938726, -1891362535, -1019703442, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_4) {
  // src = 165499591720331818885016459,15
  s21_decimal src = {{-1431436709, 1903696154, 897175084, 131072}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 165499591720331818885016459
  s21_decimal standart = {{801729419, -668157806, 8971750, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_5) {
  // src = -728563,28691334873618357054995
  s21_decimal src = {{-1027707373, 1387974125, -345417804, -2145976320}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -728563
  s21_decimal standart = {{728563, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_6) {
  // src = -165927420614992,0633333070880
  s21_decimal src = {{-485901280, -202528176, 89949434, -2146631680}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -165927420614992
  s21_decimal standart = {{-50931376, 38632, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_7) {
  // src = 68,493723223092550320115527473
  s21_decimal src = {{-716067023, 21000229, -581915120, 1769472}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 68
  s21_decimal standart = {{68, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_8) {
  // src = -282853350824139612708846953,90
  s21_decimal src = {{-1270743714, 1252771396, 1533351087, -2147352576}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -282853350824139612708846954
  s21_decimal standart = {{2091826538, -545818035, 15333510, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_9) {
  // src = 2386,0008573098782596542264296
  s21_decimal src = {{-591891480, -2045164467, 1293453656, 1638400}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2386
  s21_decimal standart = {{2386, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_10) {
  // src = -434088875117364961723,1246866
  s21_decimal src = {{-472943086, -1172448935, 235320050, -2147024896}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -434088875117364961723
  s21_decimal standart = {{-1888427589, -2010022908, 23, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_11) {
  // src = 310937619098283011173,77070386
  s21_decimal src = {{151373106, -1421017526, 1685596210, 524288}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 310937619098283011174
  s21_decimal standart = {{-622859162, -618638042, 16, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_12) {
  // src = -65478578159400718998432116,924
  s21_decimal src = {{1990717628, -1785812659, -745366462, -2147287040}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -65478578159400718998432117
  s21_decimal standart = {{-2141197963, -710455417, 3549600, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_13) {
  // src = -339424211145112434,48039338206
  s21_decimal src = {{264859870, -1767175715, 1840022335, -2146762752}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -339424211145112434
  s21_decimal standart = {{-1921467534, 79028357, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_14) {
  // src = -7207651,4303038044384019413596
  s21_decimal src = {{-1815545252, -1602799933, -387691627, -2146041856}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7207651
  s21_decimal standart = {{7207651, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_15) {
  // src = 45504284616688,993923271659378
  s21_decimal src = {{589467506, -254922070, -1828175085, 983040}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 45504284616689
  s21_decimal standart = {{-893884431, 10594, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_16) {
  // src = 46303660771722449,309039003144
  s21_decimal src = {{-148175352, 586973495, -1784840816, 786432}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 46303660771722449
  s21_decimal standart = {{605635793, 10780911, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_17) {
  // src = 649111716036828,92676359817402
  s21_decimal src = {{1318095034, -1869947786, -776125633, 917504}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 649111716036829
  s21_decimal standart = {{423690461, 151133, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_18) {
  // src = 31179418052676024,701909645883
  s21_decimal src = {{-1522091461, 2049795069, 1690239639, 786432}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 31179418052676025
  s21_decimal standart = {{-111851079, 7259523, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_19) {
  // src = 600124075,26654022477517407526
  s21_decimal src = {{862176550, -755113445, -1041688166, 1310720}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 600124075
  s21_decimal standart = {{600124075, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_20) {
  // src = 21930164833973147439617,114713
  s21_decimal src = {{-245792167, -867820024, 1188836617, 393216}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 21930164833973147439617
  s21_decimal standart = {{1824952833, -701721215, 1188, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_21) {
  // src = 650846308752686,44922554970710
  s21_decimal src = {{-131730858, -2065148528, -766722387, 917504}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 650846308752686
  s21_decimal standart = {{-150381266, 151536, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_22) {
  // src = -25277411265571690031957,593241
  s21_decimal src = {{-1428501351, 1920363716, 1370291210, -2147090432}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -25277411265571690031958
  s21_decimal standart = {{-1581077674, 1250739346, 1370, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_23) {
  // src = -4505,4667018564402311182718351
  s21_decimal src = {{-228813425, 459245802, -1852548903, -2145845248}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4505
  s21_decimal standart = {{4505, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_24) {
  // src = -179148227130291675965564264,2
  s21_decimal src = {{-622496238, -2036697500, 97116448, -2147418112}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -179148227130291675965564264
  s21_decimal standart = {{2085234024, -633166480, 9711644, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_25) {
  // src = -67524,914318968904234383104953
  s21_decimal src = {{-1858151495, 327197497, -634434356, -2145910784}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -67525
  s21_decimal standart = {{67525, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_26) {
  // src = -408576919254089906267331260,39
  s21_decimal src = {{-703041129, 1776372750, -2080067379, -2147352576}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -408576919254089906267331260
  s21_decimal standart = {{-737174852, 747908167, 22148999, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_27) {
  // src = 4689106,6421538493996654139476
  s21_decimal src = {{-1879828396, 943630822, -1752997492, 1441792}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4689107
  s21_decimal standart = {{4689107, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_28) {
  // src = -439127356,9999268331350185339
  s21_decimal src = {{-1034889861, 981697142, 238051417, -2146238464}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -439127357
  s21_decimal standart = {{439127357, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_29) {
  // src = 5665283908402797266,9945989527
  s21_decimal src = {{381471127, -1637494281, -1223810736, 655360}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5665283908402797267
  s21_decimal standart = {{-535438637, 1319051698, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_30) {
  // src = 1837,2455692586426989717918520
  s21_decimal src = {{-444165320, -902828510, 995972818, 1638400}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1837
  s21_decimal standart = {{1837, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_31) {
  // src = -28146,987527981393344057047422
  s21_decimal src = {{355465598, 1451661298, 1525851251, -2145910784}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -28147
  s21_decimal standart = {{28147, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_32) {
  // src = 42,064977885986621419425322606
  s21_decimal src = {{-1107863954, 2048999314, -2014620276, 1769472}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 42
  s21_decimal standart = {{42, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_33) {
  // src = -58836959749,2817448279488801
  s21_decimal src = {{-1130088159, -896330796, 31895579, -2146435072}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -58836959749
  s21_decimal standart = {{-1292582395, 13, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_34) {
  // src = 40344,668509509625320282543820
  s21_decimal src = {{-1420798260, 1335273952, -2107878434, 1572864}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 40345
  s21_decimal standart = {{40345, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_35) {
  // src = 6935064868442345024,7039536858
  s21_decimal src = {{-49819942, 1488398316, -535461098, 655360}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6935064868442345025
  s21_decimal standart = {{432803393, 1614695617, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_36) {
  // src = -7332086086,9506636490628147347
  s21_decimal src = {{-1239930733, 692887082, -320235464, -2146238464}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7332086087
  s21_decimal standart = {{-1257848505, 1, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_37) {
  // src = -1644109940,8702831538187347518
  s21_decimal src = {{584656446, -651599728, 891273784, -2146238464}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1644109941
  s21_decimal standart = {{1644109941, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_38) {
  // src = -53743969666853885370246,804974
  s21_decimal src = {{-784419346, -1976107045, -1381500863, -2147090432}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -53743969666853885370247
  s21_decimal standart = {{-1565859961, 2003316799, 2913, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_39) {
  // src = -12190200903346,819356411290572
  s21_decimal src = {{-1193548852, 524711903, 660832115, -2146500608}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -12190200903347
  s21_decimal standart = {{1083717299, 2838, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_40) {
  // src = 5476,9350676486068826872795852
  s21_decimal src = {{-973810996, 1947043483, -1325914847, 1638400}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5477
  s21_decimal standart = {{5477, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_41) {
  // src = 633964,73933610683165639230419
  s21_decimal src = {{256951251, 1447695110, -858237558, 1507328}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 633965
  s21_decimal standart = {{633965, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_42) {
  // src = 449971420381214864,964671346
  s21_decimal src = {{-884910222, -1818123793, 24392999, 589824}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 449971420381214865
  s21_decimal standart = {{1860597905, 104767135, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_43) {
  // src = 3093836275,0150004239693220616
  s21_decimal src = {{-51410168, 1472581123, 1677172005, 1245184}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3093836275
  s21_decimal standart = {{-1201131021, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_44) {
  // src = -369865515076338,76603077269044
  s21_decimal src = {{-448391628, -574739994, 2005044974, -2146566144}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -369865515076339
  s21_decimal standart = {{111414003, 86116, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_45) {
  // src = 7545762525270696679,9216978239
  s21_decimal src = {{-1822250689, 2057708936, -204401235, 655360}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 7545762525270696680
  s21_decimal standart = {{-1640570136, 1756884745, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_46) {
  // src = -2006110662279065440947558,2215
  s21_decimal src = {{1897621767, 621260239, 1087514769, -2147221504}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2006110662279065440947558
  s21_decimal standart = {{2088832358, 2048332029, 108751, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_47) {
  // src = 6041904642745059845502,059583
  s21_decimal src = {{-1974025153, -82796357, 327532306, 393216}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6041904642745059845502
  s21_decimal standart = {{-1565448834, -2008726223, 327, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_48) {
  // src = -790513798863538442,45547588215
  s21_decimal src = {{128326263, -1983899824, -9583406, -2146762752}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -790513798863538442
  s21_decimal standart = {{-1689368310, 184055836, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_49) {
  // src = 55373310,750520932596341845936
  s21_decimal src = {{513322928, -1410954063, -1293174106, 1376256}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 55373311
  s21_decimal standart = {{55373311, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_50) {
  // src = -55145543868078,966880178016690
  s21_decimal src = {{1467486642, 1001995130, -1305521373, -2146500608}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -55145543868079
  s21_decimal standart = {{-1836212561, 12839, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_51) {
  // src = -2130287197938862,011620909052
  s21_decimal src = {{1863966716, 1723006016, 115483100, -2146697216}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2130287197938862
  s21_decimal standart = {{598992046, 495996, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_52) {
  // src = 2341130873694818657952,702570
  s21_decimal src = {{-2133221270, -143278075, 126912958, 393216}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2341130873694818657953
  s21_decimal standart = {{1334830753, -373838392, 126, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_53) {
  // src = -6274844407697,4433987726690382
  s21_decimal src = {{-88848306, 1791186978, -893367327, -2146435072}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6274844407697
  s21_decimal standart = {{-102811759, 1460, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_54) {
  // src = -3092322283904,3268646420909552
  s21_decimal src = {{508595696, 503387362, 1676351269, -2146435072}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3092322283904
  s21_decimal standart = {{-54169216, 719, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_55) {
  // src = -664232,07893777892082408423084
  s21_decimal src = {{-4260180, 405938368, -694157981, -2145976320}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -664232
  s21_decimal standart = {{664232, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_56) {
  // src = 7886505,2807536116631289428323
  s21_decimal src = {{-336889501, 1527867709, -19684217, 1441792}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 7886505
  s21_decimal standart = {{7886505, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_57) {
  // src = 3808942126298,7932108664379128
  s21_decimal src = {{-1784899848, 439607536, 2064831664, 1048576}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3808942126299
  s21_decimal standart = {{-693865253, 886, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_58) {
  // src = -78180809896142385725388,290190
  s21_decimal src = {{1618671758, -843145270, -56777100, -2147090432}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -78180809896142385725388
  s21_decimal standart = {{-1494466612, 816889051, 4238, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_59) {
  // src = 162602437633943494844,33638946
  s21_decimal src = {{-2047703518, -1413897168, 881469580, 524288}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 162602437633943494844
  s21_decimal standart = {{-3186500, -795875451, 8, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_60) {
  // src = -19267796784357608,650037064222
  s21_decimal src = {{684782110, -1587047175, 1044509356, -2146697216}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -19267796784357609
  s21_decimal standart = {{-2031116055, 4486133, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_61) {
  // src = -443840612246,59732487531491188
  s21_decimal src = {{-1715900556, 752847733, -1888902516, -2146369536}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -443840612247
  s21_decimal standart = {{1458980759, 103, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_62) {
  // src = -201595,85291988484515560379668
  s21_decimal src = {{557798676, 2143346984, 1092853308, -2145976320}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -201596
  s21_decimal standart = {{201596, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_63) {
  // src = 54437362597,048478949283048041
  s21_decimal src = {{-426923415, -1696275305, -1343911957, 1179648}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 54437362597
  s21_decimal standart = {{-1397212251, 12, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_64) {
  // src = -114477285667154860156293691,95
  s21_decimal src = {{-797892757, 441801772, 620582609, -2147352576}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -114477285667154860156293692
  s21_decimal standart = {{1581158972, 390965074, 6205826, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_65) {
  // src = -125056867354870,9346801904104
  s21_decimal src = {{-2014025240, -1566841381, 67793463, -2146631680}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -125056867354871
  s21_decimal standart = {{304597239, 29117, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_66) {
  // src = -732051759175405311,54064870487
  s21_decimal src = {{1638239319, 1499152810, -326506758, -2146762752}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -732051759175405312
  s21_decimal standart = {{1188663040, 170444082, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_67) {
  // src = -5364347060,9771366808181839588
  s21_decimal src = {{-891775260, -1121754587, -1386948928, -2146238464}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5364347061
  s21_decimal standart = {{1069379765, 1, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_68) {
  // src = -599,08155464529526321070727543
  s21_decimal src = {{-557588105, 911017647, -1047339681, -2145779712}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -599
  s21_decimal standart = {{599, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_69) {
  // src = -59703491525418456,828414700719
  s21_decimal src = {{-1888310097, -681054261, -1058434536, -2146697216}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -59703491525418457
  s21_decimal standart = {{1547247065, 13900802, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_70) {
  // src = -49714909298765684337104932789
  s21_decimal src = {{-708816971, 1426264316, -1599916663, -2147483648}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -49714909298765684337104932789
  s21_decimal standart = {{-708816971, 1426264316, -1599916663, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_71) {
  // src = 282804720536884965635,47184450
  s21_decimal src = {{-1576886974, -102077809, 1533087461, 524288}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 282804720536884965635
  s21_decimal standart = {{-190484221, 1421095670, 15, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_72) {
  // src = 6049607638274462489854186255,4
  s21_decimal src = {{-1757954406, 219202022, -1015468424, 65536}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6049607638274462489854186255
  s21_decimal standart = {{1971688207, 880913661, 327949887, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_73) {
  // src = -53677724891,442934457541840569
  s21_decimal src = {{-618934599, 296710770, -1385091999, -2146304000}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -53677724891
  s21_decimal standart = {{2138117339, 12, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_74) {
  // src = 554,46253629021577341255888936
  s21_decimal src = {{-476762072, 164814725, -1289219864, 1703936}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 554
  s21_decimal standart = {{554, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_75) {
  // src = -9169080648,976913995275047341
  s21_decimal src = {{144314797, -146980429, 497056857, -2146304000}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -9169080649
  s21_decimal standart = {{579146057, 2, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_76) {
  // src = -5601627,3603465697211615840474
  s21_decimal src = {{141330650, -983563648, -1258319020, -2146041856}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5601627
  s21_decimal standart = {{5601627, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_77) {
  // src = -5211191854608924803,4020729952
  s21_decimal src = {{2025661536, 12372156, -1469974531, -2146828288}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5211191854608924803
  s21_decimal standart = {{-1235238781, 1213325153, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_78) {
  // src = -127031183846,48694826647208586
  s21_decimal src = {{-1196375414, 2142472857, 688637427, -2146369536}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -127031183846
  s21_decimal standart = {{-1817835034, 29, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_79) {
  // src = 57477955616962,367185379588512
  s21_decimal src = {{545978784, 2133739936, -1179081079, 983040}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 57477955616962
  s21_decimal standart = {{-1591705406, 13382, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_80) {
  // src = -5873709390689,4351559574235975
  s21_decimal src = {{-1648022713, -141746534, -1110823056, -2146435072}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5873709390689
  s21_decimal standart = {{-1805870239, 1367, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_81) {
  // src = 1031795874908352,4226026601036
  s21_decimal src = {{-1782023604, -1852811376, 559337664, 851968}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1031795874908352
  s21_decimal standart = {{-1298478912, 240233, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_82) {
  // src = 30304116907677,110990942555367
  s21_decimal src = {{678481127, 1408369241, 1642789469, 983040}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 30304116907677
  s21_decimal standart = {{-1172332899, 7055, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_83) {
  // src = 515424414154,02021286057034756
  s21_decimal src = {{-1102101500, -475515248, -1500845949, 1114112}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 515424414154
  s21_decimal standart = {{28338634, 120, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_84) {
  // src = 1165183,2553960358846123984683
  s21_decimal src = {{-903624917, 1812722006, 631647108, 1441792}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1165183
  s21_decimal standart = {{1165183, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_85) {
  // src = -190,6132815002277859507593286
  s21_decimal src = {{-492281786, -199419676, 103331666, -2145845248}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -191
  s21_decimal standart = {{191, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_86) {
  // src = -1314725992924369778,3245074021
  s21_decimal src = {{-1549570459, -533083515, 712714388, -2146828288}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1314725992924369778
  s21_decimal standart = {{691721074, 306108499, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_87) {
  // src = 4984380,569424014261969761062
  s21_decimal src = {{-2094255322, 400302101, 270203812, 1376256}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4984381
  s21_decimal standart = {{4984381, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_88) {
  // src = 62891055265975127406260350,911
  s21_decimal src = {{1254715327, 1992039552, -885636359, 196608}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 62891055265975127406260351
  s21_decimal standart = {{-411062145, -268590901, 3409330, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_89) {
  // src = 7889,1124938829890082426329890
  s21_decimal src = {{1116478242, 1826375771, -18270844, 1638400}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 7889
  s21_decimal standart = {{7889, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_90) {
  // src = 3381521,4962927989731323871354
  s21_decimal src = {{156041338, 1260758175, 1833126476, 1441792}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3381521
  s21_decimal standart = {{3381521, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_91) {
  // src = -666967923067157,5806582315447
  s21_decimal src = {{1515051447, -1787657656, 361564035, -2146631680}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -666967923067158
  s21_decimal standart = {{-1843295978, 155290, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_92) {
  // src = -50892,172266389897917073354931
  s21_decimal src = {{-885362509, -1347231338, -1536097110, -2145910784}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -50892
  s21_decimal standart = {{50892, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_93) {
  // src = -61984758627708199,778208219213
  s21_decimal src = {{2043183181, 1106135484, -934766798, -2146697216}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -61984758627708200
  s21_decimal standart = {{1065233704, 14431951, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_94) {
  // src = -2690017217182955,9656826946671
  s21_decimal src = {{-797555601, 1918071976, 1458261255, -2146631680}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2690017217182956
  s21_decimal standart = {{1890286828, 626318, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_95) {
  // src = -7168753102662394268536216213,2
  s21_decimal src = {{910100948, -174443820, -408778453, -2147418112}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7168753102662394268536216213
  s21_decimal standart = {{1808997013, 1700542536, 388618884, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_96) {
  // src = -7393088912684284299,5151850910
  s21_decimal src = {{-1773417058, 1096927852, -287165766, -2146828288}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7393088912684284300
  s21_decimal standart = {{560789900, 1721337650, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_97) {
  // src = -3615670,3007956991418399464409
  s21_decimal src = {{-1813505063, -1902639802, 1960058797, -2146041856}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3615670
  s21_decimal standart = {{3615670, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_98) {
  // src = 59,889388404547007796116849369
  s21_decimal src = {{1715077849, -636075176, -1048357046, 1769472}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 60
  s21_decimal standart = {{60, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_99) {
  // src = 2,849717053293440058869278668
  s21_decimal src = {{-1231427636, 32155932, 154483471, 1769472}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3
  s21_decimal standart = {{3, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_100) {
  // src = -6197382,5270760193159500124411
  s21_decimal src = {{-758656773, -902961797, -935359497, -2146041856}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6197383
  s21_decimal standart = {{6197383, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_101) {
  // src = 18446744073709551615
  s21_decimal src = {{-1, -1, 0, 0}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 18446744073709551615
  s21_decimal standart = {{-1, -1, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_round_test_102) {
  // src = -18446744073709551615
  s21_decimal src = {{-1, -1, 0, -2147483648}};
  s21_decimal res = {0};
  int code = s21_round(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -18446744073709551615
  s21_decimal standart = {{-1, -1, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

//
//
//

START_TEST(s21_round_1) {
  s21_decimal dec1 = {0};
  dec1.bits[0] = 0b10010011111100000001110001010010;
  dec1.bits[1] = 0b00000000000000000000000100100000;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b00000000000010100000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b00000000000000000000000001111100;
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_round_2) {
  s21_decimal dec1 = {0};
  dec1.bits[0] = 0b00000000000000000000000010100100;  // -16.4
  dec1.bits[1] = 0b00000000000000000000000000000000;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b10000000000000010000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b00000000000000000000000000010000;
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_round_3) {
  s21_decimal dec1 = {0};
  dec1.bits[0] = 0b11111111111111111111111111111111;  //
  dec1.bits[1] = 0b00000000001111111111111111111111;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b00000000000000110000000000000000;
  s21_decimal result = {0};

  result.bits[0] = 0b01001101110100101111000110101001;  // 18014398509481
  result.bits[1] = 0b00000000000000000001000001100010;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_round_4) {
  s21_decimal dec1 = {0};
  dec1.bits[0] = 0b00000000000011110111001001110100;  // -10123.40
  dec1.bits[1] = 0b00000000000000000000000000000000;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b10000000000000110000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b00000000000000000000001111110100;  // -1012
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_round_5) {
  s21_decimal dec1 = {0};
  dec1.bits[0] = 0b10000000000000000000001111110100;  // 112590205.4327284
  dec1.bits[1] = 0b00000000000001000000000000000000;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b10000000000001110000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b00000110101101011111110101111101;  // 112590205
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_round_6) {
  s21_decimal dec1 = {0};
  dec1.bits[0] = 0b10000000000000000000001111110100;  // 2147484660
  dec1.bits[1] = 0b00000000000000000000000000000000;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b10000000000000000000001111110100;  // 2147484660
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_round_7) {
  s21_decimal dec1 = {0};

  dec1.bits[0] = 0b01100011000011111111111111111111;
  dec1.bits[1] = 0b01101011110001110101111000101101;
  dec1.bits[2] = 0b00000000000000000000000000000101;
  dec1.bits[3] = 0b10000000000010100000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b01010100000010111110010000000000;
  result.bits[1] = 0b00000000000000000000000000000010;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_round_8) {
  s21_decimal dec1 = {0};

  dec1.bits[0] = 0b01010101001110101110101110110001;
  dec1.bits[1] = 0b00001101101101001101101001011111;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b10000000000100100000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b00000000000000000000000000000001;
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_round_9) {
  s21_decimal dec1 = {0};

  dec1.bits[0] = 0b10010011111100000001110001010010;
  dec1.bits[1] = 0b00000000000000000000000100100000;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b00000000000010100000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b00000000000000000000000001111100;
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
}
END_TEST

START_TEST(s21_round_12) {
  s21_decimal dec1 = {0};

  dec1.bits[0] = 0b10010111011100111001111111111111;
  dec1.bits[1] = 0b00111100000010000011000110001101;
  dec1.bits[2] = 0b00000000000000000000000000000001;
  dec1.bits[3] = 0b00000000000001110000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  s21_decimal result = {0};
  result.bits[0] = 0b00110110101101101000110001000000;
  result.bits[1] = 0b00000000000000000000001000010010;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_round_13) {
  s21_decimal dec1 = {0};

  dec1.bits[0] = 0b10010111011100111001111111111111;
  dec1.bits[1] = 0b00111100000010000011000110001101;
  dec1.bits[2] = 0b00000000000000000000000000000001;
  dec1.bits[3] = 0b10000000000001110000000000000000;
  s21_decimal res1 = {0};
  s21_round(dec1, &res1);
  s21_decimal result = {0};
  result.bits[0] = 0b00110110101101101000110001000000;
  result.bits[1] = 0b00000000000000000000001000010010;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b10000000000000000000000000000000;

  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_roundTest1) {
  // 8053
  s21_decimal src1, origin;
  // src1 = 2;

  src1.bits[0] = 2;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 2;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest2) {
  // 8074
  s21_decimal src1, origin;
  // src1 = 3.5;

  src1.bits[0] = 0b00000000000000000000000000100011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b00000000000000000000000000000100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest3) {
  // 8095
  s21_decimal src1, origin;
  // src1 = -3.5;

  src1.bits[0] = 0b00000000000000000000000000100011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000010000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b00000000000000000000000000000100;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest4) {
  // 8116
  s21_decimal src1, origin;
  // src1 = 0;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
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

START_TEST(s21_roundTest5) {
  // 8137
  s21_decimal src1, origin;
  // src1 = -9878798789;

  src1.bits[0] = 0b01001100110100101000000111000101;
  src1.bits[1] = 0b00000000000000000000000000000010;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b01001100110100101000000111000101;
  origin.bits[1] = 0b00000000000000000000000000000010;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest6) {
  // 8158
  s21_decimal src1, origin;
  // src1 = -545454512454545.35265;

  src1.bits[0] = 0b11011110101101001010101001100001;
  src1.bits[1] = 0b11110100111110000101111011101001;
  src1.bits[2] = 0b00000000000000000000000000000010;
  src1.bits[3] = 0b10000000000001010000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b10000110011101001011101110010001;
  origin.bits[1] = 0b00000000000000011111000000010110;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest7) {
  // 8179
  s21_decimal src1, origin;
  // src1 = -5.492654545456454545645464;

  src1.bits[0] = 0b00000111100110110001111110011000;
  src1.bits[1] = 0b01100110010010001001000110100011;
  src1.bits[2] = 0b00000000000001001000101100011101;
  src1.bits[3] = 0b10000000000110000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b00000000000000000000000000000101;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest8) {
  // 8200
  s21_decimal src1, origin;
  // src1 = 7961327845421.879754123131254;

  src1.bits[0] = 0b01001110111001000011100101110110;
  src1.bits[1] = 0b01001011001101011010000111011001;
  src1.bits[2] = 0b00011001101110010111010010111111;
  src1.bits[3] = 0b00000000000011110000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b10100100000111100100000000101110;
  origin.bits[1] = 0b00000000000000000000011100111101;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest9) {
  // 8221
  s21_decimal src1, origin;
  // src1 = -12345677.187654345678987654346;

  src1.bits[0] = 0b01111000100010101111010011001010;
  src1.bits[1] = 0b01100010000010101110010010000111;
  src1.bits[2] = 0b00100111111001000001101011010101;
  src1.bits[3] = 0b10000000000101010000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
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

START_TEST(s21_roundTest10) {
  // 8242
  s21_decimal src1, origin;

  src1.bits[0] = 0b10101101110010001101100101011111;
  src1.bits[1] = 0b01001000101000101011010010000001;
  src1.bits[2] = 0b00000000000000000000000000000001;
  src1.bits[3] = 0b00000000000100110000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest11) {
  // 8263
  s21_decimal src1, origin;
  // src1 = 1;

  src1.bits[0] = 0b00000000000000000000000000000001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
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

START_TEST(s21_roundTest12) {
  // 8284
  s21_decimal src1, origin;
  // src1 = 1.1;

  src1.bits[0] = 0b00000000000000000000000000001011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
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

START_TEST(s21_roundTest13) {
  // 8305
  s21_decimal src1, origin;
  // src1 = -1.1;

  src1.bits[0] = 0b00000000000000000000000000001011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000010000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
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

START_TEST(s21_roundTest14) {
  // 8326
  s21_decimal src1, origin;
  // src1 = 24.56;

  src1.bits[0] = 0b00000000000000000000100110001000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000100000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b00000000000000000000000000011000;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_roundTest15) {
  // 8347
  s21_decimal src1, origin;
  // src1 = -2.124;

  src1.bits[0] = 0b00000000000000000000100001001100;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000110000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_round(src1, &result);
  origin.bits[0] = 0b00000000000000000000000000000010;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

Suite* suite_round(void) {
  Suite* s = suite_create("\033[42m-=S21_DECIMAL_ROUND=-\033[0m");
  TCase* tc = tcase_create("case_round");
  tcase_add_test(tc, s21_round_test_1);
  tcase_add_test(tc, s21_round_test_2);
  tcase_add_test(tc, s21_round_test_3);
  tcase_add_test(tc, s21_round_test_4);
  tcase_add_test(tc, s21_round_test_5);
  tcase_add_test(tc, s21_round_test_6);
  tcase_add_test(tc, s21_round_test_7);
  tcase_add_test(tc, s21_round_test_8);
  tcase_add_test(tc, s21_round_test_9);
  tcase_add_test(tc, s21_round_test_10);
  tcase_add_test(tc, s21_round_test_11);
  tcase_add_test(tc, s21_round_test_12);
  tcase_add_test(tc, s21_round_test_13);
  tcase_add_test(tc, s21_round_test_14);
  tcase_add_test(tc, s21_round_test_15);
  tcase_add_test(tc, s21_round_test_16);
  tcase_add_test(tc, s21_round_test_17);
  tcase_add_test(tc, s21_round_test_18);
  tcase_add_test(tc, s21_round_test_19);
  tcase_add_test(tc, s21_round_test_20);
  tcase_add_test(tc, s21_round_test_21);
  tcase_add_test(tc, s21_round_test_22);
  tcase_add_test(tc, s21_round_test_23);
  tcase_add_test(tc, s21_round_test_24);
  tcase_add_test(tc, s21_round_test_25);
  tcase_add_test(tc, s21_round_test_26);
  tcase_add_test(tc, s21_round_test_27);
  tcase_add_test(tc, s21_round_test_28);
  tcase_add_test(tc, s21_round_test_29);
  tcase_add_test(tc, s21_round_test_30);
  tcase_add_test(tc, s21_round_test_31);
  tcase_add_test(tc, s21_round_test_32);
  tcase_add_test(tc, s21_round_test_33);
  tcase_add_test(tc, s21_round_test_34);
  tcase_add_test(tc, s21_round_test_35);
  tcase_add_test(tc, s21_round_test_36);
  tcase_add_test(tc, s21_round_test_37);
  tcase_add_test(tc, s21_round_test_38);
  tcase_add_test(tc, s21_round_test_39);
  tcase_add_test(tc, s21_round_test_40);
  tcase_add_test(tc, s21_round_test_41);
  tcase_add_test(tc, s21_round_test_42);
  tcase_add_test(tc, s21_round_test_43);
  tcase_add_test(tc, s21_round_test_44);
  tcase_add_test(tc, s21_round_test_45);
  tcase_add_test(tc, s21_round_test_46);
  tcase_add_test(tc, s21_round_test_47);
  tcase_add_test(tc, s21_round_test_48);
  tcase_add_test(tc, s21_round_test_49);
  tcase_add_test(tc, s21_round_test_50);
  tcase_add_test(tc, s21_round_test_51);
  tcase_add_test(tc, s21_round_test_52);
  tcase_add_test(tc, s21_round_test_53);
  tcase_add_test(tc, s21_round_test_54);
  tcase_add_test(tc, s21_round_test_55);
  tcase_add_test(tc, s21_round_test_56);
  tcase_add_test(tc, s21_round_test_57);
  tcase_add_test(tc, s21_round_test_58);
  tcase_add_test(tc, s21_round_test_59);
  tcase_add_test(tc, s21_round_test_60);
  tcase_add_test(tc, s21_round_test_61);
  tcase_add_test(tc, s21_round_test_62);
  tcase_add_test(tc, s21_round_test_63);
  tcase_add_test(tc, s21_round_test_64);
  tcase_add_test(tc, s21_round_test_65);
  tcase_add_test(tc, s21_round_test_66);
  tcase_add_test(tc, s21_round_test_67);
  tcase_add_test(tc, s21_round_test_68);
  tcase_add_test(tc, s21_round_test_69);
  tcase_add_test(tc, s21_round_test_70);
  tcase_add_test(tc, s21_round_test_71);
  tcase_add_test(tc, s21_round_test_72);
  tcase_add_test(tc, s21_round_test_73);
  tcase_add_test(tc, s21_round_test_74);
  tcase_add_test(tc, s21_round_test_75);
  tcase_add_test(tc, s21_round_test_76);
  tcase_add_test(tc, s21_round_test_77);
  tcase_add_test(tc, s21_round_test_78);
  tcase_add_test(tc, s21_round_test_79);
  tcase_add_test(tc, s21_round_test_80);
  tcase_add_test(tc, s21_round_test_81);
  tcase_add_test(tc, s21_round_test_82);
  tcase_add_test(tc, s21_round_test_83);
  tcase_add_test(tc, s21_round_test_84);
  tcase_add_test(tc, s21_round_test_85);
  tcase_add_test(tc, s21_round_test_86);
  tcase_add_test(tc, s21_round_test_87);
  tcase_add_test(tc, s21_round_test_88);
  tcase_add_test(tc, s21_round_test_89);
  tcase_add_test(tc, s21_round_test_90);
  tcase_add_test(tc, s21_round_test_91);
  tcase_add_test(tc, s21_round_test_92);
  tcase_add_test(tc, s21_round_test_93);
  tcase_add_test(tc, s21_round_test_94);
  tcase_add_test(tc, s21_round_test_95);
  tcase_add_test(tc, s21_round_test_96);
  tcase_add_test(tc, s21_round_test_97);
  tcase_add_test(tc, s21_round_test_98);
  tcase_add_test(tc, s21_round_test_99);
  tcase_add_test(tc, s21_round_test_100);
  tcase_add_test(tc, s21_round_test_101);
  tcase_add_test(tc, s21_round_test_102);

  tcase_add_test(tc, s21_round_1);
  tcase_add_test(tc, s21_round_2);
  tcase_add_test(tc, s21_round_3);
  tcase_add_test(tc, s21_round_4);
  tcase_add_test(tc, s21_round_5);
  tcase_add_test(tc, s21_round_6);
  tcase_add_test(tc, s21_round_7);
  tcase_add_test(tc, s21_round_8);
  tcase_add_test(tc, s21_round_9);

  tcase_add_test(tc, s21_round_12);
  tcase_add_test(tc, s21_round_13);

  tcase_add_test(tc, s21_roundTest1);
  tcase_add_test(tc, s21_roundTest2);
  tcase_add_test(tc, s21_roundTest3);
  tcase_add_test(tc, s21_roundTest4);
  tcase_add_test(tc, s21_roundTest5);
  tcase_add_test(tc, s21_roundTest6);
  tcase_add_test(tc, s21_roundTest7);
  tcase_add_test(tc, s21_roundTest8);
  tcase_add_test(tc, s21_roundTest9);
  tcase_add_test(tc, s21_roundTest10);
  tcase_add_test(tc, s21_roundTest11);
  tcase_add_test(tc, s21_roundTest12);
  tcase_add_test(tc, s21_roundTest13);
  tcase_add_test(tc, s21_roundTest14);
  tcase_add_test(tc, s21_roundTest15);

  suite_add_tcase(s, tc);
  return s;
}