#include "tests.h"

START_TEST(s21_floor_test_1) {
  // src = -7565879978836374,0651634695365
  s21_decimal src = {{-365028155, -388739486, -193495542, -2146631680}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7565879978836375
  s21_decimal standart = {{-1265811049, 1761568, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_2) {
  // src = -7545,9093763119336548194854814
  s21_decimal src = {{-1106499682, -1769233870, -204321627, -2145845248}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7546
  s21_decimal standart = {{7546, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_3) {
  // src = -53070,73854013270340553207993
  s21_decimal src = {{1827729593, 442855475, 287697050, -2145976320}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -53071
  s21_decimal standart = {{53071, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_4) {
  // src = 24835069570058781822,116063028
  s21_decimal src = {{323118900, 362146019, 1346311819, 589824}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 24835069570058781822
  s21_decimal standart = {{796361854, 1487397937, 1, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_5) {
  // src = 4955,0806317102766437295471028
  s21_decimal src = {{1047017908, -555924183, -1608812704, 1638400}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4955
  s21_decimal standart = {{4955, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_6) {
  // src = -6191409276806481580254087942,9
  s21_decimal src = {{1304948293, 1418398367, -938597602, -2147418112}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6191409276806481580254087943
  s21_decimal standart = {{559991559, 1859826755, 335636969, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_7) {
  // src = 689613533702508931732218,3634
  s21_decimal src = {{-1750510638, -1254848110, 373840245, 262144}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 689613533702508931732218
  s21_decimal standart = {{-1414507782, 105530710, 37384, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_8) {
  // src = -1825503904195873835043832,8456
  s21_decimal src = {{-1563449208, 1739325529, 989607649, -2147221504}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1825503904195873835043833
  s21_decimal standart = {{1131138041, -1009572879, 98960, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_9) {
  // src = 6762861,6561721058360200857381
  s21_decimal src = {{1295845157, -342064781, -628812647, 1441792}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6762861
  s21_decimal standart = {{6762861, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_10) {
  // src = -24565627,109254931106333797499
  s21_decimal src = {{799878267, 69363398, 1331705314, -2146107392}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -24565628
  s21_decimal standart = {{24565628, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_11) {
  // src = 10,468943150164719322116558641
  s21_decimal src = {{1381928753, 1510932808, 567522545, 1769472}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 10
  s21_decimal standart = {{10, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_12) {
  // src = 6847491793010257756,7026962014
  s21_decimal src = {{989388382, 125377623, -582934557, 655360}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6847491793010257756
  s21_decimal standart = {{-1798869156, 1594305921, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_13) {
  // src = 629560894329506207759395974,39
  s21_decimal src = {{1817994367, -1203284055, -882110850, 131072}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 629560894329506207759395974
  s21_decimal standart = {{-1828655994, 2006601788, 34128564, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_14) {
  // src = -5999302523910072159,3330905723
  s21_decimal src = {{1689203323, -384248940, -1042738882, -2146828288}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5999302523910072160
  s21_decimal standart = {{499361632, 1396821468, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_15) {
  // src = 630004110890059616467756402,92
  s21_decimal src = {{-1023762204, -2108801484, -879708168, 131072}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 630004110890059616467756402
  s21_decimal standart = {{32712050, 1224452501, 34152591, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_16) {
  // src = 51478847617254,9159658985108
  s21_decimal src = {{-1405872492, 909841605, 27906739, 851968}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 51478847617254
  s21_decimal standart = {{-630392602, 11985, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_17) {
  // src = -711588888746765695828762,74083
  s21_decimal src = {{-510349917, 2057059254, -437436201, -2147155968}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -711588888746765695828763
  s21_decimal standart = {{1218691867, 1335540651, 38575, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_18) {
  // src = -66940417869430816236748895037
  s21_decimal src = {{-2013826243, 241457275, -666119972, -2147483648}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -66940417869430816236748895037
  s21_decimal standart = {{-2013826243, 241457275, -666119972, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_19) {
  // src = 440201062313012377489096254,46
  s21_decimal src = {{-1506914202, 1936921397, -1908632556, 131072}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 440201062313012377489096254
  s21_decimal standart = {{1617018430, 1737356132, 23863347, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_20) {
  // src = -746245579225593058938930,88011
  s21_decimal src = {{110076683, 87866657, -249561905, -2147155968}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -746245579225593058938931
  s21_decimal standart = {{-1744056269, 231542565, 40454, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_21) {
  // src = 37627783816216258930212,526040
  s21_decimal src = {{1072879576, -138174974, 2039806247, 393216}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 37627783816216258930212
  s21_decimal standart = {{1247405604, -832158642, 2039, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_22) {
  // src = 636995061370201693269344,27309
  s21_decimal src = {{-1358100819, 2360055, -841810149, 327680}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 636995061370201693269344
  s21_decimal standart = {{1055173984, -1840522312, 34531, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_23) {
  // src = 2936782671716396925701238176,6
  s21_decimal src = {{-526202810, 1702313559, 1592033076, 65536}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2936782671716396925701238176
  s21_decimal standart = {{-1770607200, -1547755563, 159203307, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_24) {
  // src = 41796750630601645,522379459569
  s21_decimal src = {{653904881, -744493604, -2029160905, 786432}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 41796750630601645
  s21_decimal standart = {{1511670701, 9731564, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_25) {
  // src = -3173,969628660439116480796153
  s21_decimal src = {{1737250297, 1459571163, 172061238, -2145910784}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3174
  s21_decimal standart = {{3174, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_26) {
  // src = 36730,261061107738061449411931
  s21_decimal src = {{-949011109, -340861718, 1991151441, 1572864}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 36730
  s21_decimal standart = {{36730, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_27) {
  // src = -2,310477624229610689778882165
  s21_decimal src = {{1254561397, -71105145, 125251242, -2145714176}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3
  s21_decimal standart = {{3, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_28) {
  // src = 35183525468,944510808946984362
  s21_decimal src = {{-172145238, 1960376572, 1907302737, 1179648}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 35183525468
  s21_decimal standart = {{823787100, 8, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_29) {
  // src = -244986852827932258417391633,24
  s21_decimal src = {{1406002876, 1426588423, 1328076390, -2147352576}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -244986852827932258417391634
  s21_decimal standart = {{-1575077870, -415230846, 13280763, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_30) {
  // src = 157936459315130914557131,34036
  s21_decimal src = {{-572668460, -2058719102, 856175261, 327680}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 157936459315130914557131
  s21_decimal standart = {{534760651, -1062509597, 8561, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_31) {
  // src = -3669272504170835242,9795914248
  s21_decimal src = {{1206465032, 995029461, 1989116610, -2146828288}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3669272504170835243
  s21_decimal standart = {{-483005141, 854319078, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_32) {
  // src = 4644680913661593023842686,1037
  s21_decimal src = {{2124074477, -1945927689, -1777080728, 262144}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4644680913661593023842686
  s21_decimal standart = {{-113604226, -1473797873, 251788, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_33) {
  // src = -139136526302958801584296577,30
  s21_decimal src = {{-1545520510, 1927462419, 754260620, -2147352576}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -139136526302958801584296578
  s21_decimal standart = {{1702531714, 878268083, 7542606, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_34) {
  // src = -1859538339316507,3955059299253
  s21_decimal src = {{-1042385995, -1488110772, 1008057753, -2146631680}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1859538339316508
  s21_decimal standart = {{-2111225060, 432957, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_35) {
  // src = 23,119725711279622940080926839
  s21_decimal src = {{795799671, 738378201, 1253322842, 1769472}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 23
  s21_decimal standart = {{23, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_36) {
  // src = -57523,346395848412815711475375
  s21_decimal src = {{-1242884433, -1929501025, -1176620440, -2145910784}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -57524
  s21_decimal standart = {{57524, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_37) {
  // src = 277619547560218794177514,76369
  s21_decimal src = {{-276293487, -231240208, 1504978582, 327680}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 277619547560218794177514
  s21_decimal standart = {{-800541718, -919855459, 15049, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_38) {
  // src = -146,58192126634888223309551752
  s21_decimal src = {{-1951803256, 1805488745, 794622187, -2145779712}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -147
  s21_decimal standart = {{147, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_39) {
  // src = 4070,4859729531092282675566235
  s21_decimal src = {{-1300752741, 2034812198, -2088352429, 1638400}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4070
  s21_decimal standart = {{4070, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_40) {
  // src = 26164686485,991224964449119166
  s21_decimal src = {{-542037058, -2037144869, 1418390496, 1179648}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 26164686485
  s21_decimal standart = {{394882709, 6, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_41) {
  // src = 32697062222213157132,258321493
  s21_decimal src = {{-1173281707, -1027094121, 1772511294, 589824}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 32697062222213157132
  s21_decimal standart = {{-908324596, -977056550, 1, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_42) {
  // src = -20801349586438544698254362,087
  s21_decimal src = {{-375585305, -1664918440, 1127643420, -2147287040}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -20801349586438544698254363
  s21_decimal standart = {{759833627, 1806516313, 1127643, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_43) {
  // src = -1161544302159319844551506,1128
  s21_decimal src = {{-1689176184, -345113992, 629674427, -2147221504}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1161544302159319844551507
  s21_decimal standart = {{1158183763, 1901777007, 62967, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_44) {
  // src = 4757196826459121343575695425
  s21_decimal src = {{818487361, -1248090313, 257888156, 0}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4757196826459121343575695425
  s21_decimal standart = {{818487361, -1248090313, 257888156, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_45) {
  // src = 2371518363510067636,7931808846
  s21_decimal src = {{1749425230, -414714405, 1285602680, 655360}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2371518363510067636
  s21_decimal standart = {{55923124, 552162147, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_46) {
  // src = -159,34776988114259833709729279
  s21_decimal src = {{2035095039, 1843722854, 863825991, -2145779712}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -160
  s21_decimal standart = {{160, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_47) {
  // src = -66403085351562,208669009424489
  s21_decimal src = {{-164646807, -450086245, -695248827, -2146500608}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -66403085351563
  s21_decimal standart = {{-1404011893, 15460, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_48) {
  // src = 22321614508423367810508514,719
  s21_decimal src = {{-1042160225, 733702926, 1210057147, 196608}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 22321614508423367810508514
  s21_decimal standart = {{1884448482, 632093895, 1210057, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_49) {
  // src = 2976922272538305,839119080468
  s21_decimal src = {{1203117076, -1029392828, 161379279, 786432}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2976922272538305
  s21_decimal standart = {{-1164697919, 693118, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_50) {
  // src = -36082330698152,061983761382266
  s21_decimal src = {{551041914, -1873277145, 1956027066, -2146500608}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -36082330698153
  s21_decimal standart = {{310444457, 8401, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_51) {
  // src = 240430910533243812668090991,48
  s21_decimal src = {{-1182362740, -1442875086, 1303378577, 131072}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 240430910533243812668090991
  s21_decimal standart = {{117025391, -959321556, 13033785, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_52) {
  // src = 194804480019682026207,38021508
  s21_decimal src = {{-1223350140, 1014649395, 1056037202, 524288}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 194804480019682026207
  s21_decimal standart = {{-1546394913, -1888187787, 10, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_53) {
  // src = 57010014016910,61231556036562
  s21_decimal src = {{-801830958, 1085843864, 309051905, 917504}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 57010014016910
  s21_decimal standart = {{-1381870194, 13273, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_54) {
  // src = -732409747477229368423505,17333
  s21_decimal src = {{-521905067, -765110163, -324566100, -2147155968}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -732409747477229368423506
  s21_decimal standart = {{1853273170, 51403107, 39704, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_55) {
  // src = -40474369415749008919,339375851
  s21_decimal src = {{1687067883, -2032393065, -2100847334, -2146893824}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -40474369415749008920
  s21_decimal standart = {{-1918403048, 833738890, 2, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_56) {
  // src = -1130727843392314275,4942368586
  s21_decimal src = {{-1103840438, 635217861, 612968792, -2146828288}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1130727843392314276
  s21_decimal standart = {{-1828004956, 263268091, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_57) {
  // src = 3025039502,8636011893757460790
  s21_decimal src = {{-769244874, 1845089433, 1639877200, 1245184}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3025039502
  s21_decimal standart = {{-1269927794, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_58) {
  // src = -502047362565,17373271771596003
  s21_decimal src = {{-331725597, -348341752, -1573363091, -2146369536}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -502047362566
  s21_decimal standart = {{-463811066, 116, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_59) {
  // src = -5332638365,2931698224703681655
  s21_decimal src = {{-882690953, 1568530022, -1404138246, -2146238464}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5332638366
  s21_decimal standart = {{1037671070, 1, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_60) {
  // src = -5751240960508388238764143641,2
  s21_decimal src = {{993757436, -277425381, -1177213325, -2147418112}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5751240960508388238764143642
  s21_decimal standart = {{528872474, 831250921, 311775397, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_61) {
  // src = 2202694606,856710791350506247
  s21_decimal src = {{-1742155001, -413143657, 119408313, 1179648}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2202694606
  s21_decimal standart = {{-2092272690, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_62) {
  // src = -20431851192167993465985235,217
  s21_decimal src = {{-1736247023, -2051043969, 1107612872, -2147287040}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -20431851192167993465985236
  s21_decimal standart = {{1888049364, -547511891, 1107612, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_63) {
  // src = 102,63226924756112931121421653
  s21_decimal src = {{-1698538155, 1832297556, 556370646, 1703936}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 102
  s21_decimal standart = {{102, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_64) {
  // src = -68780,525478450440446283715960
  s21_decimal src = {{1343067512, 1810448291, -566367539, -2145910784}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -68781
  s21_decimal standart = {{68781, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_65) {
  // src = -57,467699326950595913183047178
  s21_decimal src = {{-1251037686, -424429300, -1179637074, -2145714176}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -58
  s21_decimal standart = {{58, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_66) {
  // src = 7386368586938222249,7599456900
  s21_decimal src = {{-232257916, 1582923281, -290808862, 655360}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 7386368586938222249
  s21_decimal standart = {{1552844457, 1719772952, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_67) {
  // src = 55056499820173263385241470,201
  s21_decimal src = {{-1340717831, -1185489065, -1310348461, 196608}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 55056499820173263385241470
  s21_decimal standart = {{1682286462, -705560126, 2984618, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_68) {
  // src = -12933557844521725084771389640
  s21_decimal src = {{822448328, -1503798549, 701129575, -2147483648}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -12933557844521725084771389640
  s21_decimal standart = {{822448328, -1503798549, 701129575, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_69) {
  // src = 47331076765724,017801558526739
  s21_decimal src = {{-783774957, -971486623, -1729144484, 983040}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 47331076765724
  s21_decimal standart = {{537163804, 11020, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_70) {
  // src = 656672,31246460171178917861204
  s21_decimal src = {{-423782572, -317802489, -735139558, 1507328}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 656672
  s21_decimal standart = {{656672, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_71) {
  // src = -40187370802963546954677564990
  s21_decimal src = {{-1417726402, -1921222976, -2116405560, -2147483648}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -40187370802963546954677564990
  s21_decimal standart = {{-1417726402, -1921222976, -2116405560, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_72) {
  // src = 221871059325887416,68177814364
  s21_decimal src = {{-823811236, -1443380109, 1202765422, 720896}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 221871059325887416
  s21_decimal standart = {{-1928387656, 51658381, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_73) {
  // src = -7081246465352222,1521494345050
  s21_decimal src = {{-1831860902, -772710660, -456215896, -2146631680}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7081246465352223
  s21_decimal standart = {{740450847, 1648731, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_74) {
  // src = 5941388734888168898,7721684985
  s21_decimal src = {{-1596565511, -114556502, -1074134010, 655360}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5941388734888168898
  s21_decimal standart = {{1468288450, 1383337363, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_75) {
  // src = 37634,512036887891701334432742
  s21_decimal src = {{1562270694, -1970161893, 2040170985, 1572864}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 37634
  s21_decimal standart = {{37634, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_76) {
  // src = -142,82512293945964799315647697
  s21_decimal src = {{-122708783, -505272724, 774256542, -2145779712}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -143
  s21_decimal standart = {{143, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_77) {
  // src = 774529134871373390843008,64685
  s21_decimal src = {{-647770963, 1736483199, -96236443, 327680}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 774529134871373390843008
  s21_decimal standart = {{-1430745984, 1325143624, 41987, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_78) {
  // src = -745126649807560734560288491,9
  s21_decimal src = {{-556141257, 1069882844, 403933966, -2147418112}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -745126649807560734560288492
  s21_decimal standart = {{373882604, -1610998634, 40393396, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_79) {
  // src = -9691185625929059817793154,720
  s21_decimal src = {{-1502974304, 2059990818, 525360225, -2147287040}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -9691185625929059817793155
  s21_decimal standart = {{1798088323, 968427632, 525360, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_80) {
  // src = -750034686835881564,00693298456
  s21_decimal src = {{-956414696, -1998281524, -229021112, -2146762752}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -750034686835881565
  s21_decimal standart = {{-434964899, 174631058, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_81) {
  // src = 69339541081563680376387700263
  s21_decimal src = {{53904935, -47410841, -536063243, 0}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 69339541081563680376387700263
  s21_decimal standart = {{53904935, -47410841, -536063243, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_82) {
  // src = -564542563289017634811424928,25
  s21_decimal src = {{453705369, -461960217, -1234575929, -2147352576}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -564542563289017634811424929
  s21_decimal standart = {{476983457, -1379009137, 30603913, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_83) {
  // src = -582809939076307681405583370,18
  s21_decimal src = {{1804141562, 1990229251, -1135548286, -2147352576}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -582809939076307681405583371
  s21_decimal standart = {{490487819, 449399022, 31594190, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_84) {
  // src = -198135525744140314877000069,38
  s21_decimal src = {{-1503168486, 1253153816, 1074094837, -2147352576}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -198135525744140314877000070
  s21_decimal standart = {{-1346471546, 1601669437, 10740948, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_85) {
  // src = 83902000617207604541,01141804
  s21_decimal src = {{-928184020, -1179900129, 454833656, 524288}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 83902000617207604541
  s21_decimal standart = {{-1924946627, -1939879673, 4, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_86) {
  // src = -443558689192,10193065260652762
  s21_decimal src = {{-1902602022, 1007160141, -1890430824, -2146369536}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -443558689193
  s21_decimal standart = {{1177057705, 103, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_87) {
  // src = -11824,12850515484165644483504
  s21_decimal src = {{-2044986448, 279960127, 64098729, -2145976320}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -11825
  s21_decimal standart = {{11825, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_88) {
  // src = -2438508,697489065797937837757
  s21_decimal src = {{1352971965, 1598252436, 132191821, -2146107392}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2438509
  s21_decimal standart = {{2438509, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_89) {
  // src = -58706859077707702631835,743212
  s21_decimal src = {{924955628, -1749974039, -1112462089, -2147090432}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -58706859077707702631836
  s21_decimal standart = {{-1273332324, -2125117209, 3182, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_90) {
  // src = -11989136393786374141666765,747
  s21_decimal src = {{-1055020109, 938066604, 649932386, -2147287040}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -11989136393786374141666766
  s21_decimal standart = {{-598055474, 1658795442, 649932, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_91) {
  // src = -554375688981781174618591686,19
  s21_decimal src = {{389083499, -704471852, -1289690665, -2147352576}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -554375688981781174618591687
  s21_decimal standart = {{862884295, 1367344816, 30052766, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_92) {
  // src = 776294958355345,71071375203868
  s21_decimal src = {{1880153628, -1322634927, -86663895, 917504}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 776294958355345
  s21_decimal standart = {{1094439825, 180745, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_93) {
  // src = 3801560,9344921154644285741643
  s21_decimal src = {{601512523, 26577243, 2060830312, 1441792}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3801560
  s21_decimal standart = {{3801560, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_94) {
  // src = 69197,821377404227104776658869
  s21_decimal src = {{-483385419, 1856616404, -543745883, 1572864}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 69197
  s21_decimal standart = {{69197, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_95) {
  // src = -1931621426488,4461447755167156
  s21_decimal src = {{-673614412, -2108136572, 1047134073, -2146435072}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1931621426489
  s21_decimal standart = {{-1113856711, 449, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_96) {
  // src = 3171352515677,8075440888284659
  s21_decimal src = {{-961935885, -1685240586, 1719193643, 1048576}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3171352515677
  s21_decimal standart = {{1666651229, 738, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_97) {
  // src = 1058,2074227567566349897607326
  s21_decimal src = {{1846061214, 1488554419, 573655393, 1638400}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1058
  s21_decimal standart = {{1058, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_98) {
  // src = 3524,253154854022693004432997
  s21_decimal src = {{1223612005, 1477817561, 191050146, 1572864}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3524
  s21_decimal standart = {{3524, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_99) {
  // src = -638,80993922276572560912650151
  s21_decimal src = {{1352241063, -1918655317, -831971677, -2145779712}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -639
  s21_decimal standart = {{639, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_100) {
  // src = 4927644885582011888352023065,8
  s21_decimal src = {{684471554, 397503979, -1623685651, 65536}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4927644885582011888352023065
  s21_decimal standart = {{-361049575, -2107733251, 267128164, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_101) {
  // src = 18446744073709551615
  s21_decimal src = {{-1, -1, 0, 0}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 18446744073709551615
  s21_decimal standart = {{-1, -1, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_floor_test_102) {
  // src = -18446744073709551615
  s21_decimal src = {{-1, -1, 0, -2147483648}};
  s21_decimal res = {0};
  int code = s21_floor(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -18446744073709551615
  s21_decimal standart = {{-1, -1, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

//
//
//

START_TEST(floor_0) {
  s21_decimal val = {{2, 0, 0, 0}};
  s21_decimal res;
  ck_assert_int_eq(0, s21_floor(val, &res));
}
END_TEST

START_TEST(floor_1) {
  s21_decimal val = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {{0}};
  s21_floor(val, &res);
  float fres = 0;
  s21_from_decimal_to_float(res, &fres);
  ck_assert_float_eq(-2, fres);
}
END_TEST

START_TEST(floor_2) {
  s21_decimal val = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {{0}};
  set_scale_decimal(&val, 5);
  s21_floor(val, &res);
  float fres = 0;
  s21_from_decimal_to_float(res, &fres);
  ck_assert_float_eq(-1, fres);
}
END_TEST

START_TEST(floor_3) {
  s21_decimal val = {{2, 0, 0, 0}};
  s21_decimal res = {{0}};
  set_scale_decimal(&val, 5);
  s21_floor(val, &res);
  float fres = 0;
  s21_from_decimal_to_float(res, &fres);
  ck_assert_float_eq(0, fres);
}
END_TEST

START_TEST(floor_5) {
  s21_decimal value_1 = {{7444923, 0, 0, 0}};
  set_scale_decimal(&value_1, 5);
  s21_decimal check = {{74, 0, 0, 0}};
  s21_decimal result = {0};
  int return_value = s21_floor(value_1, &result);
  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(floor_6) {
  s21_decimal value_1 = {{7444923, 0, 0, 0}};
  set_scale_decimal(&value_1, 5);
  decimal_invert_sign(&value_1);
  s21_decimal check = {{75, 0, 0, 0}};
  decimal_invert_sign(&check);
  s21_decimal result = {0};
  int return_value = s21_floor(value_1, &result);
  ck_assert_int_eq(s21_is_equal(result, check), 1);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(floor_7) {
  s21_decimal src1;
  src1.bits[0] = 0b00001111111111111111111111111111;
  src1.bits[1] = 0b00111110001001010000001001100001;
  src1.bits[2] = 0b00100000010011111100111001011110;
  src1.bits[3] = 0b10000000000010100000000000000000;
  s21_decimal res_od = {0};
  s21_floor(src1, &res_od);
  s21_decimal result = {0};
  result.bits[0] = 0b10100111011001000000000000000000;
  result.bits[1] = 0b00001101111000001011011010110011;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b10000000000000000000000000000000;
  ck_assert_float_eq(res_od.bits[0], result.bits[0]);
  ck_assert_float_eq(res_od.bits[1], result.bits[1]);
  ck_assert_float_eq(res_od.bits[2], result.bits[2]);
  ck_assert_float_eq(res_od.bits[3], result.bits[3]);
}
END_TEST

Suite* suite_floor(void) {
  Suite* s = suite_create("\033[42m-=S21_DECIMAL_FLOOR=-\033[0m");
  TCase* tc1_1 = tcase_create("case_floor");
  tcase_add_test(tc1_1, s21_floor_test_1);
  tcase_add_test(tc1_1, s21_floor_test_2);
  tcase_add_test(tc1_1, s21_floor_test_3);
  tcase_add_test(tc1_1, s21_floor_test_4);
  tcase_add_test(tc1_1, s21_floor_test_5);
  tcase_add_test(tc1_1, s21_floor_test_6);
  tcase_add_test(tc1_1, s21_floor_test_7);
  tcase_add_test(tc1_1, s21_floor_test_8);
  tcase_add_test(tc1_1, s21_floor_test_9);
  tcase_add_test(tc1_1, s21_floor_test_10);
  tcase_add_test(tc1_1, s21_floor_test_11);
  tcase_add_test(tc1_1, s21_floor_test_12);
  tcase_add_test(tc1_1, s21_floor_test_13);
  tcase_add_test(tc1_1, s21_floor_test_14);
  tcase_add_test(tc1_1, s21_floor_test_15);
  tcase_add_test(tc1_1, s21_floor_test_16);
  tcase_add_test(tc1_1, s21_floor_test_17);
  tcase_add_test(tc1_1, s21_floor_test_18);
  tcase_add_test(tc1_1, s21_floor_test_19);
  tcase_add_test(tc1_1, s21_floor_test_20);
  tcase_add_test(tc1_1, s21_floor_test_21);
  tcase_add_test(tc1_1, s21_floor_test_22);
  tcase_add_test(tc1_1, s21_floor_test_23);
  tcase_add_test(tc1_1, s21_floor_test_24);
  tcase_add_test(tc1_1, s21_floor_test_25);
  tcase_add_test(tc1_1, s21_floor_test_26);
  tcase_add_test(tc1_1, s21_floor_test_27);
  tcase_add_test(tc1_1, s21_floor_test_28);
  tcase_add_test(tc1_1, s21_floor_test_29);
  tcase_add_test(tc1_1, s21_floor_test_30);
  tcase_add_test(tc1_1, s21_floor_test_31);
  tcase_add_test(tc1_1, s21_floor_test_32);
  tcase_add_test(tc1_1, s21_floor_test_33);
  tcase_add_test(tc1_1, s21_floor_test_34);
  tcase_add_test(tc1_1, s21_floor_test_35);
  tcase_add_test(tc1_1, s21_floor_test_36);
  tcase_add_test(tc1_1, s21_floor_test_37);
  tcase_add_test(tc1_1, s21_floor_test_38);
  tcase_add_test(tc1_1, s21_floor_test_39);
  tcase_add_test(tc1_1, s21_floor_test_40);
  tcase_add_test(tc1_1, s21_floor_test_41);
  tcase_add_test(tc1_1, s21_floor_test_42);
  tcase_add_test(tc1_1, s21_floor_test_43);
  tcase_add_test(tc1_1, s21_floor_test_44);
  tcase_add_test(tc1_1, s21_floor_test_45);
  tcase_add_test(tc1_1, s21_floor_test_46);
  tcase_add_test(tc1_1, s21_floor_test_47);
  tcase_add_test(tc1_1, s21_floor_test_48);
  tcase_add_test(tc1_1, s21_floor_test_49);
  tcase_add_test(tc1_1, s21_floor_test_50);
  tcase_add_test(tc1_1, s21_floor_test_51);
  tcase_add_test(tc1_1, s21_floor_test_52);
  tcase_add_test(tc1_1, s21_floor_test_53);
  tcase_add_test(tc1_1, s21_floor_test_54);
  tcase_add_test(tc1_1, s21_floor_test_55);
  tcase_add_test(tc1_1, s21_floor_test_56);
  tcase_add_test(tc1_1, s21_floor_test_57);
  tcase_add_test(tc1_1, s21_floor_test_58);
  tcase_add_test(tc1_1, s21_floor_test_59);
  tcase_add_test(tc1_1, s21_floor_test_60);
  tcase_add_test(tc1_1, s21_floor_test_61);
  tcase_add_test(tc1_1, s21_floor_test_62);
  tcase_add_test(tc1_1, s21_floor_test_63);
  tcase_add_test(tc1_1, s21_floor_test_64);
  tcase_add_test(tc1_1, s21_floor_test_65);
  tcase_add_test(tc1_1, s21_floor_test_66);
  tcase_add_test(tc1_1, s21_floor_test_67);
  tcase_add_test(tc1_1, s21_floor_test_68);
  tcase_add_test(tc1_1, s21_floor_test_69);
  tcase_add_test(tc1_1, s21_floor_test_70);
  tcase_add_test(tc1_1, s21_floor_test_71);
  tcase_add_test(tc1_1, s21_floor_test_72);
  tcase_add_test(tc1_1, s21_floor_test_73);
  tcase_add_test(tc1_1, s21_floor_test_74);
  tcase_add_test(tc1_1, s21_floor_test_75);
  tcase_add_test(tc1_1, s21_floor_test_76);
  tcase_add_test(tc1_1, s21_floor_test_77);
  tcase_add_test(tc1_1, s21_floor_test_78);
  tcase_add_test(tc1_1, s21_floor_test_79);
  tcase_add_test(tc1_1, s21_floor_test_80);
  tcase_add_test(tc1_1, s21_floor_test_81);
  tcase_add_test(tc1_1, s21_floor_test_82);
  tcase_add_test(tc1_1, s21_floor_test_83);
  tcase_add_test(tc1_1, s21_floor_test_84);
  tcase_add_test(tc1_1, s21_floor_test_85);
  tcase_add_test(tc1_1, s21_floor_test_86);
  tcase_add_test(tc1_1, s21_floor_test_87);
  tcase_add_test(tc1_1, s21_floor_test_88);
  tcase_add_test(tc1_1, s21_floor_test_89);
  tcase_add_test(tc1_1, s21_floor_test_90);
  tcase_add_test(tc1_1, s21_floor_test_91);
  tcase_add_test(tc1_1, s21_floor_test_92);
  tcase_add_test(tc1_1, s21_floor_test_93);
  tcase_add_test(tc1_1, s21_floor_test_94);
  tcase_add_test(tc1_1, s21_floor_test_95);
  tcase_add_test(tc1_1, s21_floor_test_96);
  tcase_add_test(tc1_1, s21_floor_test_97);
  tcase_add_test(tc1_1, s21_floor_test_98);
  tcase_add_test(tc1_1, s21_floor_test_99);
  tcase_add_test(tc1_1, s21_floor_test_100);
  tcase_add_test(tc1_1, s21_floor_test_101);
  tcase_add_test(tc1_1, s21_floor_test_102);

  tcase_add_test(tc1_1, floor_0);
  tcase_add_test(tc1_1, floor_1);
  tcase_add_test(tc1_1, floor_2);
  tcase_add_test(tc1_1, floor_3);
  tcase_add_test(tc1_1, floor_5);
  tcase_add_test(tc1_1, floor_6);
  tcase_add_test(tc1_1, floor_7);

  suite_add_tcase(s, tc1_1);
  return s;
}