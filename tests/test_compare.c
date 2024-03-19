#include "tests.h"

START_TEST(s21_comp_test_1) {
  // one = -7220469273786297,3791590055060
  // two = -18722255582057499,779825980344
  s21_decimal one = {{-1785299820, -2139030873, -380743060, -2146631680}};
  s21_decimal two = {{1877529528, -881412418, 1014935508, -2146697216}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_2) {
  // one = 5936531584124773260299310169,6
  // two = -21088740,72161500673276640794
  s21_decimal one = {{1142147968, 1152967423, -1076767076, 65536}};
  s21_decimal two = {{-1811677670, -2032410420, 114322292, -2146172928}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_3) {
  // one = 11865598740046394877,236882693
  // two = -60459913792,893813310183828451
  s21_decimal one = {{15346949, -1761029898, 643235396, 589824}};
  s21_decimal two = {{839248867, 545844555, -1017428802, -2146304000}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_4) {
  // one = -61278403924,324390642586278675
  // two = 3354427168,4055592914042232419
  s21_decimal one = {{-593437933, 257003279, -973058363, -2146304000}};
  s21_decimal two = {{-401334685, -1224696129, 1818438611, 1245184}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_5) {
  // one = 145220,37392407413735948120262
  // two = -19530797306094276878114205253
  s21_decimal one = {{-670207802, 2096770354, 787241224, 1507328}};
  s21_decimal two = {{-298865083, 2070486162, 1058766643, -2147483648}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_6) {
  // one = 7,287611105270625047528515710
  // two = 3756619735799,1669009114369629
  s21_decimal one = {{-668555138, -1596890353, 395062189, 1769472}};
  s21_decimal two = {{-325415331, 1622162865, 2036467639, 1048576}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_7) {
  // one = 272709,09746316866389808602720
  // two = 5233,9201640402197967676097872
  s21_decimal one = {{190144096, -1586375561, 1478358979, 1507328}};
  s21_decimal two = {{1230488912, 1005224309, -1457653490, 1638400}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_8) {
  // one = 48616354061328189719,146662725
  // two = -779261449182,89160052139849567
  s21_decimal one = {{817892165, -1800342925, -1659469462, 589824}};
  s21_decimal two = {{-1348503713, -1325135122, -70582516, -2146369536}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_9) {
  // one = 7415517201383187031362,736973
  // two = 723646888713088,40043447052160
  s21_decimal one = {{-2071096499, -33655522, 401995992, 393216}};
  s21_decimal two = {{424667008, 1183403113, -372069652, 917504}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_10) {
  // one = -363165,6922870008892297580392
  // two = -744,0230175537875424142408449
  s21_decimal one = {{1207701352, 1180619004, 196872516, -2146041856}};
  s21_decimal two = {{-1232618751, 23701893, 403335686, -2145845248}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_11) {
  // one = -810221828620337528461,6000900
  // two = 69266,467123993282688365982636
  s21_decimal one = {{1738110340, 1686521992, 439222133, -2147024896}};
  s21_decimal two = {{109409196, -809754382, -540024590, 1572864}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_12) {
  // one = 36884789706793083,960204762367
  // two = 14805508,981407065544928433213
  s21_decimal one = {{1173921023, -1766083308, 1999528456, 786432}};
  s21_decimal two = {{41325629, 514362779, 802608250, 1376256}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_13) {
  // one = 5785386564696793870177950267,6
  // two = 54311779820408873584261046,182
  s21_decimal one = {{-1310489004, 242049893, -1158702955, 65536}};
  s21_decimal two = {{-266625114, -1537237389, -1350719813, 196608}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_14) {
  // one = 2728693,8867470153496868152452
  // two = 674656,53588518863524936506542
  s21_decimal one = {{1051190404, 126763893, 1479227920, 1441792}};
  s21_decimal two = {{-74490706, 1895502223, -637646887, 1507328}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_15) {
  // one = -11879473777043075456271,545679
  // two = 17631321204081,878333407798235
  s21_decimal one = {{1623094607, -632501937, 643987563, -2147090432}};
  s21_decimal two = {{-622681125, -1448410639, 955795837, 983040}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_16) {
  // one = 59688244838941410608,596164221
  // two = 650516616531667,27704161941651
  s21_decimal one = {{989896317, 1337232718, -1059261060, 589824}};
  s21_decimal two = {{1962801299, 1751347438, -768509652, 917504}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_17) {
  // one = -751026643472094482852554880,12
  // two = -165258173666116661,31937319908
  s21_decimal one = {{-2096901620, 1008055134, -223643704, -2147352576}};
  s21_decimal two = {{-1378165788, -1937235055, 895866354, -2146762752}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_18) {
  // one = 71957020569481352,752066651392
  // two = 75079126,648086635824967299127
  s21_decimal one = {{-1118116608, 1506634178, -394169395, 786432}};
  s21_decimal two = {{-757092297, 36476962, -224919685, 1376256}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_19) {
  // one = -53543856381451660687421965,144
  // two = 34450159699,933281756817676594
  s21_decimal one = {{-1633713320, -1713320283, -1392349026, -2147287040}};
  s21_decimal two = {{1273256242, 1962851083, 1867546899, 1179648}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_20) {
  // one = 100748652381020588045256700,9
  // two = -1346058661007741241374598269
  s21_decimal one = {{-1889873951, -458510500, 54615953, 65536}};
  s21_decimal two = {{1572136061, 978720442, 72969986, -2147483648}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_21) {
  // one = -721593570601210231082331,56440
  // two = -38464110811936494396,475826174
  s21_decimal one = {{527030104, 2091742627, -383200712, -2147155968}};
  s21_decimal two = {{1319231486, 1079051928, 2085143625, -2146893824}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_22) {
  // one = 70633,090643090035006619284102
  // two = -25318389212086401069697757320
  s21_decimal one = {{-934251898, 988652388, -465939780, 1572864}};
  s21_decimal two = {{964456584, 1627284707, 1372512629, -2147483648}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_23) {
  // one = 4740438,6321381243541557003019
  // two = 50360557389500815162213329966
  s21_decimal one = {{1762575115, -1077247798, -1725170365, 1441792}};
  s21_decimal two = {{116321326, 1992372559, -1564916010, 0}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_24) {
  // one = 6321144516910,8846697106246932
  // two = -7182165,8740158116824068323694
  s21_decimal one = {{-735965932, -365897756, -868267988, 1048576}};
  s21_decimal two = {{-1393886866, -517125303, -401507375, -2146041856}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_25) {
  // one = -596895180,10024121376411039000
  // two = -222947784,17698018612351820548
  s21_decimal one = {{1663120664, 232099136, -1059192041, -2146172928}};
  s21_decimal two = {{-570727676, -955387817, 1208602359, -2146172928}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_26) {
  // one = 9,648569866321293089720675816
  // two = 5053469001645299870756324623,6
  s21_decimal one = {{-1551979032, -2052195704, 523050020, 1769472}};
  s21_decimal two = {{1334096540, 369339916, -1555476261, 65536}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_27) {
  // one = -10723749011166715276905,963426
  // two = 16841568073697666173979248,047
  s21_decimal one = {{-1995939934, -1053076020, 581335598, -2147090432}};
  s21_decimal two = {{1868219823, -1381793691, 912983234, 196608}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_28) {
  // one = -3650743,9575468161047427413383
  // two = -24949838307576707428275160,719
  s21_decimal one = {{982644103, -84640510, 1979072264, -2146041856}};
  s21_decimal two = {{-883456369, -808156643, 1352533444, -2147287040}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_29) {
  // one = -5556145540,6859872124252632747
  // two = 4621980313193911,0603167673118
  s21_decimal one = {{-162613589, -306241903, -1282974764, -2146238464}};
  s21_decimal two = {{-1784108258, 1610764272, -1789386748, 851968}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_30) {
  // one = 5636942132695572835789,4865104
  // two = 557622681247,55132906751982308
  s21_decimal one = {{-779140912, 952650982, -1239174843, 458752}};
  s21_decimal two = {{-283575580, 768522225, -1272088684, 1114112}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_31) {
  // one = 448,18140910103497204836446672
  // two = 41,101511082103842728958362455
  s21_decimal one = {{-394415664, 321193663, -1865371009, 1703936}};
  s21_decimal two = {{410649431, 1643688814, -2066849916, 1769472}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_32) {
  // one = -275535822422097,9753179479576
  // two = 27363121224912,132534367293107
  s21_decimal one = {{-1726939624, -1572776675, 149368268, -2146631680}};
  s21_decimal two = {{-2027286861, -422205747, 1483357773, 983040}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_33) {
  // one = 121159568506,36447406997142802
  // two = 374466,9259441854102723755761
  s21_decimal one = {{-959415022, -171655534, 656807336, 1114112}};
  s21_decimal two = {{-441319695, 1358614818, 202998927, 1441792}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_34) {
  // one = -406049526170595914956,71636374
  // two = -6349,6515262685278787675082085
  s21_decimal one = {{-1171758698, 233426724, -2093768404, -2146959360}};
  s21_decimal two = {{1806945637, -1489844802, -852814307, -2145845248}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_35) {
  // one = -7167782940860065271937956945,6
  // two = 496874432,45045951824481008814
  s21_decimal one = {{343792432, 826825691, -409304378, -2147418112}};
  s21_decimal two = {{-947077970, -1819128413, -1601405601, 1310720}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_36) {
  // one = -16046538969,318701970519645445
  // two = -1963447311799999151025322837,0
  s21_decimal one = {{-775004923, -1844979684, 869884620, -2146304000}};
  s21_decimal two = {{-1017065134, -2116597068, 1064386920, -2147418112}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_37) {
  // one = -408198535124889367497642,14807
  // two = -57928325685788032314091,136014
  s21_decimal one = {{225738775, -261873986, -2082118604, -2147155968}};
  s21_decimal two = {{-1197317106, -648704744, -1154666469, -2147090432}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_38) {
  // one = 4431593634,9590671911175069535
  // two = 79022416,872260863961654472223
  s21_decimal one = {{1807228767, 1278942775, -1892595573, 1245184}};
  s21_decimal two = {{2008919583, 1709484823, -11153494, 1376256}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_39) {
  // one = 44947774,541969694341595854036
  // two = 185356413377324038,03597422079
  s21_decimal one = {{-56953644, 1458612039, -1858343556, 1376256}};
  s21_decimal two = {{-1848263169, 1456336182, 1004819130, 720896}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_40) {
  // one = 1060078931972099621113,7095638
  // two = -49092350371540613186268387,035
  s21_decimal one = {{167159766, -2039543229, 574669940, 458752}};
  s21_decimal two = {{1494701787, 1126117572, -1633665650, -2147287040}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_41) {
  // one = 55316398939790294735290734,17
  // two = 6645111524278372,5036898998769
  s21_decimal one = {{-1903522039, -2048796215, 299870799, 131072}};
  s21_decimal two = {{2069486065, -2080754222, -692645121, 851968}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_42) {
  // one = -1746525997,1519787319435008463
  // two = -4079,08900885610655911437933
  s21_decimal one = {{584653263, 890319385, 946793640, -2146238464}};
  s21_decimal two = {{485942893, -748107416, 22112785, -2145976320}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_43) {
  // one = 18158038,648920568541496485630
  // two = 356574611608057917,02465462120
  s21_decimal one = {{2049713918, -1882176186, 984349247, 1376256}};
  s21_decimal two = {{705249128, -888384751, 1932994842, 720896}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_44) {
  // one = 9,785798952061646473296680440
  // two = 2752305126488914,6623805599382
  s21_decimal one = {{1512117752, 715457749, 530489224, 1769472}};
  s21_decimal two = {{355184278, -1111811655, 1492027598, 851968}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_45) {
  // one = 5229074636056,1508368270203198
  // two = -7009239971269791521,1451522781
  s21_decimal one = {{1913100606, 1075732912, -1460280256, 1048576}};
  s21_decimal two = {{-1150755107, 693514060, -495250694, -2146828288}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_46) {
  // one = -4920,2999975735936566441931356
  // two = -419189984108675854,90000444591
  s21_decimal one = {{775549532, 1395246836, -1627667323, -2145845248}};
  s21_decimal two = {{-2018870097, 1176615780, -2022533839, -2146762752}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_47) {
  // one = -3928156061103953,5308983100276
  // two = -56462867888017,44576760829183
  s21_decimal one = {{45212532, -1479598364, 2129457667, -2146631680}};
  s21_decimal two = {{-1627597569, 621708116, 306085820, -2146566144}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_48) {
  // one = -235927596199924746318,4141769
  // two = 507639324764,43174896774212003
  s21_decimal one = {{554765769, 749989874, 127896606, -2147024896}};
  s21_decimal two = {{1594419619, -1102272570, -1543049003, 1114112}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_49) {
  // one = 6332788697402928425563,7875373
  // two = -3936106246848656388212153,3353
  s21_decimal one = {{839297709, -824842563, -861955665, 458752}};
  s21_decimal two = {{687052713, -70698497, 2133767471, -2147221504}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_50) {
  // one = -152260997697535737468548,25843
  // two = 285078258310547,97011339309229
  s21_decimal one = {{714837875, 1900064221, 825408522, -2147155968}};
  s21_decimal two = {{1977479341, -243096907, 1545412334, 917504}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_51) {
  // one = 678814322596853670308,7817105
  // two = -250911,86191045489179115109124
  s21_decimal one = {{2042507665, -1559535282, 367985981, 458752}};
  s21_decimal two = {{1629731588, -307131293, 1360195928, -2145976320}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_52) {
  // one = -79203171475086123416884884,840
  // two = -5051321,910686116396280199959
  s21_decimal one = {{615527784, 221257352, -1354767, -2147287040}};
  s21_decimal two = {{-235783401, 2037858170, 273832709, -2146107392}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_53) {
  // one = -3943094839974108697,0127429761
  // two = 4891982208737015269,8260214100
  s21_decimal one = {{1434038401, -394468906, 2137555995, -2146828288}};
  s21_decimal two = {{741331284, 1015992522, -1643018427, 655360}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_54) {
  // one = -33048987730833838124,284176713
  // two = 52,915226589339072878424975525
  s21_decimal one = {{-332732087, -812429841, 1791589214, -2146893824}};
  s21_decimal two = {{-992909147, 1229252280, -1426427115, 1769472}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_55) {
  // one = -981151,7698124261482486100962
  // two = -281316286541866,21085713339078
  s21_decimal one = {{631305186, 791626891, 531883440, -2146041856}};
  s21_decimal two = {{109220550, 520679298, 1525018645, -2146566144}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_56) {
  // one = 7316812382399163450327,7938977
  // two = 29680254036,269547455048301574
  s21_decimal one = {{-1807546079, 1430250820, -328515356, 458752}};
  s21_decimal two = {{-787235834, 1298176427, 1608969795, 1179648}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_57) {
  // one = 318367,86617161339112741637767
  // two = 75,856076218811290722211797275
  s21_decimal one = {{1251708551, -1012805385, 1725875660, 1507328}};
  s21_decimal two = {{-39249637, -1575993151, -182801165, 1769472}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_58) {
  // one = -16616,555570967473963935111160
  // two = 94085399,62831452317300400436
  s21_decimal one = {{-11364360, 1990512647, 900785282, -2145910784}};
  s21_decimal two = {{-1257922252, 1636070669, 510037973, 1310720}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_59) {
  // one = 1871501994140689,5599321304490
  // two = -5849718,7419241693519771194817
  s21_decimal one = {{363548074, -304321173, 1014543263, 851968}};
  s21_decimal two = {{2131088833, 909150640, -1123828412, -2146041856}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_60) {
  // one = -8635042867,959216034852302525
  // two = 6054105498288890325462979931,6
  s21_decimal one = {{-718868803, -655660510, 468106611, -2146304000}};
  s21_decimal two = {{-1740778092, -641555935, -1013030130, 65536}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_61) {
  // one = 18,258922572728156878479666031
  // two = 549285368032319,22922781991561
  s21_decimal one = {{339323759, 128093861, 989818176, 1769472}};
  s21_decimal two = {{559735433, -1392850244, -1317285350, 917504}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_62) {
  // one = -78327,987678640736153435455760
  // two = 1793966,3666679418331341723767
  s21_decimal one = {{16597264, 1632111081, -48798576, -2145910784}};
  s21_decimal two = {{1661671543, 230445533, 972511116, 1441792}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_63) {
  // one = -63603,102519318562452364746145
  // two = 1217448530686673393297631,5302
  s21_decimal one = {{913726881, 1774561443, -847036200, -2145910784}};
  s21_decimal two = {{-1501783130, -301127450, 659980170, 262144}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_64) {
  // one = -1102215754839645515,9495729852
  // two = -74813118151298853328127793,345
  s21_decimal one = {{-1622334788, -118339629, 597512357, -2146828288}};
  s21_decimal two = {{1975261377, -2136114444, -239340035, -2147287040}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_65) {
  // one = 331546,01860890692541250012683
  // two = 330877609887123636,95233966788
  s21_decimal one = {{1759249931, 1174595584, 1797314568, 1507328}};
  s21_decimal two = {{1027482308, 1426587748, 1793691117, 720896}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_66) {
  // one = -28959722243478042316796177131
  // two = 1021775,1337821464353722648868
  s21_decimal one = {{-1838568725, -1942252959, 1569909688, -2147483648}};
  s21_decimal two = {{843893028, -347312320, 553905409, 1441792}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_67) {
  // one = 6701486474048822,3179864511419
  // two = 2926277808568873434725,1647546
  s21_decimal one = {{-167799877, 98690163, -662084199, 851968}};
  s21_decimal two = {{-1795193798, -1403394221, 1586338378, 458752}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_68) {
  // one = -4753383404535913709199912635,0
  // two = 31998790982487115,163932444457
  s21_decimal one = {{-921021618, -312714390, -1718152990, -2147418112}};
  s21_decimal two = {{4081449, 26220588, 1734657935, 786432}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_69) {
  // one = 45932206544606340027034,456908
  // two = 35892494074142345431584,196594
  s21_decimal one = {{-1984081076, 583063002, -1804977390, 393216}};
  s21_decimal two = {{614582258, -1909494147, 1945736002, 393216}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_70) {
  // one = 50668,595636438502240350900119
  // two = 5598043231408709,3365865283502
  s21_decimal one = {{-1817964649, 1249013924, -1548217223, 1572864}};
  s21_decimal two = {{-1722187858, -1801532423, -1260261980, 851968}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_71) {
  // one = -5895917254,9691977338401968851
  // two = -48,491351599145811439968477750
  s21_decimal one = {{1409667795, 1358017003, -1098784148, -2146238464}};
  s21_decimal two = {{-1629593034, -2028872045, -1666245859, -2145714176}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_72) {
  // one = 17299643480,578846719007322492
  // two = -27331239988328662826225028,184
  s21_decimal one = {{-1540034180, 1045454964, 937815552, 1179648}};
  s21_decimal two = {{-531313576, -1703248935, 1481629488, -2147287040}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_73) {
  // one = -618548119283309813,19003404915
  // two = 65445045523206559512841883180
  s21_decimal one = {{-136512909, -1851400686, -941811223, -2146762752}};
  s21_decimal two = {{878120492, -1143902689, -747184270, 0}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_74) {
  // one = 4344226465035490387224,457585
  // two = -4262416810937,0250522529622628
  s21_decimal one = {{1096315249, -1898267753, 235500988, 393216}};
  s21_decimal two = {{1474030180, 980665970, -1984306513, -2146435072}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_75) {
  // one = 4121561061652315917654040,9107
  // two = -438659,09155336647894059254075
  s21_decimal one = {{1871531283, -1986201190, -2060664568, 262144}};
  s21_decimal two = {{-1401618117, 916497151, -1916991596, -2145976320}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_76) {
  // one = 1244043397326687358558347858,3
  // two = -10070691456412994,797121484800
  s21_decimal one = {{274159415, 102739941, 674397277, 65536}};
  s21_decimal two = {{-1702709248, -971912951, 545933277, -2146697216}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_77) {
  // one = -43644654115878,392137092516921
  // two = 4811928942228183,5333974617580
  s21_decimal one = {{-1819194311, 2107490101, -1928985856, -2146500608}};
  s21_decimal two = {{-819073556, -2126713307, -1686415390, 851968}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_78) {
  // one = -673186,33284034403732928578029
  // two = -31,960295863512174877658121259
  s21_decimal one = {{716685805, -1008224589, -645616874, -2145976320}};
  s21_decimal two = {{439157803, 1825228151, 1732571110, -2145714176}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_79) {
  // one = -7893,9128506818055133148370303
  // two = -63148882703931386,492469735087
  s21_decimal one = {{-1733929601, 258674947, -15668565, -2145845248}};
  s21_decimal two = {{1662873263, -507943292, -871659506, -2146697216}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_80) {
  // one = 42166249259165608044757453,9
  // two = -26917021357302187810356869015
  s21_decimal one = {{859247115, -2035057201, 22858369, 65536}};
  s21_decimal two = {{1515861911, -1626557093, 1459174651, -2147483648}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_81) {
  // one = 6013,0553314287244454899067261
  // two = 636507423079038918607718268,60
  s21_decimal one = {{-1405245059, -836298998, -1035283470, 1638400}};
  s21_decimal two = {{-1621627732, -2030572504, -844453642, 131072}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_82) {
  // one = -6464603634094795,3760464545925
  // two = 572482154271799316981,08985663
  s21_decimal one = {{424421509, 737154104, -790498644, -2146631680}};
  s21_decimal two = {{-506826433, -629931642, -1191535320, 524288}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_83) {
  // one = 7569916128017244,9613600621360
  // two = -390,97757438765765738947616115
  s21_decimal one = {{860980016, -1010702687, -191307541, 851968}};
  s21_decimal two = {{-262464141, -1198052178, 2119493677, -2145779712}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_84) {
  // one = -38220,243953464713260172954620
  // two = 5255,8014863573379921347211055
  s21_decimal one = {{-1138111492, 1561737500, 2071923576, -2145910784}};
  s21_decimal two = {{-1441140945, -727633721, -1445791602, 1638400}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_85) {
  // one = 1413273486027348494,0898044895
  // two = 2917549647883181,7379719301788
  s21_decimal one = {{676695007, -285586479, 766137091, 655360}};
  s21_decimal two = {{635587228, 1222485417, 1581606833, 851968}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_86) {
  // one = -56650480213682161253358551,429
  // two = -2356019351,3724069209104266988
  s21_decimal one = {{-299056763, 4570420, -1223938610, -2147287040}};
  s21_decimal two = {{1333343980, -1769843052, 1277200649, -2146238464}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_87) {
  // one = 716588470948644848902,99429860
  // two = -3012098339448385796932300611,7
  s21_decimal one = {{-1542097948, -416901188, -410333412, 524288}};
  s21_decimal two = {{-1887086427, -1353085934, 1632861781, -2147418112}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_88) {
  // one = -202380398820261799956,07858706
  // two = 5506092,5850967239070725680934
  s21_decimal one = {{-1454014958, 1490582618, 1097106340, -2146959360}};
  s21_decimal two = {{765701926, 1434938382, -1310108525, 1441792}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_89) {
  // one = 3157660406163704,4483084497514
  // two = 21724607,166137297415430460973
  s21_decimal one = {{-2068598166, 717578823, 1711771136, 851968}};
  s21_decimal two = {{1602737709, 1271356665, 1177693314, 1376256}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_90) {
  // one = 464125798255450845899,41683258
  // two = -13,425273764603374956031500394
  s21_decimal one = {{-1389923270, -534106007, -1778936303, 524288}};
  s21_decimal two = {{1756356714, 385607701, 727785549, -2145714176}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_91) {
  // one = 53908286151571829540931512,01
  // two = -779189687655710,24824393912399
  s21_decimal one = {{1546912737, -848161321, 292237404, 131072}};
  s21_decimal two = {{-2000564145, -1403967093, -70971536, -2146566144}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_92) {
  // one = -5344,5219559822176598652266724
  // two = -4364011047,9033924859366679754
  s21_decimal one = {{-2071287580, -918268545, -1397696139, -2145845248}};
  s21_decimal two = {{746005706, 1906108404, -1929232167, -2146238464}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_93) {
  // one = 331207792675081019,76565566163
  // two = 353,0749079411108978367728830
  s21_decimal one = {{-1526117677, -806350393, 1795481041, 720896}};
  s21_decimal two = {{395381950, 515121019, 191402291, 1638400}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_94) {
  // one = 72596189071115027481796111,178
  // two = -2300563894329394469,4660226929
  s21_decimal one = {{2092526410, 1089063463, -359520001, 196608}};
  s21_decimal two = {{-571383951, 372893223, 1247138186, -2146828288}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_95) {
  // one = 7876422,9180748044381329644134
  // two = 1265043377884759856704023,2995
  s21_decimal one = {{-858695066, -1736628621, -25149877, 1441792}};
  s21_decimal two = {{-652726749, 1269286469, 685781389, 262144}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_96) {
  // one = -191520201859,36315812579241039
  // two = 7692672785954549117038992,5390
  s21_decimal one = {{2049043535, -1486404821, 1038233094, -2146369536}};
  s21_decimal two = {{1914707470, 1614993587, -124761023, 262144}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_97) {
  // one = -6721404523121988709355639325,2
  // two = -360585543598684965190567254,81
  s21_decimal one = {{24851748, 263616671, -651286603, -2147418112}};
  s21_decimal two = {{679876073, -1362346106, 1954738148, -2147352576}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_98) {
  // one = 294,31475054509152688354545308
  // two = -69632384,242134344194474215072
  s21_decimal one = {{-557396324, -1384750419, 1595483459, 1703936}};
  s21_decimal two = {{1909294752, -2004147449, -520188183, -2146107392}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_99) {
  // one = 30789310804835698,158271972381
  // two = 162329,0666830221644658562372
  s21_decimal one = {{-938490851, 844879973, 1669091883, 786432}};
  s21_decimal two = {{1226757444, 1621944895, 87998763, 1441792}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 0;
  int is_greater_standart = 1;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_100) {
  // one = -366931094975491330708,47295671
  // two = 406994339459928027656662,71913
  s21_decimal one = {{-1903574857, -1612488325, 1989137451, -2146959360}};
  s21_decimal two = {{1129595561, 681972752, -2088646561, 327680}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 1;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 0;
  int is_equal_standart = 0;
  int is_not_equal_standart = 1;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_101) {
  // one = -79228162514264337593543950335
  // two = -79228162514264337593543950335
  s21_decimal one = {{-1, -1, -1, -2147483648}};
  s21_decimal two = {{-1, -1, -1, -2147483648}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 1;
  int is_not_equal_standart = 0;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_102) {
  // one = 79228162514264337593543950335
  // two = 79228162514264337593543950335
  s21_decimal one = {{-1, -1, -1, 0}};
  s21_decimal two = {{-1, -1, -1, 0}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 1;
  int is_not_equal_standart = 0;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_103) {
  // one = 792281625142,64337593543950335
  // two = 792281625142,64337593543950335
  s21_decimal one = {{-1, -1, -1, 1114112}};
  s21_decimal two = {{-1, -1, -1, 1114112}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 1;
  int is_not_equal_standart = 0;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

START_TEST(s21_comp_test_104) {
  // one = 0
  // two = 0
  s21_decimal one = {{0, 0, 0, 0}};
  s21_decimal two = {{0, 0, 0, 0}};
  int is_less = s21_is_less(one, two);
  int is_less_or_equal = s21_is_less_or_equal(one, two);
  int is_greater = s21_is_greater(one, two);
  int is_greater_or_equal = s21_is_greater_or_equal(one, two);
  int is_equal = s21_is_equal(one, two);
  int is_not_equal = s21_is_not_equal(one, two);
  int is_less_standart = 0;
  int is_less_or_equal_standart = 1;
  int is_greater_standart = 0;
  int is_greater_or_equal_standart = 1;
  int is_equal_standart = 1;
  int is_not_equal_standart = 0;
  ck_assert_int_eq(is_less, is_less_standart);
  ck_assert_int_eq(is_less_or_equal, is_less_or_equal_standart);
  ck_assert_int_eq(is_greater, is_greater_standart);
  ck_assert_int_eq(is_greater_or_equal, is_greater_or_equal_standart);
  ck_assert_int_eq(is_equal, is_equal_standart);
  ck_assert_int_eq(is_not_equal, is_not_equal_standart);
}
END_TEST

Suite* test_comp(void) {
  Suite* s = suite_create("\033[42m-=S21_DECIMAL_COMPARE=-\033[0m");
  TCase* tc = tcase_create("case_comp");
  tcase_add_test(tc, s21_comp_test_1);
  tcase_add_test(tc, s21_comp_test_2);
  tcase_add_test(tc, s21_comp_test_3);
  tcase_add_test(tc, s21_comp_test_4);
  tcase_add_test(tc, s21_comp_test_5);
  tcase_add_test(tc, s21_comp_test_6);
  tcase_add_test(tc, s21_comp_test_7);
  tcase_add_test(tc, s21_comp_test_8);
  tcase_add_test(tc, s21_comp_test_9);
  tcase_add_test(tc, s21_comp_test_10);
  tcase_add_test(tc, s21_comp_test_11);
  tcase_add_test(tc, s21_comp_test_12);
  tcase_add_test(tc, s21_comp_test_13);
  tcase_add_test(tc, s21_comp_test_14);
  tcase_add_test(tc, s21_comp_test_15);
  tcase_add_test(tc, s21_comp_test_16);
  tcase_add_test(tc, s21_comp_test_17);
  tcase_add_test(tc, s21_comp_test_18);
  tcase_add_test(tc, s21_comp_test_19);
  tcase_add_test(tc, s21_comp_test_20);
  tcase_add_test(tc, s21_comp_test_21);
  tcase_add_test(tc, s21_comp_test_22);
  tcase_add_test(tc, s21_comp_test_23);
  tcase_add_test(tc, s21_comp_test_24);
  tcase_add_test(tc, s21_comp_test_25);
  tcase_add_test(tc, s21_comp_test_26);
  tcase_add_test(tc, s21_comp_test_27);
  tcase_add_test(tc, s21_comp_test_28);
  tcase_add_test(tc, s21_comp_test_29);
  tcase_add_test(tc, s21_comp_test_30);
  tcase_add_test(tc, s21_comp_test_31);
  tcase_add_test(tc, s21_comp_test_32);
  tcase_add_test(tc, s21_comp_test_33);
  tcase_add_test(tc, s21_comp_test_34);
  tcase_add_test(tc, s21_comp_test_35);
  tcase_add_test(tc, s21_comp_test_36);
  tcase_add_test(tc, s21_comp_test_37);
  tcase_add_test(tc, s21_comp_test_38);
  tcase_add_test(tc, s21_comp_test_39);
  tcase_add_test(tc, s21_comp_test_40);
  tcase_add_test(tc, s21_comp_test_41);
  tcase_add_test(tc, s21_comp_test_42);
  tcase_add_test(tc, s21_comp_test_43);
  tcase_add_test(tc, s21_comp_test_44);
  tcase_add_test(tc, s21_comp_test_45);
  tcase_add_test(tc, s21_comp_test_46);
  tcase_add_test(tc, s21_comp_test_47);
  tcase_add_test(tc, s21_comp_test_48);
  tcase_add_test(tc, s21_comp_test_49);
  tcase_add_test(tc, s21_comp_test_50);
  tcase_add_test(tc, s21_comp_test_51);
  tcase_add_test(tc, s21_comp_test_52);
  tcase_add_test(tc, s21_comp_test_53);
  tcase_add_test(tc, s21_comp_test_54);
  tcase_add_test(tc, s21_comp_test_55);
  tcase_add_test(tc, s21_comp_test_56);
  tcase_add_test(tc, s21_comp_test_57);
  tcase_add_test(tc, s21_comp_test_58);
  tcase_add_test(tc, s21_comp_test_59);
  tcase_add_test(tc, s21_comp_test_60);
  tcase_add_test(tc, s21_comp_test_61);
  tcase_add_test(tc, s21_comp_test_62);
  tcase_add_test(tc, s21_comp_test_63);
  tcase_add_test(tc, s21_comp_test_64);
  tcase_add_test(tc, s21_comp_test_65);
  tcase_add_test(tc, s21_comp_test_66);
  tcase_add_test(tc, s21_comp_test_67);
  tcase_add_test(tc, s21_comp_test_68);
  tcase_add_test(tc, s21_comp_test_69);
  tcase_add_test(tc, s21_comp_test_70);
  tcase_add_test(tc, s21_comp_test_71);
  tcase_add_test(tc, s21_comp_test_72);
  tcase_add_test(tc, s21_comp_test_73);
  tcase_add_test(tc, s21_comp_test_74);
  tcase_add_test(tc, s21_comp_test_75);
  tcase_add_test(tc, s21_comp_test_76);
  tcase_add_test(tc, s21_comp_test_77);
  tcase_add_test(tc, s21_comp_test_78);
  tcase_add_test(tc, s21_comp_test_79);
  tcase_add_test(tc, s21_comp_test_80);
  tcase_add_test(tc, s21_comp_test_81);
  tcase_add_test(tc, s21_comp_test_82);
  tcase_add_test(tc, s21_comp_test_83);
  tcase_add_test(tc, s21_comp_test_84);
  tcase_add_test(tc, s21_comp_test_85);
  tcase_add_test(tc, s21_comp_test_86);
  tcase_add_test(tc, s21_comp_test_87);
  tcase_add_test(tc, s21_comp_test_88);
  tcase_add_test(tc, s21_comp_test_89);
  tcase_add_test(tc, s21_comp_test_90);
  tcase_add_test(tc, s21_comp_test_91);
  tcase_add_test(tc, s21_comp_test_92);
  tcase_add_test(tc, s21_comp_test_93);
  tcase_add_test(tc, s21_comp_test_94);
  tcase_add_test(tc, s21_comp_test_95);
  tcase_add_test(tc, s21_comp_test_96);
  tcase_add_test(tc, s21_comp_test_97);
  tcase_add_test(tc, s21_comp_test_98);
  tcase_add_test(tc, s21_comp_test_99);
  tcase_add_test(tc, s21_comp_test_100);
  tcase_add_test(tc, s21_comp_test_101);
  tcase_add_test(tc, s21_comp_test_102);
  tcase_add_test(tc, s21_comp_test_103);
  tcase_add_test(tc, s21_comp_test_104);

  suite_add_tcase(s, tc);

  return s;
}
