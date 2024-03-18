#include "tests.h"

START_TEST(s21_toint_test_1) {
  // src = -29700919021103888234802049586
  s21_decimal src = {{55308850, 1609942150, 1610090046, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_2) {
  // src = -55749457801508725832447614638
  s21_decimal src = {{329178798, 705387042, -1272783133, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_3) {
  // src = 2135223265192375781450359585
  s21_decimal src = {{-274685151, 614860255, 115750685, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_4) {
  // src = -42821940101535799877149487055
  s21_decimal src = {{656764879, 1745744552, -1973585272, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_5) {
  // src = -75794196658092220869813265843
  s21_decimal src = {{2107696563, -322735484, -186155663, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_6) {
  // src = 17112946706955835184286174559
  s21_decimal src = {{1413123423, -577635409, 927694699, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_7) {
  // src = -75016344005685051278966708284
  s21_decimal src = {{-1414473668, 619265689, -228323139, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_8) {
  // src = 17627662633060459442952734499
  s21_decimal src = {{1468532515, 559569278, 955597506, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_9) {
  // src = -59395668751365586255644836935
  s21_decimal src = {{290833479, -760218419, -1075121642, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_10) {
  // src = 44741186259996806826369369643
  s21_decimal src = {{-86358485, 572763735, -1869542729, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_11) {
  // src = 26879484633900568533106379450
  s21_decimal src = {{1668762298, -995201860, 1457139781, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_12) {
  // src = -66975460658863243476170969763
  s21_decimal src = {{1969230499, 2052342122, -664220299, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_13) {
  // src = 35887912512235062472086654948
  s21_decimal src = {{499126244, -1774901257, 1945487635, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_14) {
  // src = 38045721668050266344964541476
  s21_decimal src = {{-95106012, 1348389593, 2062462704, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_15) {
  // src = 66836297140447627087234478610
  s21_decimal src = {{1019490834, 120264443, -671764368, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_16) {
  // src = 51442817627020046795073391453
  s21_decimal src = {{-607646883, 2145494364, -1506246565, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_17) {
  // src = -53206976955705729365993240186
  s21_decimal src = {{1369618042, 1452197764, -1410611296, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_18) {
  // src = 52675253706874058257467275689
  s21_decimal src = {{-163743319, 1120551497, -1439436071, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_19) {
  // src = 10086896191501789024899808580
  s21_decimal src = {{-554451644, 958207295, 546811738, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_20) {
  // src = -55990563988128725780744416908
  s21_decimal src = {{2021961356, -1155815689, -1259712741, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_21) {
  // src = -18713924777995797030212867201
  s21_decimal src = {{-818015103, 7162803, 1014483895, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_22) {
  // src = -27209283506657721725612283599
  s21_decimal src = {{-1749723441, 2081406895, 1475018214, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_23) {
  // src = 2522208946206742535608528602
  s21_decimal src = {{779153114, -227692313, 136729220, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_24) {
  // src = 487787769994640702765961085
  s21_decimal src = {{-2017030275, -12874379, 26443027, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_25) {
  // src = 64355487230891415378866469965
  s21_decimal src = {{-1780482995, 1523771171, -806249343, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_26) {
  // src = 3146065535644524958905878766
  s21_decimal src = {{-351188754, 1831280885, 170548554, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_27) {
  // src = -59098509655733125977963318335
  s21_decimal src = {{1528384575, -128544953, -1091230669, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_28) {
  // src = -1793394710651972591116269400
  s21_decimal src = {{-1956726952, 303413949, 97220122, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_29) {
  // src = -37975982091504056021883497456
  s21_decimal src = {{881798128, 1262571774, 2058682114, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_30) {
  // src = -76640449738296500022862848001
  s21_decimal src = {{-1886740479, 1401700174, -140280191, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_31) {
  // src = 42698879635436813394907559215
  s21_decimal src = {{-1962609361, 738231142, -1980256393, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_32) {
  // src = -61213735591044510849033440404
  s21_decimal src = {{2072382612, -1339234699, -976564041, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_33) {
  // src = 41543020314992238974790325496
  s21_decimal src = {{-2066426632, -617609807, -2042915653, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_34) {
  // src = -73994998773624650591810079127
  s21_decimal src = {{-129513065, 735745610, -283690375, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_35) {
  // src = 20891217448677259119466332298
  s21_decimal src = {{-733003638, 799499908, 1132515167, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_36) {
  // src = -37814029553554794452464427454
  s21_decimal src = {{-1146887746, -1633123201, 2049902649, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_37) {
  // src = -56746650807763306247792820472
  s21_decimal src = {{-754777864, 1514680706, -1218725192, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_38) {
  // src = -69513015286711565697212066773
  s21_decimal src = {{2126883797, 2119729442, -526659187, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_39) {
  // src = -49622269511117277464969119968
  s21_decimal src = {{1281394912, 1635214791, -1604938676, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_40) {
  // src = 26409820720862384865844453429
  s21_decimal src = {{253026357, 109884257, 1431679250, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_41) {
  // src = -6147443408722805377236141606
  s21_decimal src = {{556205606, -221414075, 333253574, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_42) {
  // src = -7089536492063082422024289759
  s21_decimal src = {{277102047, 1419498744, 384324543, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_43) {
  // src = -65102529564940083895724971847
  s21_decimal src = {{1722849095, 1848944933, -765752097, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_44) {
  // src = 79199127430175084179132209239
  s21_decimal src = {{2035243095, -267977582, -1573996, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_45) {
  // src = 906489750714316906066263636
  s21_decimal src = {{1941618260, -631294537, 49140907, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_46) {
  // src = 10166733728481646357874617635
  s21_decimal src = {{1861889315, -966055495, 551139739, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_47) {
  // src = 22425533778152894654537121252
  s21_decimal src = {{1170587108, 305035152, 1215690622, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_48) {
  // src = 11897082212184618885693319530
  s21_decimal src = {{61090154, 148007757, 644942119, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_49) {
  // src = 7222899466188539481163470863
  s21_decimal src = {{919246863, -1527718840, 391554164, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_50) {
  // src = 19539842654119534355116826626
  s21_decimal src = {{-437673982, -940313481, 1059256992, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_51) {
  // src = 73909793659868571993659903588
  s21_decimal src = {{-1325429148, -1291739863, -288309354, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_52) {
  // src = -75357782195396211807116333195
  s21_decimal src = {{501747851, 2134177546, -209813738, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_53) {
  // src = 36377499799216162444915479169
  s21_decimal src = {{1257476737, -1739211644, 1972028215, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_54) {
  // src = -54552724794085324888936054764
  s21_decimal src = {{-1338998804, -697684845, -1337658160, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_55) {
  // src = -61317844255934983954464323440
  s21_decimal src = {{1168455536, -1199902459, -970920299, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_56) {
  // src = 61410891336702288564963974042
  s21_decimal src = {{1218386842, 327247435, -965876206, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_57) {
  // src = -36113149700662553597833594696
  s21_decimal src = {{-1659418808, 161616345, 1957697768, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_58) {
  // src = -13544534993472610760601298180
  s21_decimal src = {{726590724, 1122906788, 734250713, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_59) {
  // src = -17273848243153555128807099254
  s21_decimal src = {{-387413130, -1629510912, 936417189, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_60) {
  // src = 62142211626070912248100313496
  s21_decimal src = {{-1398384232, 1726588485, -926231254, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_61) {
  // src = -12202179902787772199294457821
  s21_decimal src = {{-1793599523, -72700070, 661481497, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_62) {
  // src = 70249128394600642337803058312
  s21_decimal src = {{381140104, 137257022, -486754415, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_63) {
  // src = 5654133458387815884376875361
  s21_decimal src = {{-225336991, -191759883, 306511188, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_64) {
  // src = 13435401734348890260228366233
  s21_decimal src = {{-556179559, 1846101699, 728334587, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_65) {
  // src = -1089514628649253436345464920
  s21_decimal src = {{-98387880, 1575449448, 59062706, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_66) {
  // src = -46466323974827625859076567496
  s21_decimal src = {{-41438776, 198296836, -1776022826, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_67) {
  // src = -19140809091865057563997631647
  s21_decimal src = {{-1199311713, 113900519, 1037625340, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_68) {
  // src = 51051459067559462539699749305
  s21_decimal src = {{2063401401, 2062179963, -1527462155, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_69) {
  // src = 37505043077584311010857186356
  s21_decimal src = {{-1619921868, 833081754, 2033152459, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_70) {
  // src = -40120853797806023495296208061
  s21_decimal src = {{-617362243, 2051832991, -2120011454, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_71) {
  // src = 17086232166822081206299080444
  s21_decimal src = {{802371324, -1103761872, 926246501, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_72) {
  // src = 11790472921246763546455288783
  s21_decimal src = {{-708858929, -891795657, 639162817, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_73) {
  // src = -19320826309347093465478609414
  s21_decimal src = {{-844482042, -255720318, 1047384092, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_74) {
  // src = -75820194239789329262044470831
  s21_decimal src = {{-896049617, -1491959949, -184746331, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_75) {
  // src = 43564361907033246171563588872
  s21_decimal src = {{823950600, 547650946, -1933338505, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_76) {
  // src = -56479237355738022823716222985
  s21_decimal src = {{1284012041, 304002332, -1233221704, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_77) {
  // src = 39558781992025235359462347647
  s21_decimal src = {{338187135, -722797702, 2144485868, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_78) {
  // src = -51800096359724225814377850639
  s21_decimal src = {{342157071, 1754810983, -1486878446, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_79) {
  // src = 28013180084283916332451220581
  s21_decimal src = {{1879034981, 1204370740, 1518597535, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_80) {
  // src = -45131941267674257211802256991
  s21_decimal src = {{-1356593569, -1954076835, -1848359858, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_81) {
  // src = -23449636235800893945265504755
  s21_decimal src = {{-1113865741, -1964918388, 1271207327, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_82) {
  // src = -69647225721867016745277912224
  s21_decimal src = {{1725887648, -1022948606, -519383625, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_83) {
  // src = -12369969795111211859132173568
  s21_decimal src = {{781077760, 1168155097, 670577406, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_84) {
  // src = -15855351827381247215054705123
  s21_decimal src = {{-983739933, -693903310, 859520344, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_85) {
  // src = -41647804746703715626911264925
  s21_decimal src = {{1675096221, 1208662250, -2037235277, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_86) {
  // src = -31866547803652188852144418552
  s21_decimal src = {{-1290424584, -358010663, 1727489017, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_87) {
  // src = -66144764699030959115109025150
  s21_decimal src = {{-2043787906, 1123535251, -709252417, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_88) {
  // src = -47616065419548092431552146424
  s21_decimal src = {{504032248, -1484782228, -1713695218, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_89) {
  // src = -73488733256664408858979759036
  s21_decimal src = {{758936508, -2129596955, -311135084, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_90) {
  // src = 75595753255533799061468252569
  s21_decimal src = {{-864253543, -2077069945, -196913301, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_91) {
  // src = -51606155008034394407529238505
  s21_decimal src = {{1728729065, -1431386984, -1497392028, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_92) {
  // src = -76305425501916853089936404543
  s21_decimal src = {{-264966081, 345544013, -158441891, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_93) {
  // src = 74844820802365949013168539464
  s21_decimal src = {{-1550268600, -1457403303, -237621431, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_94) {
  // src = -62645984206404202125125133020
  s21_decimal src = {{872587996, -1272161720, -898921688, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_95) {
  // src = 31426294202464177635216463379
  s21_decimal src = {{1449793043, 1606376679, 1703622822, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_96) {
  // src = -54140802665415837176966356823
  s21_decimal src = {{-780198057, 2137356051, -1359988503, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_97) {
  // src = -23695205413548916982171465510
  s21_decimal src = {{-2030667994, 1473178359, 1284519659, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_98) {
  // src = -49303904321722212138129983180
  s21_decimal src = {{-98924852, -509238523, -1622197288, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_99) {
  // src = -16058143396147699750856655744
  s21_decimal src = {{1397326720, -818815689, 870513697, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_100) {
  // src = -17630407675079921629766742382
  s21_decimal src = {{1797910894, 671467113, 955746315, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_101) {
  // src = 2227596367
  s21_decimal src = {{-2067370929, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_102) {
  // src = -3787164369
  s21_decimal src = {{-507802927, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_103) {
  // src = 2974587812
  s21_decimal src = {{-1320379484, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_104) {
  // src = 2086514678
  s21_decimal src = {{2086514678, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2086514678
  int standart = 2086514678;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_105) {
  // src = -3335684141
  s21_decimal src = {{-959283155, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_106) {
  // src = -1236491405
  s21_decimal src = {{1236491405, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1236491405
  int standart = -1236491405;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_107) {
  // src = 97617715
  s21_decimal src = {{97617715, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 97617715
  int standart = 97617715;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_108) {
  // src = 2810638661
  s21_decimal src = {{-1484328635, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_109) {
  // src = 4223408627
  s21_decimal src = {{-71558669, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_110) {
  // src = 1928828407
  s21_decimal src = {{1928828407, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1928828407
  int standart = 1928828407;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_111) {
  // src = 1614542093
  s21_decimal src = {{1614542093, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1614542093
  int standart = 1614542093;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_112) {
  // src = -3853532158
  s21_decimal src = {{-441435138, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_113) {
  // src = -302614742
  s21_decimal src = {{302614742, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -302614742
  int standart = -302614742;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_114) {
  // src = -769671970
  s21_decimal src = {{769671970, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -769671970
  int standart = -769671970;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_115) {
  // src = -2410797509
  s21_decimal src = {{-1884169787, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_116) {
  // src = 646319355
  s21_decimal src = {{646319355, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 646319355
  int standart = 646319355;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_117) {
  // src = -4072843685
  s21_decimal src = {{-222123611, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_118) {
  // src = -1405010496
  s21_decimal src = {{1405010496, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1405010496
  int standart = -1405010496;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_119) {
  // src = 2998622054
  s21_decimal src = {{-1296345242, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_120) {
  // src = -1060896485
  s21_decimal src = {{1060896485, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1060896485
  int standart = -1060896485;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_121) {
  // src = 2702992341
  s21_decimal src = {{-1591974955, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_122) {
  // src = 1997385052
  s21_decimal src = {{1997385052, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1997385052
  int standart = 1997385052;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_123) {
  // src = -1882999288
  s21_decimal src = {{1882999288, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1882999288
  int standart = -1882999288;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_124) {
  // src = -3868607557
  s21_decimal src = {{-426359739, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_125) {
  // src = 2123412172
  s21_decimal src = {{2123412172, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2123412172
  int standart = 2123412172;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_126) {
  // src = 1877171291
  s21_decimal src = {{1877171291, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1877171291
  int standart = 1877171291;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_127) {
  // src = -1965123886
  s21_decimal src = {{1965123886, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1965123886
  int standart = -1965123886;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_128) {
  // src = 2513195483
  s21_decimal src = {{-1781771813, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_129) {
  // src = -1594729115
  s21_decimal src = {{1594729115, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1594729115
  int standart = -1594729115;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_130) {
  // src = -3745988129
  s21_decimal src = {{-548979167, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_131) {
  // src = -2483171622
  s21_decimal src = {{-1811795674, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_132) {
  // src = -300109322
  s21_decimal src = {{300109322, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -300109322
  int standart = -300109322;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_133) {
  // src = -1460155473
  s21_decimal src = {{1460155473, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1460155473
  int standart = -1460155473;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_134) {
  // src = 2166960639
  s21_decimal src = {{-2128006657, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_135) {
  // src = -1977008388
  s21_decimal src = {{1977008388, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1977008388
  int standart = -1977008388;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_136) {
  // src = 254977623
  s21_decimal src = {{254977623, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 254977623
  int standart = 254977623;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_137) {
  // src = -2164579845
  s21_decimal src = {{-2130387451, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_138) {
  // src = -3788909362
  s21_decimal src = {{-506057934, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_139) {
  // src = -1278199423
  s21_decimal src = {{1278199423, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1278199423
  int standart = -1278199423;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_140) {
  // src = 3711989036
  s21_decimal src = {{-582978260, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_141) {
  // src = 944882440
  s21_decimal src = {{944882440, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 944882440
  int standart = 944882440;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_142) {
  // src = -2339977318
  s21_decimal src = {{-1954989978, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_143) {
  // src = 4292171231
  s21_decimal src = {{-2796065, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_144) {
  // src = -2386528225
  s21_decimal src = {{-1908439071, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_145) {
  // src = -1432863466
  s21_decimal src = {{1432863466, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1432863466
  int standart = -1432863466;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_146) {
  // src = 2792431872
  s21_decimal src = {{-1502535424, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_147) {
  // src = -3638441245
  s21_decimal src = {{-656526051, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_148) {
  // src = -340219110
  s21_decimal src = {{340219110, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -340219110
  int standart = -340219110;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_149) {
  // src = 4129316701
  s21_decimal src = {{-165650595, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_150) {
  // src = -3123459662
  s21_decimal src = {{-1171507634, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_151) {
  // src = 2150346236
  s21_decimal src = {{-2144621060, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_152) {
  // src = 1752514027
  s21_decimal src = {{1752514027, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1752514027
  int standart = 1752514027;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_153) {
  // src = 1575630786
  s21_decimal src = {{1575630786, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1575630786
  int standart = 1575630786;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_154) {
  // src = 1934111422
  s21_decimal src = {{1934111422, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1934111422
  int standart = 1934111422;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_155) {
  // src = -3281302750
  s21_decimal src = {{-1013664546, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_156) {
  // src = -2806739865
  s21_decimal src = {{-1488227431, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_157) {
  // src = -1737735025
  s21_decimal src = {{1737735025, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1737735025
  int standart = -1737735025;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_158) {
  // src = -3375420734
  s21_decimal src = {{-919546562, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_159) {
  // src = 694045856
  s21_decimal src = {{694045856, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 694045856
  int standart = 694045856;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_160) {
  // src = -1136924590
  s21_decimal src = {{1136924590, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1136924590
  int standart = -1136924590;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_161) {
  // src = -153133988
  s21_decimal src = {{153133988, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -153133988
  int standart = -153133988;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_162) {
  // src = 2054913837
  s21_decimal src = {{2054913837, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2054913837
  int standart = 2054913837;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_163) {
  // src = -649968342
  s21_decimal src = {{649968342, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -649968342
  int standart = -649968342;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_164) {
  // src = -102920216
  s21_decimal src = {{102920216, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -102920216
  int standart = -102920216;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_165) {
  // src = 2119391258
  s21_decimal src = {{2119391258, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2119391258
  int standart = 2119391258;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_166) {
  // src = 2102193217
  s21_decimal src = {{2102193217, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2102193217
  int standart = 2102193217;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_167) {
  // src = -3904778776
  s21_decimal src = {{-390188520, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_168) {
  // src = 3614705840
  s21_decimal src = {{-680261456, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_169) {
  // src = 3432729977
  s21_decimal src = {{-862237319, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_170) {
  // src = -3635946234
  s21_decimal src = {{-659021062, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_171) {
  // src = 2559788261
  s21_decimal src = {{-1735179035, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_172) {
  // src = -3468332841
  s21_decimal src = {{-826634455, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_173) {
  // src = 1564757499
  s21_decimal src = {{1564757499, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1564757499
  int standart = 1564757499;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_174) {
  // src = -3097752682
  s21_decimal src = {{-1197214614, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_175) {
  // src = -2844703016
  s21_decimal src = {{-1450264280, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_176) {
  // src = -3264427158
  s21_decimal src = {{-1030540138, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_177) {
  // src = -3227231922
  s21_decimal src = {{-1067735374, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_178) {
  // src = -1193274539
  s21_decimal src = {{1193274539, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1193274539
  int standart = -1193274539;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_179) {
  // src = -2460292049
  s21_decimal src = {{-1834675247, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_180) {
  // src = -3957750345
  s21_decimal src = {{-337216951, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_181) {
  // src = -3347597701
  s21_decimal src = {{-947369595, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_182) {
  // src = 2311570354
  s21_decimal src = {{-1983396942, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_183) {
  // src = -2610482514
  s21_decimal src = {{-1684484782, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_184) {
  // src = -2105187178
  s21_decimal src = {{2105187178, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2105187178
  int standart = -2105187178;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_185) {
  // src = -593760829
  s21_decimal src = {{593760829, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -593760829
  int standart = -593760829;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_186) {
  // src = 4047137651
  s21_decimal src = {{-247829645, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_187) {
  // src = -593699804
  s21_decimal src = {{593699804, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -593699804
  int standart = -593699804;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_188) {
  // src = -3315509981
  s21_decimal src = {{-979457315, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_189) {
  // src = 2995450618
  s21_decimal src = {{-1299516678, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_190) {
  // src = 2374141317
  s21_decimal src = {{-1920825979, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_191) {
  // src = -4064461939
  s21_decimal src = {{-230505357, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_192) {
  // src = -3682862763
  s21_decimal src = {{-612104533, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_193) {
  // src = -2722617805
  s21_decimal src = {{-1572349491, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_194) {
  // src = -4058770442
  s21_decimal src = {{-236196854, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_195) {
  // src = -1449240834
  s21_decimal src = {{1449240834, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1449240834
  int standart = -1449240834;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_196) {
  // src = 2768843499
  s21_decimal src = {{-1526123797, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_197) {
  // src = -2977225332
  s21_decimal src = {{-1317741964, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_198) {
  // src = 214108523
  s21_decimal src = {{214108523, 0, 0, 0}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 214108523
  int standart = 214108523;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_199) {
  // src = -3397284466
  s21_decimal src = {{-897682830, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 1);
  // standart = 0
  int standart = 0;
  ck_assert_int_eq(res, standart);
}
END_TEST

START_TEST(s21_toint_test_200) {
  // src = -999465187
  s21_decimal src = {{999465187, 0, 0, -2147483648}};
  int res = 0;
  int code = s21_from_decimal_to_int(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -999465187
  int standart = -999465187;
  ck_assert_int_eq(res, standart);
}
END_TEST

//
//
//

START_TEST(from_decimal_to_int_0) {
  s21_decimal val = {{123456789, 0, 0, 0}};
  set_scale_decimal(&val, 5);
  int res = 1234;
  int tmp = 0;
  int *dst = &tmp;
  s21_from_decimal_to_int(val, dst);
  ck_assert_int_eq(*dst, res);
}
END_TEST

START_TEST(from_decimal_to_int_1) {
  s21_decimal val = {{123456789, 0, 0, 0}};
  set_bit_decimal(&val, 127, 1);
  set_scale_decimal(&val, 5);
  int res = -1234;
  int tmp = 0;
  int *dst = &tmp;
  s21_from_decimal_to_int(val, dst);
  ck_assert_int_eq(*dst, res);
}
END_TEST

START_TEST(from_decimal_to_int_2) {
  s21_decimal var = {{0, 0, 0, 0}};
  int value = 0;
  s21_from_int_to_decimal(5, &var);
  s21_from_decimal_to_int(var, &value);
  ck_assert_int_eq(5, value);
}
END_TEST

START_TEST(from_decimal_to_int_3) {
  s21_decimal var = {{0, 0, 0, 0}};
  int value = 0;
  s21_from_int_to_decimal(8388608, &var);
  s21_from_decimal_to_int(var, &value);
  ck_assert_float_eq_tol(8388608, value, 10);
}
END_TEST

START_TEST(from_decimal_to_int_4) {
  int n = 666;
  s21_decimal var = {{0, 1, 0, 0}};
  int value = 0;
  s21_from_int_to_decimal(n, &var);
  s21_from_decimal_to_int(var, &value);
  ck_assert_float_eq_tol(n, value, 10);
}
END_TEST

START_TEST(s21_from_decimal_to_int_1) {
  s21_decimal src = {{0}};
  int result = 0, number = 0;
  src.bits[0] = INT_MAX;
  src.bits[1] = 0;
  src.bits[2] = 0;
  src.bits[3] = 0;
  result = s21_from_decimal_to_int(src, &number);
  ck_assert_float_eq(number, 2147483647);
  ck_assert_int_eq(result, 0);
}
END_TEST

START_TEST(s21_from_decimal_to_int_2) {
  s21_decimal src = {{0}};
  int result = 0, number = 0;
  src.bits[0] = 133141;
  src.bits[1] = 0;
  src.bits[2] = 0;
  src.bits[3] = 0;
  result = s21_from_decimal_to_int(src, &number);
  ck_assert_int_eq(number, 133141);
  ck_assert_int_eq(result, 0);
}
END_TEST

START_TEST(s21_from_decimal_to_int_4) {
  s21_decimal src = {{0}};
  int result = 0, number = 0;
  long int c = 2147483648;
  src.bits[0] = 123451234;
  src.bits[1] = 0;
  src.bits[2] = 0;
  src.bits[3] = c;
  result = s21_from_decimal_to_int(src, &number);
  ck_assert_int_eq(number, -123451234);
  ck_assert_int_eq(result, 0);
}
END_TEST

START_TEST(s21_from_decimal_to_int_5) {
  s21_decimal src = {{0}};
  int result = 0, number = 0;
  long int c = 2147483648;
  src.bits[0] = 18;
  src.bits[1] = 0;
  src.bits[2] = 0;
  src.bits[3] = c;  // 2147483648
  result = s21_from_decimal_to_int(src, &number);
  ck_assert_int_eq(number, -18);
  ck_assert_int_eq(result, 0);
}
END_TEST

START_TEST(s21_from_decimal_to_int_6) {
  s21_decimal src = {{0}};
  int result = 0, number = 0;
  src.bits[0] = UINT_MAX;
  src.bits[1] = UINT_MAX;
  src.bits[2] = 0;
  src.bits[3] = 0;
  result = s21_from_decimal_to_int(src, &number);
  ck_assert_int_eq(number, 0);
  ck_assert_int_eq(result, 1);
}
END_TEST

int check, result, code;

START_TEST(s21_test_from_decimal_to_int_0) {
  s21_decimal a = {{100, 0, 0, 0}};
  check = 100;
  code = s21_from_decimal_to_int(a, &result);
  ck_assert_int_eq(result, check);
  ck_assert_int_eq(code, 0);
}
END_TEST

START_TEST(s21_test_from_decimal_to_int_1) {
  s21_decimal a = {{INT_MAX, 0, 0, 0}};
  check = INT_MAX;
  code = s21_from_decimal_to_int(a, &result);
  ck_assert_int_eq(result, check);
  ck_assert_int_eq(code, 0);
}
END_TEST

START_TEST(s21_test_from_decimal_to_int_3) {
  s21_decimal a = {{INT_MAX, INT_MAX, INT_MAX, 0}};
  check = 0;

  code = s21_from_decimal_to_int(a, &result);
  ck_assert_int_eq(code, 1);
}
END_TEST

START_TEST(s21_test_from_decimal_to_int_4) {
  s21_decimal a = {{INT_MAX, INT_MAX, INT_MAX, INT_MAX}};
  check = 0;
  code = s21_from_decimal_to_int(a, &result);
  ck_assert_int_eq(code, 1);
}
END_TEST

START_TEST(s21_test_from_decimal_to_int_7) {
  int result = 0;
  s21_decimal a = {{UINT_MAX, UINT_MAX, UINT_MAX, 0}};
  check = 0;
  code = s21_from_decimal_to_int(a, &result);
  ck_assert_int_eq(result, check);
  ck_assert_int_eq(code, 1);
}
END_TEST

START_TEST(s21_test_from_decimal_to_int_8) {
  s21_decimal a = {{UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX}};
  check = 0;
  code = s21_from_decimal_to_int(a, &result);
  //   ck_assert_int_eq(result, check);
  ck_assert_int_eq(code, 1);
}
END_TEST

START_TEST(s21_test_from_decimal_to_int_9) {
  s21_decimal a = {{INT_MAX, 0, 0, INT_MIN}};
  check = -INT_MAX;
  code = s21_from_decimal_to_int(a, &result);
  ck_assert_int_eq(result, check);
  ck_assert_int_eq(code, 0);
}
END_TEST

START_TEST(s21_test_from_decimal_to_int_10) {
  s21_decimal a = {{INT_MAX, 0, 0, INT_MIN}};

  check = -INT_MAX;
  code = s21_from_decimal_to_int(a, &result);
  ck_assert_int_eq(result, check);
  ck_assert_int_eq(code, 0);
}
END_TEST

START_TEST(s21_test_from_decimal_to_int_11) {
  s21_decimal a = {{INT_MAX, 0, 0, EXPONENT_PLUS_1}};
  check = 214748364;  // (int)(INT_MAX / 10^1)
  code = s21_from_decimal_to_int(a, &result);
  ck_assert_int_eq(result, check);
  ck_assert_int_eq(code, 0);
}
END_TEST

START_TEST(s21_test_from_decimal_to_int_14) {
  s21_decimal a = {{INT_MAX, 0, 0, 1835008}};
  check = 0;  // (int)(INT_MAX / 10^28)
  code = s21_from_decimal_to_int(a, &result);
  ck_assert_int_eq(result, check);
  ck_assert_int_eq(code, 0);
}
END_TEST

START_TEST(s21_test_from_decimal_to_int_15) {
  s21_decimal a;
  a.bits[0] = 0b10000000000000000000000000000000;
  a.bits[1] = 0b00000000000000000000000000000000;
  a.bits[2] = 0b00000000000000000000000000000000;
  a.bits[3] = 0b00000000000000000000000000000001;
  check = -2147483648;
  code = s21_from_decimal_to_int(a, &result);
  ck_assert_int_eq(code, 1);
}
END_TEST

START_TEST(s21_test_from_decimal_to_int_16) {
  s21_decimal a;
  a.bits[0] = 0b00000000000000000000000000000001;
  a.bits[1] = 0b00000000000000000000000000000000;
  a.bits[2] = 0b00000000000000000000000000000000;
  a.bits[3] = 0b00000000000000000000000000000000;
  check = 1;
  code = s21_from_decimal_to_int(a, &result);
  ck_assert_int_eq(result, check);
  ck_assert_int_eq(code, 0);
}
END_TEST

START_TEST(s21_test_from_decimal_to_int_17) {
  s21_decimal a;
  a.bits[0] = 0b10000000000000000000000000000001;
  a.bits[1] = 0b00000000000000000000000000000000;
  a.bits[2] = 0b00000000000000000000000000000000;
  a.bits[3] = 0b00000000000000000000000000000000;
  check = 2147483647;
  code = s21_from_decimal_to_int(a, &result);
  // ck_assert_int_eq(result, check);
  ck_assert_int_eq(code, 1);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest1) {
  // 6556
  s21_decimal src1;
  // src1 = 2;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  int result = 0;
  int *res = &result;
  s21_from_decimal_to_int(src1, res);
  ck_assert_int_eq(result, 2);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest2) {
  // 6570
  s21_decimal src1;
  // src1 = 0;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  int result = 0;
  int *res = &result;
  s21_from_decimal_to_int(src1, res);
  ck_assert_int_eq(result, 0);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest3) {
  // 6584
  s21_decimal src1;
  // src1 = 3.5;

  src1.bits[0] = 0b00000000000000000000000000100011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000010000000000000000;
  int result = 0;
  int *res = &result;
  s21_from_decimal_to_int(src1, res);
  ck_assert_int_eq(result, 3);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest4) {
  // 6598
  s21_decimal src1;
  // src1 = 4.5;

  src1.bits[0] = 0b00000000000000000000000000101101;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000010000000000000000;
  int result = 0;
  int *res = &result;
  s21_from_decimal_to_int(src1, res);
  ck_assert_int_eq(result, 4);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest5) {
  // 6612
  s21_decimal src1;
  // src1 = -4.5;

  src1.bits[0] = 0b00000000000000000000000000101101;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000010000000000000000;
  int result = 0;
  int *res = &result;
  s21_from_decimal_to_int(src1, res);
  ck_assert_int_eq(result, -4);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest11) {
  // 6696
  s21_decimal src1;
  // src1 = 1;

  src1.bits[0] = 0b00000000000000000000000000000001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  int result = 0;
  int *res = &result;
  s21_from_decimal_to_int(src1, res);
  ck_assert_int_eq(result, 1);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest12) {
  // 6710
  s21_decimal src1;
  // src1 = 1.25;

  src1.bits[0] = 0b00000000000000000000000001111101;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000100000000000000000;
  int result = 0;
  int *res = &result;
  s21_from_decimal_to_int(src1, res);
  ck_assert_int_eq(result, 1);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest13) {
  // 6724
  s21_decimal src1;
  // src1 = -1.25;

  src1.bits[0] = 0b00000000000000000000000001111101;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000100000000000000000;
  int result = 0;
  int *res = &result;
  s21_from_decimal_to_int(src1, res);
  ck_assert_int_eq(result, -1);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest14) {
  // 6738
  s21_decimal src1;
  // src1 = -12.25;

  src1.bits[0] = 0b00000000000000000000010011001001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000100000000000000000;
  int result = 0;
  int *res = &result;
  s21_from_decimal_to_int(src1, res);
  ck_assert_int_eq(result, -12);
}
END_TEST

START_TEST(s21_from_decimal_to_intTest15) {
  // 6752
  s21_decimal src1;
  // src1 = -3.5;

  src1.bits[0] = 0b00000000000000000000000000100011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000010000000000000000;
  int result = 0;
  int *res = &result;
  s21_from_decimal_to_int(src1, res);
  ck_assert_int_eq(result, -3);
}
END_TEST

Suite *suite_from_decimal_to_int(void) {
  Suite *s = suite_create("\033[42m-=S21_FROM_DECIMAL_TO_INT=-\033[0m");
  TCase *tc = tcase_create("case_toint");

  tcase_add_test(tc, s21_toint_test_1);
  tcase_add_test(tc, s21_toint_test_2);
  tcase_add_test(tc, s21_toint_test_3);
  tcase_add_test(tc, s21_toint_test_4);
  tcase_add_test(tc, s21_toint_test_5);
  tcase_add_test(tc, s21_toint_test_6);
  tcase_add_test(tc, s21_toint_test_7);
  tcase_add_test(tc, s21_toint_test_8);
  tcase_add_test(tc, s21_toint_test_9);
  tcase_add_test(tc, s21_toint_test_10);
  tcase_add_test(tc, s21_toint_test_11);
  tcase_add_test(tc, s21_toint_test_12);
  tcase_add_test(tc, s21_toint_test_13);
  tcase_add_test(tc, s21_toint_test_14);
  tcase_add_test(tc, s21_toint_test_15);
  tcase_add_test(tc, s21_toint_test_16);
  tcase_add_test(tc, s21_toint_test_17);
  tcase_add_test(tc, s21_toint_test_18);
  tcase_add_test(tc, s21_toint_test_19);
  tcase_add_test(tc, s21_toint_test_20);
  tcase_add_test(tc, s21_toint_test_21);
  tcase_add_test(tc, s21_toint_test_22);
  tcase_add_test(tc, s21_toint_test_23);
  tcase_add_test(tc, s21_toint_test_24);
  tcase_add_test(tc, s21_toint_test_25);
  tcase_add_test(tc, s21_toint_test_26);
  tcase_add_test(tc, s21_toint_test_27);
  tcase_add_test(tc, s21_toint_test_28);
  tcase_add_test(tc, s21_toint_test_29);
  tcase_add_test(tc, s21_toint_test_30);
  tcase_add_test(tc, s21_toint_test_31);
  tcase_add_test(tc, s21_toint_test_32);
  tcase_add_test(tc, s21_toint_test_33);
  tcase_add_test(tc, s21_toint_test_34);
  tcase_add_test(tc, s21_toint_test_35);
  tcase_add_test(tc, s21_toint_test_36);
  tcase_add_test(tc, s21_toint_test_37);
  tcase_add_test(tc, s21_toint_test_38);
  tcase_add_test(tc, s21_toint_test_39);
  tcase_add_test(tc, s21_toint_test_40);
  tcase_add_test(tc, s21_toint_test_41);
  tcase_add_test(tc, s21_toint_test_42);
  tcase_add_test(tc, s21_toint_test_43);
  tcase_add_test(tc, s21_toint_test_44);
  tcase_add_test(tc, s21_toint_test_45);
  tcase_add_test(tc, s21_toint_test_46);
  tcase_add_test(tc, s21_toint_test_47);
  tcase_add_test(tc, s21_toint_test_48);
  tcase_add_test(tc, s21_toint_test_49);
  tcase_add_test(tc, s21_toint_test_50);
  tcase_add_test(tc, s21_toint_test_51);
  tcase_add_test(tc, s21_toint_test_52);
  tcase_add_test(tc, s21_toint_test_53);
  tcase_add_test(tc, s21_toint_test_54);
  tcase_add_test(tc, s21_toint_test_55);
  tcase_add_test(tc, s21_toint_test_56);
  tcase_add_test(tc, s21_toint_test_57);
  tcase_add_test(tc, s21_toint_test_58);
  tcase_add_test(tc, s21_toint_test_59);
  tcase_add_test(tc, s21_toint_test_60);
  tcase_add_test(tc, s21_toint_test_61);
  tcase_add_test(tc, s21_toint_test_62);
  tcase_add_test(tc, s21_toint_test_63);
  tcase_add_test(tc, s21_toint_test_64);
  tcase_add_test(tc, s21_toint_test_65);
  tcase_add_test(tc, s21_toint_test_66);
  tcase_add_test(tc, s21_toint_test_67);
  tcase_add_test(tc, s21_toint_test_68);
  tcase_add_test(tc, s21_toint_test_69);
  tcase_add_test(tc, s21_toint_test_70);
  tcase_add_test(tc, s21_toint_test_71);
  tcase_add_test(tc, s21_toint_test_72);
  tcase_add_test(tc, s21_toint_test_73);
  tcase_add_test(tc, s21_toint_test_74);
  tcase_add_test(tc, s21_toint_test_75);
  tcase_add_test(tc, s21_toint_test_76);
  tcase_add_test(tc, s21_toint_test_77);
  tcase_add_test(tc, s21_toint_test_78);
  tcase_add_test(tc, s21_toint_test_79);
  tcase_add_test(tc, s21_toint_test_80);
  tcase_add_test(tc, s21_toint_test_81);
  tcase_add_test(tc, s21_toint_test_82);
  tcase_add_test(tc, s21_toint_test_83);
  tcase_add_test(tc, s21_toint_test_84);
  tcase_add_test(tc, s21_toint_test_85);
  tcase_add_test(tc, s21_toint_test_86);
  tcase_add_test(tc, s21_toint_test_87);
  tcase_add_test(tc, s21_toint_test_88);
  tcase_add_test(tc, s21_toint_test_89);
  tcase_add_test(tc, s21_toint_test_90);
  tcase_add_test(tc, s21_toint_test_91);
  tcase_add_test(tc, s21_toint_test_92);
  tcase_add_test(tc, s21_toint_test_93);
  tcase_add_test(tc, s21_toint_test_94);
  tcase_add_test(tc, s21_toint_test_95);
  tcase_add_test(tc, s21_toint_test_96);
  tcase_add_test(tc, s21_toint_test_97);
  tcase_add_test(tc, s21_toint_test_98);
  tcase_add_test(tc, s21_toint_test_99);
  tcase_add_test(tc, s21_toint_test_100);
  tcase_add_test(tc, s21_toint_test_101);
  tcase_add_test(tc, s21_toint_test_102);
  tcase_add_test(tc, s21_toint_test_103);
  tcase_add_test(tc, s21_toint_test_104);
  tcase_add_test(tc, s21_toint_test_105);
  tcase_add_test(tc, s21_toint_test_106);
  tcase_add_test(tc, s21_toint_test_107);
  tcase_add_test(tc, s21_toint_test_108);
  tcase_add_test(tc, s21_toint_test_109);
  tcase_add_test(tc, s21_toint_test_110);
  tcase_add_test(tc, s21_toint_test_111);
  tcase_add_test(tc, s21_toint_test_112);
  tcase_add_test(tc, s21_toint_test_113);
  tcase_add_test(tc, s21_toint_test_114);
  tcase_add_test(tc, s21_toint_test_115);
  tcase_add_test(tc, s21_toint_test_116);
  tcase_add_test(tc, s21_toint_test_117);
  tcase_add_test(tc, s21_toint_test_118);
  tcase_add_test(tc, s21_toint_test_119);
  tcase_add_test(tc, s21_toint_test_120);
  tcase_add_test(tc, s21_toint_test_121);
  tcase_add_test(tc, s21_toint_test_122);
  tcase_add_test(tc, s21_toint_test_123);
  tcase_add_test(tc, s21_toint_test_124);
  tcase_add_test(tc, s21_toint_test_125);
  tcase_add_test(tc, s21_toint_test_126);
  tcase_add_test(tc, s21_toint_test_127);
  tcase_add_test(tc, s21_toint_test_128);
  tcase_add_test(tc, s21_toint_test_129);
  tcase_add_test(tc, s21_toint_test_130);
  tcase_add_test(tc, s21_toint_test_131);
  tcase_add_test(tc, s21_toint_test_132);
  tcase_add_test(tc, s21_toint_test_133);
  tcase_add_test(tc, s21_toint_test_134);
  tcase_add_test(tc, s21_toint_test_135);
  tcase_add_test(tc, s21_toint_test_136);
  tcase_add_test(tc, s21_toint_test_137);
  tcase_add_test(tc, s21_toint_test_138);
  tcase_add_test(tc, s21_toint_test_139);
  tcase_add_test(tc, s21_toint_test_140);
  tcase_add_test(tc, s21_toint_test_141);
  tcase_add_test(tc, s21_toint_test_142);
  tcase_add_test(tc, s21_toint_test_143);
  tcase_add_test(tc, s21_toint_test_144);
  tcase_add_test(tc, s21_toint_test_145);
  tcase_add_test(tc, s21_toint_test_146);
  tcase_add_test(tc, s21_toint_test_147);
  tcase_add_test(tc, s21_toint_test_148);
  tcase_add_test(tc, s21_toint_test_149);
  tcase_add_test(tc, s21_toint_test_150);
  tcase_add_test(tc, s21_toint_test_151);
  tcase_add_test(tc, s21_toint_test_152);
  tcase_add_test(tc, s21_toint_test_153);
  tcase_add_test(tc, s21_toint_test_154);
  tcase_add_test(tc, s21_toint_test_155);
  tcase_add_test(tc, s21_toint_test_156);
  tcase_add_test(tc, s21_toint_test_157);
  tcase_add_test(tc, s21_toint_test_158);
  tcase_add_test(tc, s21_toint_test_159);
  tcase_add_test(tc, s21_toint_test_160);
  tcase_add_test(tc, s21_toint_test_161);
  tcase_add_test(tc, s21_toint_test_162);
  tcase_add_test(tc, s21_toint_test_163);
  tcase_add_test(tc, s21_toint_test_164);
  tcase_add_test(tc, s21_toint_test_165);
  tcase_add_test(tc, s21_toint_test_166);
  tcase_add_test(tc, s21_toint_test_167);
  tcase_add_test(tc, s21_toint_test_168);
  tcase_add_test(tc, s21_toint_test_169);
  tcase_add_test(tc, s21_toint_test_170);
  tcase_add_test(tc, s21_toint_test_171);
  tcase_add_test(tc, s21_toint_test_172);
  tcase_add_test(tc, s21_toint_test_173);
  tcase_add_test(tc, s21_toint_test_174);
  tcase_add_test(tc, s21_toint_test_175);
  tcase_add_test(tc, s21_toint_test_176);
  tcase_add_test(tc, s21_toint_test_177);
  tcase_add_test(tc, s21_toint_test_178);
  tcase_add_test(tc, s21_toint_test_179);
  tcase_add_test(tc, s21_toint_test_180);
  tcase_add_test(tc, s21_toint_test_181);
  tcase_add_test(tc, s21_toint_test_182);
  tcase_add_test(tc, s21_toint_test_183);
  tcase_add_test(tc, s21_toint_test_184);
  tcase_add_test(tc, s21_toint_test_185);
  tcase_add_test(tc, s21_toint_test_186);
  tcase_add_test(tc, s21_toint_test_187);
  tcase_add_test(tc, s21_toint_test_188);
  tcase_add_test(tc, s21_toint_test_189);
  tcase_add_test(tc, s21_toint_test_190);
  tcase_add_test(tc, s21_toint_test_191);
  tcase_add_test(tc, s21_toint_test_192);
  tcase_add_test(tc, s21_toint_test_193);
  tcase_add_test(tc, s21_toint_test_194);
  tcase_add_test(tc, s21_toint_test_195);
  tcase_add_test(tc, s21_toint_test_196);
  tcase_add_test(tc, s21_toint_test_197);
  tcase_add_test(tc, s21_toint_test_198);
  tcase_add_test(tc, s21_toint_test_199);
  tcase_add_test(tc, s21_toint_test_200);
  tcase_add_test(tc, from_decimal_to_int_0);
  tcase_add_test(tc, from_decimal_to_int_1);
  tcase_add_test(tc, from_decimal_to_int_2);
  tcase_add_loop_test(tc, from_decimal_to_int_3, 0, 1000);
  tcase_add_test(tc, from_decimal_to_int_4);
  tcase_add_test(tc, s21_from_decimal_to_int_1);
  tcase_add_test(tc, s21_from_decimal_to_int_2);
  tcase_add_test(tc, s21_from_decimal_to_int_4);
  tcase_add_test(tc, s21_from_decimal_to_int_5);
  tcase_add_test(tc, s21_from_decimal_to_int_6);
  tcase_add_test(tc, s21_test_from_decimal_to_int_0);
  tcase_add_test(tc, s21_test_from_decimal_to_int_1);
  tcase_add_test(tc, s21_test_from_decimal_to_int_3);
  tcase_add_test(tc, s21_test_from_decimal_to_int_4);
  tcase_add_test(tc, s21_test_from_decimal_to_int_7);
  tcase_add_test(tc, s21_test_from_decimal_to_int_8);
  tcase_add_test(tc, s21_test_from_decimal_to_int_9);
  tcase_add_test(tc, s21_test_from_decimal_to_int_10);
  tcase_add_test(tc, s21_test_from_decimal_to_int_11);
  tcase_add_test(tc, s21_test_from_decimal_to_int_14);
  tcase_add_test(tc, s21_test_from_decimal_to_int_15);
  tcase_add_test(tc, s21_test_from_decimal_to_int_16);
  tcase_add_test(tc, s21_test_from_decimal_to_int_17);
  tcase_add_test(tc, s21_from_decimal_to_intTest1);
  tcase_add_test(tc, s21_from_decimal_to_intTest2);
  tcase_add_test(tc, s21_from_decimal_to_intTest3);
  tcase_add_test(tc, s21_from_decimal_to_intTest4);
  tcase_add_test(tc, s21_from_decimal_to_intTest5);
  tcase_add_test(tc, s21_from_decimal_to_intTest11);
  tcase_add_test(tc, s21_from_decimal_to_intTest12);
  tcase_add_test(tc, s21_from_decimal_to_intTest13);
  tcase_add_test(tc, s21_from_decimal_to_intTest14);
  tcase_add_test(tc, s21_from_decimal_to_intTest15);

  suite_add_tcase(s, tc);
  return s;
}