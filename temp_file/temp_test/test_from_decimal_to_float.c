#include "tests.h"

START_TEST(s21_tofloat_test_1) {
  // src = 83138458050806605,92175226067
  s21_decimal src = {{-460448557, 768358879, 450694484, 720896}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 8,3138455E+16
  float standart = 8.3138455E+16;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_2) {
  // src = -3110183740845772738572684,8935
  s21_decimal src = {{465014695, 1404625926, 1686033984, -2147221504}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3,1101836E+24
  float standart = -3.1101836E+24;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_3) {
  // src = 4881513725292,0486898059379545
  s21_decimal src = {{-330628263, -44137056, -1648693404, 1048576}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4,881514E+12
  float standart = 4.881514E+12;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_4) {
  // src = -148559488283529530,86648038095
  s21_decimal src = {{-1896303921, -1281241155, 805342599, -2146762752}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1,4855948E+17
  float standart = -1.4855948E+17;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_5) {
  // src = 4488,3912996007731422261464040
  s21_decimal src = {{-1819227160, -16761430, -1861805498, 1638400}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4488,391
  float standart = 4488.391;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_6) {
  // src = -19,527637101186409220326408593
  s21_decimal src = {{1711128977, 1850023458, 1058595328, -2145714176}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -19,527637
  float standart = -19.527637;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_7) {
  // src = -6368831112163269,9196378120393
  s21_decimal src = {{2087649481, 1478778, -842417032, -2146631680}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6,368831E+15
  float standart = -6.368831E+15;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_8) {
  // src = -1547921454098961430,7756572332
  s21_decimal src = {{1177124524, -1350734969, 839129901, -2146828288}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1,5479215E+18
  float standart = -1.5479215E+18;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_9) {
  // src = -20432786551018745629645,398834
  s21_decimal src = {{-1550392526, 1835480321, 1107663578, -2147090432}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2,0432786E+22
  float standart = -2.0432786E+22;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_10) {
  // src = 667449952709784604550514057,57
  s21_decimal src = {{359868861, -1002967948, -676713853, 131072}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6,6745E+26
  float standart = 6.6745E+26;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_11) {
  // src = -592331364493236899,00709495359
  s21_decimal src = {{-913325505, 319344327, -1083932535, -2146762752}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5,923314E+17
  float standart = -5.923314E+17;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_12) {
  // src = 453091250728423,65112959077948
  s21_decimal src = {{1448840764, -559820728, -1838754705, 917504}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4,5309127E+14
  float standart = 4.5309127E+14;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_13) {
  // src = -71062438333720033461405,509712
  s21_decimal src = {{1045194832, 759446859, -442664795, -2147090432}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7,106244E+22
  float standart = -7.106244E+22;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_14) {
  // src = 4097136143554891361583500277,3
  s21_decimal src = {{-976980075, -405670872, -2073905343, 65536}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4,097136E+27
  float standart = 4.097136E+27;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_15) {
  // src = 2569465265569585,2577823981416
  s21_decimal src = {{-73859224, -2025961988, 1392909911, 851968}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2,5694653E+15
  float standart = 2.5694653E+15;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_16) {
  // src = 6362970017362957949642464584,6
  s21_decimal src = {{-346643242, 612133509, -845594338, 65536}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6,36297E+27
  float standart = 6.36297E+27;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_17) {
  // src = 76,676015279146738246930356955
  s21_decimal src = {{-124036389, 683463581, -138352179, 1769472}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 76,67602
  float standart = 76.67602;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_18) {
  // src = -56517684444316582,752868209737
  s21_decimal src = {{682202185, -348270636, -1231137484, -2146697216}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5,6517685E+16
  float standart = -5.6517685E+16;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_19) {
  // src = -3714587460,1008462699764865617
  s21_decimal src = {{-1772660143, 276487547, 2013681897, -2146238464}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3,7145874E+09
  float standart = -3.7145874E+09;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_20) {
  // src = -46556660,727807746106684211685
  s21_decimal src = {{-1692794395, 1022143019, -1771125661, -2146107392}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -46556660
  float standart = -46556660;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_21) {
  // src = -548224856759439,40725745670394
  s21_decimal src = {{-958113542, -1951231869, -1323034393, -2146566144}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5,4822486E+14
  float standart = -5.4822486E+14;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_22) {
  // src = -584625274445897523119652250,54
  s21_decimal src = {{519508062, 948679979, -1125707333, -2147352576}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5,8462528E+26
  float standart = -5.8462528E+26;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_23) {
  // src = -4711620504220,8880424539984269
  s21_decimal src = {{-104525427, 1296080747, -1740792703, -2146435072}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4,7116205E+12
  float standart = -4.7116205E+12;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_24) {
  // src = -7493810270853147596,8546057557
  s21_decimal src = {{1982344533, -315317104, -232564609, -2146828288}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7,49381E+18
  float standart = -7.49381E+18;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_25) {
  // src = -1735168775414271875,9030784768
  s21_decimal src = {{565740288, -143525133, 940636877, -2146828288}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1,7351687E+18
  float standart = -1.7351687E+18;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_26) {
  // src = 3805790,9275211665582905724894
  s21_decimal src = {{2144440286, -764350143, 2063123395, 1441792}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3805791
  float standart = 3805791;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_27) {
  // src = 5719339,6159062501163819313617
  s21_decimal src = {{-1826903599, 1606246617, -1194507078, 1441792}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5719339,5
  float standart = 5719339.5;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_28) {
  // src = -6610180451198324780142,4733588
  s21_decimal src = {{506914196, -621834711, -711581294, -2147024896}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6,6101803E+21
  float standart = -6.6101803E+21;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_29) {
  // src = 49902732,365285602974183416498
  s21_decimal src = {{940794546, 731292480, -1589734754, 1376256}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 49902732
  float standart = 49902732;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_30) {
  // src = -125925973988115,14228884831833
  s21_decimal src = {{-680329639, -638499327, 682646072, -2146566144}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1,25925975E+14
  float standart = -1.25925975E+14;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_31) {
  // src = 34330552764,246814582467707262
  s21_decimal src = {{181387646, 2066874822, 1861062994, 1179648}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3,4330552E+10
  float standart = 3.4330552E+10;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_32) {
  // src = 432184169047442710,26977558449
  s21_decimal src = {{851234737, -105658603, -1952092222, 720896}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4,3218418E+17
  float standart = 4.3218418E+17;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_33) {
  // src = 772706636948449414227660,7337
  s21_decimal src = {{965451113, 1016783697, 418885107, 262144}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 7,7270666E+23
  float standart = 7.7270666E+23;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_34) {
  // src = 6093,5943137711037800442915542
  s21_decimal src = {{-936744234, -1640790707, -991623200, 1638400}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6093,594
  float standart = 6093.594;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_35) {
  // src = -30826879246,403229196735627658
  s21_decimal src = {{1442201994, 2125727672, 1671128472, -2146304000}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3,0826879E+10
  float standart = -3.0826879E+10;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_36) {
  // src = 22102533226654010,773442865529
  s21_decimal src = {{-1245763207, 380389073, 1198180727, 786432}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2,2102533E+16
  float standart = 2.2102533E+16;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_37) {
  // src = -7169595667586200,4892453905044
  s21_decimal src = {{445194900, 1373571460, -408321697, -2146631680}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7,169596E+15
  float standart = -7.169596E+15;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_38) {
  // src = -657181322872657706397462180,37
  s21_decimal src = {{124336181, -527567779, -732380207, -2147352576}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6,5718134E+26
  float standart = -6.5718134E+26;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_39) {
  // src = 584559089613129,81430635410349
  s21_decimal src = {{-1489685587, -2046465710, -1126066122, 917504}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5,845591E+14
  float standart = 5.845591E+14;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_40) {
  // src = -7572389,0138877064077467464587
  s21_decimal src = {{-1914948725, -510203689, -189966987, -2146041856}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7572389
  float standart = -7572389;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_41) {
  // src = 6302770169050068507660817,9055
  s21_decimal src = {{-2110137489, -83935867, -878228742, 262144}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6,30277E+24
  float standart = 6.30277E+24;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_42) {
  // src = -5857941206578,1225775692362226
  s21_decimal src = {{-1368804878, 997200387, -1119371005, -2146435072}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5,857941E+12
  float standart = -5.857941E+12;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_43) {
  // src = -77710645174937,390751097128938
  s21_decimal src = {{-335968278, 841234159, -82264780, -2146500608}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7,771065E+13
  float standart = -7.771065E+13;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_44) {
  // src = -17,279081933755610639185703627
  s21_decimal src = {{-666930485, -1904202943, 936700908, -2145714176}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -17,279081
  float standart = -17.279081;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_45) {
  // src = 42514595367053631733478,582838
  s21_decimal src = {{-1091966410, -149956781, -1990246464, 393216}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4,2514597E+22
  float standart = 4.2514597E+22;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_46) {
  // src = 726,51979899333813648890435838
  s21_decimal src = {{-1739155202, 479086527, -356495574, 1703936}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 726,5198
  float standart = 726.5198;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_47) {
  // src = 589,57311514749408576328086088
  s21_decimal src = {{668119624, 1760067928, -1098885035, 1703936}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 589,5731
  float standart = 589.5731;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_48) {
  // src = -530697079515,15862724155279616
  s21_decimal src = {{796920064, -1244520981, -1418052664, -2146369536}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5,306971E+11
  float standart = -5.306971E+11;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_49) {
  // src = 2678645599923567717485650,0640
  s21_decimal src = {{412698016, 1623217325, 1452096689, 262144}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2,6786457E+24
  float standart = 2.6786457E+24;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_50) {
  // src = -6633595596528035340071475,1000
  s21_decimal src = {{-1224676328, -1834011917, -698887918, -2147221504}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6,6335956E+24
  float standart = -6.6335956E+24;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_51) {
  // src = -724115868016831316016041456,15
  s21_decimal src = {{-1785105969, 753236547, -369527310, -2147352576}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7,241159E+26
  float standart = -7.241159E+26;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_52) {
  // src = 691056350,29420959243450070772
  s21_decimal src = {{1492530932, 2123556414, -548743315, 1310720}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 691056300
  float standart = 691056300;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_53) {
  // src = -356637124137710819,93582027311
  s21_decimal src = {{-931388881, -449068828, 1933333723, -2146762752}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3,566371E+17
  float standart = -3.566371E+17;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_54) {
  // src = -1715743658307366352048975452,5
  s21_decimal src = {{1710116765, -504500611, 930106500, -2147418112}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1,7157436E+27
  float standart = -1.7157436E+27;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_55) {
  // src = -4462856522856056602848850,4604
  s21_decimal src = {{2036692252, -919894287, -1875647928, -2147221504}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4,4628565E+24
  float standart = -4.4628565E+24;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_56) {
  // src = -3565,9861010071562807038245821
  s21_decimal src = {{-508757059, -504503415, 1933124938, -2145845248}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3565,986
  float standart = -3565.986;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_57) {
  // src = 392552470,12917874270620335130
  s21_decimal src = {{-1797538790, -1533159911, 2128031204, 1310720}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 392552480
  float standart = 392552480;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_58) {
  // src = 61833186867893092676,26693939
  s21_decimal src = {{1921520947, -1420091111, 335198377, 524288}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6,1833187E+19
  float standart = 6.1833187E+19;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_59) {
  // src = 3657078387218784,4621890157099
  s21_decimal src = {{1790638635, 799703423, 1982506166, 851968}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3,6570785E+15
  float standart = 3.6570785E+15;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_60) {
  // src = 486165978780865553523169679,61
  s21_decimal src = {{-1873085415, -370310287, -1659456245, 131072}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4,8616597E+26
  float standart = 4.8616597E+26;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_61) {
  // src = -665502154138846175896354558,51
  s21_decimal src = {{-2097374357, -1908682175, -687272890, -2147352576}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6,6550215E+26
  float standart = -6.6550215E+26;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_62) {
  // src = -60900320658545,831857032390387
  s21_decimal src = {{-2071337229, 656966137, -993554298, -2146500608}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6,090032E+13
  float standart = -6.090032E+13;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_63) {
  // src = 681595684411,59810170388906735
  s21_decimal src = {{-1026915601, -90217274, -600029688, 1114112}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6,815957E+11
  float standart = 6.815957E+11;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_64) {
  // src = 28491315534,032045874073460842
  s21_decimal src = {{-1054711702, -221718222, 1544517309, 1179648}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2,8491315E+10
  float standart = 2.8491315E+10;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_65) {
  // src = 196,06846140145448775451923580
  s21_decimal src = {{-1757162372, 157780497, 1062889259, 1703936}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 196,06847
  float standart = 196.06847;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_66) {
  // src = -605,94996791682513683195605699
  s21_decimal src = {{2008265411, 707456810, -1010105938, -2145779712}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -605,94995
  float standart = -605.94995;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_67) {
  // src = -3742715556430,302064096679071
  s21_decimal src = {{1084855455, -584753986, 202893016, -2146500608}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3,7427156E+12
  float standart = -3.7427156E+12;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_68) {
  // src = 58819,283054255301680197888673
  s21_decimal src = {{-1816565087, -1833217745, -1106367573, 1572864}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 58819,28
  float standart = 58819.28;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_69) {
  // src = 18255882,615302202635638649104
  s21_decimal src = {{-18239216, -1685559811, 989653379, 1376256}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 18255882
  float standart = 18255882;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_70) {
  // src = -39074127720860537880532,924024
  s21_decimal src = {{-1181829512, 629871372, 2118212708, -2147090432}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3,9074127E+22
  float standart = -3.9074127E+22;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_71) {
  // src = -54352452,746307419540920607732
  s21_decimal src = {{-1048697868, 1602500842, -1348514929, -2146107392}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -54352452
  float standart = -54352452;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_72) {
  // src = -25322,148522971827006519843174
  s21_decimal src = {{-1557718682, 130279698, 1372716422, -2145910784}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -25322,148
  float standart = -25322.148;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_73) {
  // src = -6711884551445045704349093272,1
  s21_decimal src = {{985761777, 319146138, -656447390, -2147418112}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6,711885E+27
  float standart = -6.711885E+27;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_74) {
  // src = -738908173,29256826381397896818
  s21_decimal src = {{776973938, -1050160359, -289338063, -2146172928}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -738908160
  float standart = -738908160;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_75) {
  // src = 216758,01784037250535871745135
  s21_decimal src = {{-30143377, 991785222, 1175047569, 1507328}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 216758,02
  float standart = 216758.02;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_76) {
  // src = 569938161,29538578843567708649
  s21_decimal src = {{113826281, 1263817960, -1205326333, 1310720}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 569938200
  float standart = 569938200;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_77) {
  // src = -3921820236046241,1475571875500
  s21_decimal src = {{-26829140, 40691504, 2126023010, -2146631680}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3,9218203E+15
  float standart = -3.9218203E+15;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_78) {
  // src = -79976812108,00386679105164945
  s21_decimal src = {{-1884514671, 772294988, 433555167, -2146369536}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7,997681E+10
  float standart = -7.997681E+10;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_79) {
  // src = 57923691918319738,374373020160
  s21_decimal src = {{-821521920, -811036672, -1154917666, 786432}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5,792369E+16
  float standart = 5.792369E+16;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_80) {
  // src = 32013531866,281363396666360254
  s21_decimal src = {{-230653506, -353007781, 1735457039, 1179648}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3,2013531E+10
  float standart = 3.2013531E+10;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_81) {
  // src = 4190091,5437304256399892498716
  s21_decimal src = {{198134044, 1343612840, -2023514119, 1441792}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4190091,5
  float standart = 4190091.5;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_82) {
  // src = 662776,4294963753459565308198
  s21_decimal src = {{-1245075162, 1572292847, 359291822, 1441792}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 662776,44
  float standart = 662776.44;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_83) {
  // src = 765326073,52086088114136953514
  s21_decimal src = {{-2124139862, -620230713, -146126339, 1310720}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 765326100
  float standart = 765326100;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_84) {
  // src = -33145947839478009661634103,534
  s21_decimal src = {{1820575982, -718704781, 1796845432, -2147287040}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3,3145947E+25
  float standart = -3.3145947E+25;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_85) {
  // src = -49535153198764124453909,959149
  s21_decimal src = {{-747236883, -1610108515, -1609661261, -2147090432}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4,9535155E+22
  float standart = -4.9535155E+22;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_86) {
  // src = 18,653027593848860168135606093
  s21_decimal src = {{-2009628851, 146672196, 1011182652, 1769472}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 18,653028
  float standart = 18.653028;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_87) {
  // src = 44287213,592351790833900862555
  s21_decimal src = {{-79283109, -2113688102, -1894152637, 1376256}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 44287212
  float standart = 44287212;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_88) {
  // src = -529335993485097690836797,2244
  s21_decimal src = {{93144980, 239048727, 286953617, -2147221504}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5,29336E+23
  float standart = -5.29336E+23;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_89) {
  // src = -57,628871338033059246095094020
  s21_decimal src = {{-1670229756, 554708255, -1170899921, -2145714176}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -57,628872
  float standart = -57.628872;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_90) {
  // src = -73047028124319343894396629753
  s21_decimal src = {{-1616678151, 1287797564, -335079967, -2147483648}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7,304703E+28
  float standart = -7.304703E+28;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_91) {
  // src = -715262801589,02918008013923130
  s21_decimal src = {{-307158214, -410303594, -417519880, -2146369536}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7.152628E+11
  float standart = -7.152628E+11;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_92) {
  // src = 7658930389974269,2910173140387
  s21_decimal src = {{-258067037, -589796821, -143052813, 851968}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 7.6589306E+15
  float standart = 7.6589306E+15;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_93) {
  // src = 1731100,8793725996931386006129
  s21_decimal src = {{1275943537, 445258695, 938431667, 1441792}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1731100.9
  float standart = 1731100.9;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_94) {
  // src = 68125559294709203,383257010693
  s21_decimal src = {{-842919419, 1957166672, -601873327, 786432}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6.812556E+16
  float standart = 6.812556E+16;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_95) {
  // src = -3781441049701711181102409365,0
  s21_decimal src = {{-185466414, -1691225813, 2049923300, -2147418112}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3.7814412E+27
  float standart = -3.7814412E+27;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_96) {
  // src = 25330827813298545074,293071682
  s21_decimal src = {{-937271486, 1295903790, 1373186927, 589824}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2.5330828E+19
  float standart = 2.5330828E+19;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_97) {
  // src = 778566312996,11773122684324048
  s21_decimal src = {{1256655056, -549324838, -74350857, 1114112}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 7.785663E+11
  float standart = 7.785663E+11;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_98) {
  // src = -4823946267025634636043908450,9
  s21_decimal src = {{-991455779, 1422777396, -1679900785, -2147418112}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4.8239464E+27
  float standart = -4.8239464E+27;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_99) {
  // src = -202629968336581809744268604,59
  s21_decimal src = {{-1551488085, 1743562874, 1098459259, -2147352576}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2.0262998E+26
  float standart = -2.0262998E+26;
  ck_assert_float_eq(res, standart);
}
END_TEST

START_TEST(s21_tofloat_test_100) {
  // src = -5567217091915737779389540,0095
  s21_decimal src = {{1122468511, -529408139, -1276972864, -2147221504}};
  float res = 0;
  int code = s21_from_decimal_to_float(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5.567217E+24
  float standart = -5.567217E+24;
  ck_assert_float_eq(res, standart);
}
END_TEST

//
//
//

START_TEST(from_decimal_to_float_0) {
  s21_decimal val = {{123456789, 0, 0, 0}};
  set_scale_decimal(&val, 5);
  float res = 1234.56789;
  float tmp = 0.;
  float *dst = &tmp;
  s21_from_decimal_to_float(val, dst);
  ck_assert_float_eq(*dst, res);
}
END_TEST

START_TEST(from_decimal_to_float_1) {
  s21_decimal val = {{123456789, 0, 0, 0}};
  set_bit_decimal(&val, 127, 1);
  set_scale_decimal(&val, 5);
  float res = -1234.56789;
  float tmp = 0.;
  float *dst = &tmp;
  s21_from_decimal_to_float(val, dst);
  ck_assert_float_eq(*dst, res);
}
END_TEST

START_TEST(from_decimal_to_float_2) {
  s21_decimal var = {{0, 0, 0, 0}};
  float value = 0;
  s21_from_float_to_decimal(5.0, &var);
  s21_from_decimal_to_float(var, &value);
  ck_assert_float_eq_tol(5.0, value, 10e-5);
}
END_TEST

START_TEST(from_decimal_to_float_3) {
  float n = float_generate_random(-8388609, 8388608);
  s21_decimal var = {{0, 0, 0, 0}};
  float value = 0;
  s21_from_float_to_decimal(n, &var);
  s21_from_decimal_to_float(var, &value);
  ck_assert_float_eq_tol(n, value, 10);
}
END_TEST

START_TEST(from_decimal_to_float_4) {
  float n = float_generate_random(-1e-6 / 3, 1e-6 / 3);
  s21_decimal var = {{0, 0, 0, 0}};
  float value = 0;
  s21_from_float_to_decimal(n, &var);
  s21_from_decimal_to_float(var, &value);
  ck_assert_float_eq_tol(n, value, 10);
}
END_TEST

START_TEST(s21_from_decimal_to_float_1) {
  s21_decimal var = {0};
  float value = 0;
  s21_from_float_to_decimal(5.0, &var);
  s21_from_decimal_to_float(var, &value);
  ck_assert_float_eq_tol(5.0, value, 10e-5);
}
END_TEST

START_TEST(s21_from_decimal_to_float_2) {
  float n = float_generate_random(-8388608, 8388608);
  s21_decimal var = {0};
  float value = 0;
  s21_from_float_to_decimal(n, &var);
  s21_from_decimal_to_float(var, &value);
  ck_assert_float_eq_tol(n, value, 10);
}
END_TEST

START_TEST(s21_from_decimal_to_float_3) {
  float n = float_generate_random(-1e-6 / 3, 1e-6 / 3);
  s21_decimal var = {0};
  float value = 0;
  s21_from_float_to_decimal(n, &var);
  s21_from_decimal_to_float(var, &value);
  ck_assert_float_eq_tol(n, value, 10);
}
END_TEST

START_TEST(s21_from_decimal_to_float_4) {
  s21_decimal value = {{1812, 0, 0, 0}};
  decimal_invert_sign(&value);
  float result = 0;
  float check = -1812;
  int return_value = s21_from_decimal_to_float(value, &result);
  ck_assert_float_eq(result, check);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(s21_from_decimal_to_float_5) {
  s21_decimal value = {{18122, 0, 0, 0}};
  set_scale_decimal(&value, 3);
  decimal_invert_sign(&value);
  float result = 0;
  float check = -18.122;
  int return_value = s21_from_decimal_to_float(value, &result);
  ck_assert_float_eq(result, check);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(s21_from_decimal_to_float_6) {
  s21_decimal value = {{0xFFFFFF, 0, 0, 0}};
  float result = 0;
  float check = 16777215;
  int return_value = s21_from_decimal_to_float(value, &result);
  ck_assert_float_eq(result, check);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

START_TEST(s21_from_decimal_to_float_7) {
  s21_decimal value = {{0xFFFFFFFF, 0xFFFFFFFF, 0, 0}};
  float result = 0;
  float check = 0xFFFFFFFFFFFFFFFF;
  int return_value = s21_from_decimal_to_float(value, &result);
  ck_assert_float_eq(result, check);
  ck_assert_int_eq(return_value, 0);
}
END_TEST

Suite *suite_from_decimal_to_float(void) {
  Suite *s = suite_create("\033[42m-=S21_FROM_DECIMAL_TO_FLOAT=-\033[0m");
  TCase *tc = tcase_create("case_fromfloat");

  tcase_add_test(tc, s21_tofloat_test_1);
  tcase_add_test(tc, s21_tofloat_test_2);
  tcase_add_test(tc, s21_tofloat_test_3);
  tcase_add_test(tc, s21_tofloat_test_4);
  tcase_add_test(tc, s21_tofloat_test_5);
  tcase_add_test(tc, s21_tofloat_test_6);
  tcase_add_test(tc, s21_tofloat_test_7);
  tcase_add_test(tc, s21_tofloat_test_8);
  tcase_add_test(tc, s21_tofloat_test_9);
  tcase_add_test(tc, s21_tofloat_test_10);
  tcase_add_test(tc, s21_tofloat_test_11);
  tcase_add_test(tc, s21_tofloat_test_12);
  tcase_add_test(tc, s21_tofloat_test_13);
  tcase_add_test(tc, s21_tofloat_test_14);
  tcase_add_test(tc, s21_tofloat_test_15);
  tcase_add_test(tc, s21_tofloat_test_16);
  tcase_add_test(tc, s21_tofloat_test_17);
  tcase_add_test(tc, s21_tofloat_test_18);
  tcase_add_test(tc, s21_tofloat_test_19);
  tcase_add_test(tc, s21_tofloat_test_20);
  tcase_add_test(tc, s21_tofloat_test_21);
  tcase_add_test(tc, s21_tofloat_test_22);
  tcase_add_test(tc, s21_tofloat_test_23);
  tcase_add_test(tc, s21_tofloat_test_24);
  tcase_add_test(tc, s21_tofloat_test_25);
  tcase_add_test(tc, s21_tofloat_test_26);
  tcase_add_test(tc, s21_tofloat_test_27);
  tcase_add_test(tc, s21_tofloat_test_28);
  tcase_add_test(tc, s21_tofloat_test_29);
  tcase_add_test(tc, s21_tofloat_test_30);
  tcase_add_test(tc, s21_tofloat_test_31);
  tcase_add_test(tc, s21_tofloat_test_32);
  tcase_add_test(tc, s21_tofloat_test_33);
  tcase_add_test(tc, s21_tofloat_test_34);
  tcase_add_test(tc, s21_tofloat_test_35);
  tcase_add_test(tc, s21_tofloat_test_36);
  tcase_add_test(tc, s21_tofloat_test_37);
  tcase_add_test(tc, s21_tofloat_test_38);
  tcase_add_test(tc, s21_tofloat_test_39);
  tcase_add_test(tc, s21_tofloat_test_40);
  tcase_add_test(tc, s21_tofloat_test_41);
  tcase_add_test(tc, s21_tofloat_test_42);
  tcase_add_test(tc, s21_tofloat_test_43);
  tcase_add_test(tc, s21_tofloat_test_44);
  tcase_add_test(tc, s21_tofloat_test_45);
  tcase_add_test(tc, s21_tofloat_test_46);
  tcase_add_test(tc, s21_tofloat_test_47);
  tcase_add_test(tc, s21_tofloat_test_48);
  tcase_add_test(tc, s21_tofloat_test_49);
  tcase_add_test(tc, s21_tofloat_test_50);
  tcase_add_test(tc, s21_tofloat_test_51);
  tcase_add_test(tc, s21_tofloat_test_52);
  tcase_add_test(tc, s21_tofloat_test_53);
  tcase_add_test(tc, s21_tofloat_test_54);
  tcase_add_test(tc, s21_tofloat_test_55);
  tcase_add_test(tc, s21_tofloat_test_56);
  tcase_add_test(tc, s21_tofloat_test_57);
  tcase_add_test(tc, s21_tofloat_test_58);
  tcase_add_test(tc, s21_tofloat_test_59);
  tcase_add_test(tc, s21_tofloat_test_60);
  tcase_add_test(tc, s21_tofloat_test_61);
  tcase_add_test(tc, s21_tofloat_test_62);
  tcase_add_test(tc, s21_tofloat_test_63);
  tcase_add_test(tc, s21_tofloat_test_64);
  tcase_add_test(tc, s21_tofloat_test_65);
  tcase_add_test(tc, s21_tofloat_test_66);
  tcase_add_test(tc, s21_tofloat_test_67);
  tcase_add_test(tc, s21_tofloat_test_68);
  tcase_add_test(tc, s21_tofloat_test_69);
  tcase_add_test(tc, s21_tofloat_test_70);
  tcase_add_test(tc, s21_tofloat_test_71);
  tcase_add_test(tc, s21_tofloat_test_72);
  tcase_add_test(tc, s21_tofloat_test_73);
  tcase_add_test(tc, s21_tofloat_test_74);
  tcase_add_test(tc, s21_tofloat_test_75);
  tcase_add_test(tc, s21_tofloat_test_76);
  tcase_add_test(tc, s21_tofloat_test_77);
  tcase_add_test(tc, s21_tofloat_test_78);
  tcase_add_test(tc, s21_tofloat_test_79);
  tcase_add_test(tc, s21_tofloat_test_80);
  tcase_add_test(tc, s21_tofloat_test_81);
  tcase_add_test(tc, s21_tofloat_test_82);
  tcase_add_test(tc, s21_tofloat_test_83);
  tcase_add_test(tc, s21_tofloat_test_84);
  tcase_add_test(tc, s21_tofloat_test_85);
  tcase_add_test(tc, s21_tofloat_test_86);
  tcase_add_test(tc, s21_tofloat_test_87);
  tcase_add_test(tc, s21_tofloat_test_88);
  tcase_add_test(tc, s21_tofloat_test_89);
  tcase_add_test(tc, s21_tofloat_test_90);
  tcase_add_test(tc, s21_tofloat_test_91);
  tcase_add_test(tc, s21_tofloat_test_92);
  tcase_add_test(tc, s21_tofloat_test_93);
  tcase_add_test(tc, s21_tofloat_test_94);
  tcase_add_test(tc, s21_tofloat_test_95);
  tcase_add_test(tc, s21_tofloat_test_96);
  tcase_add_test(tc, s21_tofloat_test_97);
  tcase_add_test(tc, s21_tofloat_test_98);
  tcase_add_test(tc, s21_tofloat_test_99);
  tcase_add_test(tc, s21_tofloat_test_100);

  tcase_add_test(tc, from_decimal_to_float_0);
  tcase_add_test(tc, from_decimal_to_float_1);
  tcase_add_test(tc, from_decimal_to_float_2);
  tcase_add_loop_test(tc, from_decimal_to_float_3, 0, 100);
  tcase_add_loop_test(tc, from_decimal_to_float_4, 0, 100);
  tcase_add_test(tc, s21_from_decimal_to_float_1);
  tcase_add_loop_test(tc, s21_from_decimal_to_float_2, 0, 100);
  tcase_add_loop_test(tc, s21_from_decimal_to_float_3, 0, 100);
  tcase_add_test(tc, s21_from_decimal_to_float_4);
  tcase_add_test(tc, s21_from_decimal_to_float_5);
  tcase_add_test(tc, s21_from_decimal_to_float_6);
  tcase_add_test(tc, s21_from_decimal_to_float_7);

  suite_add_tcase(s, tc);
  return s;
}