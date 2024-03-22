#include "tests.h"
START_TEST(s21_div_test_1) {
  // one = -478139005678161796,68391455010
  // two = 658844902271693998618218886,54
  s21_decimal one = {{-715495134, -2011720586, -1702970553, -2146762752}};
  s21_decimal two = {{1154537614, -558979497, -723361925, 131072}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0000000007257231618997746589
  s21_decimal standart = {{-15205475, 1689705908, 0, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_2) {
  // one = -7786958017139542068,9588162791
  // two = 1413634660511,6396874817201494
  s21_decimal one = {{722079975, -1640446904, -73648897, -2146828288}};
  s21_decimal two = {{-66722474, 59116522, 766332885, 1048576}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5508465,6839987160529113889844
  s21_decimal standart = {{551205940, -744622552, -1308822066, -2146041856}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_3) {
  // one = 504,1646933897139242990828642
  // two = 693,54994045044419335520408658
  s21_decimal one = {{-1933837214, -292882253, 273308227, 1638400}};
  s21_decimal two = {{2058245202, -782460920, -535225536, 1703936}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,7269335111791242390319232297
  s21_decimal standart = {{1928426793, 156599283, 394071446, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_4) {
  // one = 31,152098865290791634110779968
  // two = 66012590,916411182879176431412
  s21_decimal one = {{-654831040, 1552951474, 1688758663, 1769472}};
  s21_decimal two = {{-845637836, 637776983, -716417572, 1376256}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000004719114707183257396639
  s21_decimal standart = {{-342219361, -757113027, 255, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_5) {
  // one = -1536754869381,133163923974191
  // two = 32327607863,266681418751092753
  s21_decimal one = {{-914151377, 1709547774, 83307648, -2146500608}};
  s21_decimal two = {{794241041, -727307192, 1752483133, 1179648}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -47,536918781031180036013335541
  s21_decimal standart = {{-2005097483, -931796883, -1717985766, -2145714176}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_6) {
  // one = -391557,03203781717670356744156
  // two = -703226046019311242,49549261138
  s21_decimal one = {{1089370076, -271063024, 2122634923, -2145976320}};
  s21_decimal two = {{-2056861358, 913294011, -482771262, -2146762752}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000000000005568010944052329
  s21_decimal standart = {{-1838351255, 1296403, 0, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_7) {
  // one = 5046,3143157823069766039002764
  // two = 24566585,880396174777288594331
  s21_decimal one = {{-388866420, 463596791, -1559354824, 1638400}};
  s21_decimal two = {{1050776475, 446086317, 1331757289, 1376256}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0002054137412642756378570301
  s21_decimal standart = {{1566125629, 52693027, 111355, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_8) {
  // one = -44116,314557408917519490876214
  // two = 144530970911815,0681613570920
  s21_decimal one = {{1552155446, 1115968524, -1903417092, -2145910784}};
  s21_decimal two = {{1402999656, 1404516893, 78350396, 851968}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0000000003052377928349093529
  s21_decimal standart = {{-1149399399, 710687117, 0, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_9) {
  // one = 533838112908311686039081279,73
  // two = -683220244968982270,05313396937
  s21_decimal one = {{-745620251, -628062996, -1401025088, 131072}};
  s21_decimal two = {{505295049, 1749106279, -591222927, -2146762752}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -781355817,30682990778869165521
  s21_decimal standart = {{-760926767, 177207994, -59228923, -2146172928}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_10) {
  // one = -280,02891251922518002985275039
  // two = 711,26560142271911182962975130
  s21_decimal one = {{46337695, -1887698028, 1518039776, -2145779712}};
  s21_decimal two = {{745464218, 1647569951, -439188745, 1703936}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,3937051250040679237984964794
  s21_decimal standart = {{-61091654, -326229534, 213427975, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_11) {
  // one = -32880996338,068481947116179766
  // two = -256316,94462452168477247321268
  s21_decimal one = {{1810567478, 691868535, 1782482383, -2146304000}};
  s21_decimal two = {{-1272138572, 145022753, 1389496941, -2145976320}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 128282,5697935647802226321879
  s21_decimal standart = {{2037852631, 1851573893, 69542120, 1441792}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_12) {
  // one = -2245546762896956519121901677,3
  // two = -446828,69992798359165117966972
  s21_decimal one = {{1600222277, 1612056232, 1217313339, -2147418112}};
  s21_decimal two = {{1789438588, -197710902, -1872704061, -2145976320}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5025520436039306452358,7002651
  s21_decimal standart = {{-2125061861, 1340278019, -1570627209, 458752}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_13) {
  // one = -464,62321723102728029422772908
  // two = 43,600527113240756287368682531
  s21_decimal one = {{1514431148, -1952401183, -1776239789, -2145779712}};
  s21_decimal two = {{-661562333, -496333473, -1931377986, 1769472}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -10,656366975204043399438324726
  s21_decimal standart = {{1961153526, 1142248144, 577682811, -2145714176}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_14) {
  // one = 297820305537,79164020483216418
  // two = 33616831034305534273,437404030
  s21_decimal one = {{711906338, 1597092249, 1614487111, 1114112}};
  s21_decimal two = {{-1080456322, -113346916, 1822372061, 589824}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000000088592617559302342448
  s21_decimal standart = {{1346373424, -847760311, 4, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_15) {
  // one = -410821,68375965232743733957416
  // two = 67950029006345587761344,7097
  s21_decimal one = {{106074920, 780995316, -2067898486, -2145976320}};
  s21_decimal two = {{1255630777, -1999021815, 36835784, 262144}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0000000000000000060459383133
  s21_decimal standart = {{329840989, 14, 0, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_16) {
  // one = -714324588813556954469,15217117
  // two = 67854238038658,232192917665488
  s21_decimal one = {{989787869, 1105376583, -422605941, -2146959360}};
  s21_decimal two = {{-970098992, -1318166536, -616581682, 983040}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -10527339,330029594117249298822
  s21_decimal standart = {{1910370694, -1694325796, 570688208, -2146107392}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_17) {
  // one = 12144584381031675864,248314051
  // two = -343187530544335959378,75060954
  s21_decimal one = {{1229809859, 2114856529, 658359238, 589824}};
  s21_decimal two = {{1053845722, -298404509, 1860423330, -2146959360}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0353876038612735450099448527
  s21_decimal standart = {{-506496305, 2116236048, 19183658, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_18) {
  // one = -4276474948331273936,7532486485
  // two = 5803065294259261191641339057,9
  s21_decimal one = {{-187048107, -943598889, -1976685582, -2146828288}};
  s21_decimal two = {{1324601075, -1908846576, -1149119297, 65536}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0000000007369337981707389009
  s21_decimal standart = {{-1787393967, 1715807705, 0, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_19) {
  // one = 7666146487660979430,048230381
  // two = 131086451370767098207800,55596
  s21_decimal one = {{-1134990355, -748579899, 415582633, 589824}};
  s21_decimal two = {{604310572, -867559373, 710621076, 327680}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000584816081867829594693136
  s21_decimal standart = {{-515498480, -243424668, 31702, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_20) {
  // one = -45935065863181315529612,731104
  // two = -1294834201012007281260,3840906
  s21_decimal one = {{378544864, 456536830, -1804822386, -2147090432}};
  s21_decimal two = {{1175918986, -545996347, 701931026, -2147024896}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 35,475635280007057520497855348
  s21_decimal standart = {{-914027660, 190494290, 1923138042, 1769472}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_21) {
  // one = 3026443713945223562233089,1022
  // two = 317511374366,20929393070952351
  s21_decimal one = {{708541198, -935207831, 1640638424, 262144}};
  s21_decimal two = {{-511193185, 1647171926, 1721232609, 1114112}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 9531764712323,668559411625545
  s21_decimal standart = {{324091465, 1873033230, 516718000, 983040}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_22) {
  // one = 5643617,7604553060004054619443
  // two = -11892276182652,651668683399987
  s21_decimal one = {{-1984506573, 1209935067, -1235555978, 1441792}};
  s21_decimal two = {{327721779, -1496876316, 644681583, -2146500608}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0000004745616124092115852085
  s21_decimal standart = {{-1935402187, 1118261634, 257, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_23) {
  // one = -138137945377124529001888315,18
  // two = -2403914116113893608383159629,3
  s21_decimal one = {{83345182, 1730063474, 748847302, -2147352576}};
  s21_decimal two = {{-28826363, -1805486974, 1303164453, -2147418112}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,057463760644009535801101753
  s21_decimal standart = {{715361721, -1260696990, 3115116, 1769472}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_24) {
  // one = 4034118790,8781247266638431796
  // two = -53109102940,551990265777867426
  s21_decimal one = {{-62224844, -1858305270, -2108067118, 1245184}};
  s21_decimal two = {{-887502174, 1482356355, -1415917057, -2146304000}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0759590836131000191944120389
  s21_decimal standart = {{279337029, -1131012807, 41177501, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_25) {
  // one = 69316725671747849186621,627455
  // two = 1771733601,5657863846182609210
  s21_decimal one = {{-127820737, 620784863, -537300068, 393216}};
  s21_decimal two = {{337994042, -250841727, 960458709, 1245184}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 39123672774783,147443614569748
  s21_decimal standart = {{-1900096236, -422652293, 2120898550, 983040}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_26) {
  // one = 2821346859130323,1777847109288
  // two = 2740,6204748305051968951553248
  s21_decimal one = {{-997464408, 9128588, 1529455197, 851968}};
  s21_decimal two = {{-1793848096, 1652463882, 1485693336, 1638400}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1029455513830,2433274372164668
  s21_decimal standart = {{-973206468, 1228212623, 558068952, 1048576}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_27) {
  // one = 14676009289918355,673177653457
  // two = 4503386329073059719,1658743921
  s21_decimal one = {{482083025, -956290251, 795588057, 786432}};
  s21_decimal two = {{140486769, -1025354454, -1853676676, 655360}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0032588830310143845964802433
  s21_decimal standart = {{1975085441, 133362903, 1766644, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_28) {
  // one = 4426064298180174712351,9231328
  // two = -57644268552078681,47525194356
  s21_decimal one = {{-192801440, -757041862, -1895593033, 458752}};
  s21_decimal two = {{513249908, -96603488, 312490205, -2146762752}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -76782,382869191053261374647372
  s21_decimal standart = {{-392270772, -989835523, -132585981, -2145910784}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_29) {
  // one = 514763381593804631,86734323358
  // two = -1232507,7006675929026183916548
  s21_decimal one = {{566597278, 858729487, -1504429413, 720896}};
  s21_decimal two = {{1653173252, 1436490528, 668143763, -2146041856}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -417655306587,5214519540977426
  s21_decimal standart = {{-1551560942, 1615530837, 226411395, -2146435072}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_30) {
  // one = -1579152642792754012301588,847
  // two = -747271503085230599386427551,18
  s21_decimal one = {{-196576913, 1288947528, 85606036, -2147287040}};
  s21_decimal two = {{1276771886, 1750528707, -244000361, -2147352576}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0021132247600409868692196817
  s21_decimal standart = {{-1341813295, 1880737395, 1145581, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_31) {
  // one = 59927006479209110384996540895
  // two = 54701470,800999309596501581404
  s21_decimal one = {{1802265055, -1006865386, -1046317766, 0}};
  s21_decimal two = {{794664540, 127955205, -1329594622, 1376256}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1095528248174898041194,1098885
  s21_decimal standart = {{-811756155, 1482758676, 593887053, 458752}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_32) {
  // one = -74597341197665643915346,250891
  // two = -2268115134150144506,0367242650
  s21_decimal one = {{556862603, 1750523954, -251037327, -2147090432}};
  s21_decimal two = {{-1423682150, -230128639, 1229547677, -2146828288}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 32889,574287690218740969282592
  s21_decimal standart = {{-1515807712, -1108719572, 1782947394, 1572864}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_33) {
  // one = -44570580469614658,257462353400
  // two = 19448866597454268051264,940072
  s21_decimal one = {{486661624, -1267829908, -1878791288, -2146697216}};
  s21_decimal two = {{837330984, -571085038, 1054325170, 393216}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0000022916800959213048175223
  s21_decimal standart = {{819993207, 1384136189, 1242, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_34) {
  // one = 7891955848958248614246,2963482
  // two = 2936277,9760516657097108236538
  s21_decimal one = {{500936474, 1288955425, -16729458, 458752}};
  s21_decimal two = {{-879613702, 1409943109, 1591759480, 1441792}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2687741390060879,0820456180549
  s21_decimal standart = {{1417620293, 393450519, 1457027527, 851968}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_35) {
  // one = -627463830749173721,27398760746
  // two = 471850355078466150,95091996929
  s21_decimal one = {{-1296395990, 1166749508, -893479054, -2146762752}};
  s21_decimal two = {{1750935809, 1377174195, -1737061396, 720896}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1,329794126455261212241542815
  s21_decimal standart = {{-1004290401, 184953706, 72088284, -2145714176}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_36) {
  // one = 14939663033485499750,588884725
  // two = 7588290806679,8731100435677838
  s21_decimal one = {{-878172427, -621404415, 809880755, 589824}};
  s21_decimal two = {{-1446083954, 116177507, -181346607, 1048576}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1968778,4000494959756238728459
  s21_decimal standart = {{-1313264373, 1022629752, 1067276909, 1441792}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_37) {
  // one = -2550664152297,7963197883745377
  // two = -75349135615703925153625,783421
  s21_decimal one = {{2009859169, -1713330495, 1382717807, -2146435072}};
  s21_decimal two = {{-1762673539, 2029606638, -210282470, -2147090432}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000000000338512728972327914
  s21_decimal standart = {{-1839727638, 78816136, 0, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_38) {
  // one = 239,17619952541556355884014870
  // two = 68877285346546254,202953315125
  s21_decimal one = {{1074945302, -1454232363, 1296576775, 1703936}};
  s21_decimal two = {{-295652555, 1638411684, -561122176, 786432}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000000000000034724974760842
  s21_decimal standart = {{164172682, 8085, 0, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_39) {
  // one = 107148390140795,39992458056576
  // two = -76142,741223803368625956454575
  s21_decimal one = {{-2084678784, -666261593, 580852586, 917504}};
  s21_decimal two = {{-1458569041, -1320876638, -167261024, -2145910784}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1407204264,2365389137177582838
  s21_decimal standart = {{1162452214, 893613734, 762846960, -2146238464}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_40) {
  // one = -33,373393986738850476922026264
  // two = -7545649316184,6455372791928112
  s21_decimal one = {{316193048, 781025123, 1809175313, -2145714176}};
  s21_decimal two = {{92263728, -1243063082, -204462606, -2146435072}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000000000044228657585711459
  s21_decimal standart = {{-800462493, 10297786, 0, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_41) {
  // one = 45104035516725,269691975213721
  // two = 2236,7325269870308382426984114
  s21_decimal one = {{972694169, -1052935078, -1849872632, 983040}};
  s21_decimal two = {{533655218, -2086643267, 1212535132, 1638400}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 20165144903,348023211398561623
  s21_decimal standart = {{-507740329, -1568753105, 1093154695, 1179648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_42) {
  // one = 46984041035,133651329178332136
  // two = 75898726745,859237604851045621
  s21_decimal one = {{297462760, 523984578, -1747957328, 1179648}};
  s21_decimal two = {{-862857995, 1448315754, -180489075, 1179648}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,6190359581716821375533896503
  s21_decimal standart = {{1181668151, 1495472447, 335580065, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_43) {
  // one = 190123444733,69382870636514808
  // two = 2893029314,5851847852506915611
  s21_decimal one = {{-1188344328, 444498751, 1030661259, 1114112}};
  s21_decimal two = {{-1440832741, -134202303, 1568314333, 1245184}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 65,717773330255577089857967826
  s21_decimal standart = {{717117138, -950682348, -732399666, 1769472}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_44) {
  // one = -4385546562748,8340599791221525
  // two = -304164718117389383712,34277284
  s21_decimal one = {{897645333, 1865352572, -1917557741, -2146435072}};
  s21_decimal two = {{1249847204, -508639231, 1648880240, -2146959360}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000000144183276413284576418
  s21_decimal standart = {{1841884322, -789453317, 7, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_45) {
  // one = -184713837393584858920435,43258
  // two = -79491,74036626090345479246154
  s21_decimal one = {{-901082406, -209188316, 1001335718, -2147155968}};
  s21_decimal two = {{661098826, -5288405, 430925587, -2145976320}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2323685914316500765,9625817402
  s21_decimal standart = {{1626547514, 1022021485, 1259672658, 655360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_46) {
  // one = -433824686506659886981051701,79
  // two = -2269778383,8066017402115603242
  s21_decimal one = {{1969473795, -249890844, -1943198959, -2147352576}};
  s21_decimal two = {{1607482154, 1683100411, 1230449327, -2146238464}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 191130856475556365,16066950499
  s21_decimal standart = {{-297534109, 425488543, 1036122449, 720896}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_47) {
  // one = 20155137,983109119152710581014
  // two = 32016194476908398082858,691088
  s21_decimal one = {{253590294, 1724862121, 1092612219, 1376256}};
  s21_decimal two = {{1453337104, 1413579699, 1735601380, 393216}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,000000000000000629529471332
  s21_decimal standart = {{-1830721180, 146, 0, 1769472}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_48) {
  // one = 6319705401,3370656954243124446
  // two = 62778,624761189493255180225731
  s21_decimal one = {{-1375433506, -863238337, -869048134, 1245184}};
  s21_decimal two = {{1251839171, -1775124893, -891731229, 1572864}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 100666,51548002663756086913325
  s21_decimal standart = {{272902445, -429699824, 545714273, 1507328}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_49) {
  // one = 601153466135226,86203187652635
  // two = 6452925608,4990260830743131678
  s21_decimal one = {{-2018285541, -407934215, -1036107827, 917504}};
  s21_decimal two = {{-650283490, -811770865, -796829315, 1245184}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 93159,83208352177797605503132
  s21_decimal standart = {{1756246172, -1431531742, 505020461, 1507328}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_50) {
  // one = 69033547507479591830772787172
  // two = 22502,592622168199689107800461
  s21_decimal one = {{575678436, 427489502, -552651187, 0}};
  s21_decimal two = {{227672461, 1612984835, 1219867990, 1572864}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3067804171127903562460246,5556
  s21_decimal standart = {{947385620, -1939252338, 1663059973, 262144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_51) {
  // one = 71756094450301,037547147791264
  // two = -66988509792832,191012621580047
  s21_decimal one = {{-1504408672, -1698351835, -405061622, 983040}};
  s21_decimal two = {{-904595697, 1923103831, -663512904, -2146500608}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1,0711701853379485212645370188
  s21_decimal standart = {{-460215988, 96860564, 580682521, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_52) {
  // one = 5588179808,5094203862544993723
  // two = 779957,14866165723009828133196
  s21_decimal one = {{1735052731, 1343344953, -1265608952, 1245184}};
  s21_decimal two = {{-1049487028, 527600568, -66811121, 1507328}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 7164,726700817193052996544622
  s21_decimal standart = {{267823214, -1226019575, 388400612, 1572864}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_53) {
  // one = 4810109215698631271862412767,9
  // two = 21969151020581210851,835281793
  s21_decimal one = {{645561023, -959921165, -1687401866, 65536}};
  s21_decimal two = {{-1871806079, 896850533, 1190950063, 589824}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 218948343,11951377895576033075
  s21_decimal standart = {{-1363945677, 1552168670, 1186921346, 1310720}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_54) {
  // one = 205981263175,09343350722956263
  // two = -26630829809583817185312115957
  s21_decimal one = {{1075874791, 552863942, 1116626665, 1114112}};
  s21_decimal two = {{-1250947851, -1150512870, 1443660176, -2147483648}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0000000000000000077346918834
  s21_decimal standart = {{37507506, 18, 0, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_55) {
  // one = -1526,1271211103827687148849302
  // two = 3746801101808982,9182202073344
  s21_decimal one = {{-1708685162, 422894363, 827315170, -2145845248}};
  s21_decimal two = {{-2121903872, 971480708, 2031144947, 851968}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0000000000004073146878209141
  s21_decimal standart = {{1758145653, 948353, 0, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_56) {
  // one = -1186945617098310,5728834996289
  // two = -234000095,24797126959916936948
  s21_decimal one = {{-767260607, 1460580982, 643444508, -2146631680}};
  s21_decimal two = {{51146484, 637059891, 1268517058, -2146172928}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5072415,1023977035565218055858
  s21_decimal standart = {{-2078619982, -498489738, -1545205560, 1441792}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_57) {
  // one = 64237758722,930094930567645662
  // two = -395196416304508125,8267630333
  s21_decimal one = {{-1431811618, 644346416, -812631418, 1179648}};
  s21_decimal two = {{389929725, -1898733024, 214236406, -2146828288}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,000000162546410019653093857
  s21_decimal standart = {{-2140468767, -808920396, 8, -2145714176}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_58) {
  // one = 6022,8236556555592056446233160
  // two = -180591240,6162950107603308611
  s21_decimal one = {{-1456362936, -88379766, -1029988051, 1638400}};
  s21_decimal two = {{795250755, -1271225457, 97898707, -2146238464}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0000333505857487980015128409
  s21_decimal standart = {{442240857, 1669716878, 18079, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_59) {
  // one = 944948458690722,6503442844857
  // two = 52005109887689,045577347258818
  s21_decimal one = {{1458556089, -430977548, 512257585, 851968}};
  s21_decimal two = {{1383225794, 124521993, -1475764640, 983040}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 18,170300201873362216959094441
  s21_decimal standart = {{-1457770839, -1377632429, 985013947, 1769472}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_60) {
  // one = -33193563197994,487108760841592
  // two = 449310520870323689,0018869292
  s21_decimal one = {{1446587768, -1760826838, 1799426666, -2146500608}};
  s21_decimal two = {{-1134137300, 1821492460, 243571721, 655360}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,000073876665816099464540767
  s21_decimal standart = {{1143075423, -592367516, 4004, -2145714176}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_61) {
  // one = -240,0116379859050413932566541
  // two = 481133546,31198051703003667256
  s21_decimal one = {{-534358003, -1447140557, 130110569, -2145845248}};
  s21_decimal two = {{2121128760, -706429000, -1686737116, 1310720}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0000004988461931737238461615
  s21_decimal standart = {{889445551, 1825632489, 270, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_62) {
  // one = 7332708622439932501012,9520942
  // two = 25845746562380369,659650489811
  s21_decimal one = {{854788398, 1401373325, -319897987, 458752}};
  s21_decimal two = {{-74072621, -1622948993, 1401100728, 786432}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 283710,45907851681464824124651
  s21_decimal standart = {{-1995680533, 1928176923, 1537997480, 1507328}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_63) {
  // one = 71,044698995587040698032984169
  // two = 3767,0439405123163830375134518
  s21_decimal one = {{819990633, -1160885784, -443626447, 1769472}};
  s21_decimal two = {{1648604470, 326006811, 2042118612, 1638400}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0188595355184322569052545361
  s21_decimal standart = {{771940689, -1328966418, 10223774, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_64) {
  // one = 680652704144609979260,65854467
  // two = 47557070397248404750628768,345
  s21_decimal one = {{-623847421, -1251565336, -605141594, 524288}};
  s21_decimal two = {{1418938969, 374261689, -1716893344, 196608}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000143123346004927950977146
  s21_decimal standart = {{-579241862, -1150477442, 7758, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_65) {
  // one = 65,039537415352194854273568748
  // two = 25903095646196129655629,450498
  s21_decimal one = {{1684951020, 682276945, -769166908, 1769472}};
  s21_decimal two = {{-2006020862, -1351700275, 1404209628, 393216}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000000000000000000025108789
  s21_decimal standart = {{25108789, 0, 0, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_66) {
  // one = -46192889853054127,218726871932
  // two = -426,60462169317339942343825078
  s21_decimal one = {{1991844732, -1704050092, -1790845720, -2146697216}};
  s21_decimal two = {{1916163766, 689242449, -1982339008, -2145779712}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 108280331492229,85502438129257
  s21_decimal standart = {{-88670615, 887473193, 586988853, 917504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_67) {
  // one = 78031953323638,460427093676804
  // two = 51323240790972167690485850,059
  s21_decimal one = {{1406931716, -692284933, -64846631, 983040}};
  s21_decimal two = {{-1122148405, 981117240, -1512728838, 196608}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000000000015204019099542988
  s21_decimal standart = {{-1919539764, 3539961, 0, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_68) {
  // one = -2328992969,0319773051420854279
  // two = -356027936213129206242,29921994
  s21_decimal one = {{165070855, 1563228391, 1262549618, -2146238464}};
  s21_decimal two = {{1465005258, -1979866494, 1930031309, -2146959360}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000000000065416017456500125
  s21_decimal standart = {{1931316637, 15230853, 0, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_69) {
  // one = 6447601281844287063733031,7563
  // two = -342078564674,91602083953606111
  s21_decimal one = {{881737979, -1941541660, -799715638, 262144}};
  s21_decimal two = {{1649507807, -402286316, 1854411614, -2146369536}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -18848305470328,34169676579662
  s21_decimal standart = {{763183950, -1318546252, 102176868, -2146566144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_70) {
  // one = 632963456932966,52112428786453
  // two = 63570891386466,422983740549539
  s21_decimal one = {{-1367088363, -1918619326, -863665521, 917504}};
  s21_decimal two = {{1385621923, 1728066529, -848782369, 983040}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 9,956812672092211880774663284
  s21_decimal standart = {{2074410100, -2123093258, 539759896, 1769472}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_71) {
  // one = -14425797360075076512,903897590
  // two = 870982478087225953,3108291218
  s21_decimal one = {{1214030326, -509157073, 782024041, -2146893824}};
  s21_decimal two = {{1133389458, 2016441273, 472160547, 655360}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -16,562672295952182900876462304
  s21_decimal standart = {{-366130976, 1167551285, 897864264, -2145714176}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_72) {
  // one = -31263,607749047659838621378291
  // two = -589129503,23148486507196022696
  s21_decimal one = {{50882291, 268891563, 1694803572, -2145910784}};
  s21_decimal two = {{-2075689048, 1693975807, -1101289860, -2146172928}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000530674623789183164879219
  s21_decimal standart = {{-1580330637, -304943718, 28767, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_73) {
  // one = 234862158771208,40467876209799
  // two = -4395130622433650422678458585,9
  s21_decimal one = {{-768285561, -550193410, 1273190313, 917504}};
  s21_decimal two = {{1487513731, -1717705342, -1912362212, -2147418112}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0000000000000534369007311008
  s21_decimal standart = {{2061244576, 124417, 0, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_74) {
  // one = 944,9229725910779945192788743
  // two = -213987263985,68335880984598025
  s21_decimal one = {{-1709698297, -612660931, 512243769, 1638400}};
  s21_decimal two = {{-395700727, 2093947739, 1160027282, -2146369536}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0000000044157907110504356264
  s21_decimal standart = {{-229713496, 1691379342, 2, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_75) {
  // one = 71833848,037619231381079373318
  // two = -37228389545425367100,564957089
  s21_decimal one = {{-478759418, 81681710, -400846591, 1376256}};
  s21_decimal two = {{1632888737, 705840051, 2018155041, -2146893824}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0000000000019295448692447184
  s21_decimal standart = {{-1122478128, 4492571, 0, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_76) {
  // one = -62317225720036977,265557651710
  // two = -373097951,63380880742492849350
  s21_decimal one = {{-1959509762, 1918485456, -916743721, -2146697216}};
  s21_decimal two = {{983483590, -1905523069, 2022568048, -2146172928}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 167026448,274903936087334028
  s21_decimal standart = {{-199779188, -411846867, 9054521, 1179648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_77) {
  // one = 47761482340065638686,069999943
  // two = 77699331632010814605764058752
  s21_decimal one = {{835307847, -1239695165, -1705812151, 589824}};
  s21_decimal two = {{431218304, -837991080, -82878089, 0}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000000006146961799654491909
  s21_decimal standart = {{1414350597, 1431201072, 0, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_78) {
  // one = -252378764034121575,49167912038
  // two = 4944878016068675,0455401723744
  s21_decimal one = {{2022843494, 1181139698, 1368148021, -2146762752}};
  s21_decimal two = {{-1517373600, -649681261, -1614343553, 851968}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -51,038420606939499805893508632
  s21_decimal standart = {{537706008, 488067944, -1528168971, -2145714176}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_79) {
  // one = 327701252,07572824516384424106
  // two = -2434344621884646615954378,0093
  s21_decimal one = {{699826346, 573903898, 1776472047, 1310720}};
  s21_decimal two = {{-1629027587, -803722165, 1319660863, -2147221504}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0000000000000001346158013659
  s21_decimal standart = {{1833250011, 313, 0, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_80) {
  // one = 5402250268258797201,0205570789
  // two = 492920509,73202204527631699809
  s21_decimal one = {{-631970075, -1811215536, -1366401558, 655360}};
  s21_decimal two = {{264933217, -1844247521, -1622839859, 1310720}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 10959678409,802321688153511326
  s21_decimal standart = {{1266636190, 354368244, 594125357, 1179648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_81) {
  // one = -190139030080,99874511356768094
  // two = -47432886301362727322899325472
  s21_decimal one = {{-1442238626, 1892051582, 1030745747, -2146369536}};
  s21_decimal two = {{-1508761056, -1031781682, -1723625378, -2147483648}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,000000000000000004008590767
  s21_decimal standart = {{-286376529, 0, 0, 1769472}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_82) {
  // one = -6041661726818386053300107,4367
  // two = 16207040286037100,658106758578
  s21_decimal one = {{168703679, -775202157, -1019775912, -2147221504}};
  s21_decimal two = {{-1793395278, 1649592941, 878585414, 786432}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -372780077,06462460922101034162
  s21_decimal standart = {{1048374450, 274443385, 2020844847, -2146172928}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_83) {
  // one = 14002,773007082125016433418000
  // two = 6708152672829643263681190,3539
  s21_decimal one = {{780918544, -1052305705, 759091845, 1572864}};
  s21_decimal two = {{-1155431885, -1618467203, -658470446, 262144}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000000000000000000020874261
  s21_decimal standart = {{20874261, 0, 0, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_84) {
  // one = 41134732962229179,676431435338
  // two = -29699225506,78728977663664203
  s21_decimal one = {{-1732819382, 485323962, -2065048954, 786432}};
  s21_decimal two = {{1652564043, 334914806, 160999824, -2146369536}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1385043,961931885562248713794
  s21_decimal standart = {{292181570, -1607503045, 75083383, -2146107392}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_85) {
  // one = -121630550,73604258959852329250
  // two = 6080792173096728161431951,7602
  s21_decimal one = {{-2126751454, -1103253704, 659360536, -2146172928}};
  s21_decimal two = {{51380130, 1083027975, -998563254, 262144}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0000000000000000200024186444
  s21_decimal standart = {{-1839276468, 46, 0, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_86) {
  // one = -643943197393093882602802,65191
  // two = 68800516673,850432442148437290
  s21_decimal one = {{817523175, -625896932, -804144229, -2147155968}};
  s21_decimal two = {{1813888298, 1269981105, -565283814, 1179648}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -9359569208552,798120689714656
  s21_decimal standart = {{35046880, 2027520283, 507383263, -2146500608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_87) {
  // one = -58,992018615616087395259828798
  // two = -21294295379090,730506537518946
  s21_decimal one = {{25872958, 506007638, -1097003559, -2145714176}};
  s21_decimal two = {{-2048800926, -1812860980, 1154366065, -2146500608}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,000000000002770320293083821
  s21_decimal standart = {{1962654381, 645015, 0, 1769472}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_88) {
  // one = 34448581792940061126738,84955
  // two = 47021032590169,756778456802177
  s21_decimal one = {{-1763415269, 406952612, 186746136, 327680}};
  s21_decimal two = {{1738138497, 1454653016, -1745952012, 983040}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 732620699,61734317151330429364
  s21_decimal standart = {{1259006388, -1439380260, -323422526, 1310720}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_89) {
  // one = 57557329074035,960651006309564
  // two = -27271060,962239898825553890129
  s21_decimal one = {{-123243332, 973427669, -1174778235, 983040}};
  s21_decimal two = {{292834129, 267389483, 1478367177, -2146107392}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2110564,3507500894105480110248
  s21_decimal standart = {{-1155096408, 544827593, 1144139227, -2146041856}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_90) {
  // one = 995,329254453081595454281412
  // two = 55622701218288,273033970519614
  s21_decimal one = {{1932121796, 3523699, 53956907, 1572864}};
  s21_decimal two = {{963317310, 81660174, -1279654621, 983040}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000000000178942991378100452
  s21_decimal standart = {{-601673500, 41663411, 0, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_91) {
  // one = 63905811331633258,652973472933
  // two = 5094623771,2372785452864387741
  s21_decimal one = {{-1181147995, 44140688, -830626322, 786432}};
  s21_decimal two = {{-643155299, 1657322559, -1533166216, 1245184}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 12543774,418128056527422582603
  s21_decimal standart = {{2084138827, -1008773323, 679999373, 1376256}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_92) {
  // one = -26491472984428745510256,058438
  // two = 38189388566557222232143173,590
  s21_decimal one = {{1480269894, 442101526, 1436105628, -2147090432}};
  s21_decimal two = {{-965732394, 2094746686, 2070250902, 196608}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,000693686753802273688617563
  s21_decimal standart = {{-953187749, -711784134, 37604, -2145714176}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_93) {
  // one = -5939943341111625444095830476,5
  // two = -25549616298427551916130,364510
  s21_decimal one = {{34447869, 1876965199, -1074917559, -2147418112}};
  s21_decimal two = {{1281682526, -660092671, 1385047474, -2147090432}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 232486,59673520022872740631844
  s21_decimal standart = {{546084132, 1161047136, 1260312366, 1507328}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_94) {
  // one = -48289739017257,737353830967062
  // two = -76969918043482551197775143,231
  s21_decimal one = {{49653526, -1874996592, -1677175299, -2146500608}};
  s21_decimal two = {{-1310744257, -263064826, -122419679, -2147287040}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,000000000000627384571073305
  s21_decimal standart = {{1518277401, 146074, 0, 1769472}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_95) {
  // one = 1109783438,914613865421775538
  // two = 382012263,29323930102621444604
  s21_decimal one = {{-1064000846, -975030923, 60161480, 1179648}};
  s21_decimal two = {{-862807556, -458819100, 2070892628, 1310720}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2,9050989864760563176359937156
  s21_decimal standart = {{-1613937532, 907907391, 1574857316, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_96) {
  // one = 578750447018737,62883462103612
  // two = 26383,962503008614530810856756
  s21_decimal one = {{570556988, -329162641, -1157554837, 917504}};
  s21_decimal two = {{-1432402636, 974533918, 1430277473, 1572864}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 21935690931,66887234448677398
  s21_decimal standart = {{147872278, -792722754, 118913618, 1114112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_97) {
  // one = 1598528014141834430394725,6449
  // two = 6729520456109193676426153,4170
  s21_decimal one = {{1353290369, -619514578, 866563772, 262144}};
  s21_decimal two = {{2017429978, 642592548, -646886947, 262144}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,2375396619369302354656229926
  s21_decimal standart = {{-1253311962, -1023293037, 128770508, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_98) {
  // one = -7856491929918902582679,5077084
  // two = 542835022471743827718,40636900
  s21_decimal one = {{27966940, 1144410425, -35954487, -2147024896}};
  s21_decimal two = {{-54634524, 1397631255, -1352252743, 524288}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -14,473074884050717785158474286
  s21_decimal standart = {{414865966, -1753811582, 784586961, -2145714176}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_99) {
  // one = 97716526,96363280726415845388
  // two = -450917507557895,82868409163931
  s21_decimal one = {{2116233228, 466198551, 529722354, 1310720}};
  s21_decimal two = {{1609506971, -2018215387, -1850538590, -2146566144}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -0,0000002167059946127428510308
  s21_decimal standart = {{1585799780, 2046788461, 117, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_100) {
  // one = -48104385765559913884930,557336
  // two = 11538157055992868,115417565564
  s21_decimal one = {{613172632, -1481584614, -1687223319, -2147090432}};
  s21_decimal two = {{820152700, 1414422847, 625484747, 786432}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4169156,7840615158835571112542
  s21_decimal standart = {{-1305953698, 1529383323, -2034862875, -2146041856}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_101) {
  // one = 28836932774566928991,362968447
  // two = -30933,688159158453361004465910
  s21_decimal one = {{-1310233729, 430336287, 1563253258, 589824}};
  s21_decimal two = {{1111445238, 1105679112, 1676918595, -2145910784}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -932217737057301,275089713159
  s21_decimal standart = {{-2090190841, -913314751, 50535624, -2146697216}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_102) {
  // one = 28836932774566928991,362968447
  // two = 0
  s21_decimal one = {{-1310233729, 430336287, 1563253258, 589824}};
  s21_decimal two = {{0, 0, 0, 0}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2 || code == 3, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_div_test_103) {
  // one = -774566928991,362968447
  // two = 0
  s21_decimal one = {{258435967, -45709802, 41, -2146893824}};
  s21_decimal two = {{0, 0, 0, 0}};
  s21_decimal res = {0};
  int code = s21_div(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2 || code == 3, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

Suite* suite_div(void) {
  Suite* s = suite_create("\033[42m-=S21_DECIMAL_DIV=-\033[0m");
  TCase* tc1_1 = tcase_create("case_div");
  tcase_add_test(tc1_1, s21_div_test_1);
  tcase_add_test(tc1_1, s21_div_test_2);
  tcase_add_test(tc1_1, s21_div_test_3);
  tcase_add_test(tc1_1, s21_div_test_4);
  tcase_add_test(tc1_1, s21_div_test_5);
  tcase_add_test(tc1_1, s21_div_test_6);
  tcase_add_test(tc1_1, s21_div_test_7);
  tcase_add_test(tc1_1, s21_div_test_8);
  tcase_add_test(tc1_1, s21_div_test_9);
  tcase_add_test(tc1_1, s21_div_test_10);
  tcase_add_test(tc1_1, s21_div_test_11);
  tcase_add_test(tc1_1, s21_div_test_12);
  tcase_add_test(tc1_1, s21_div_test_13);
  tcase_add_test(tc1_1, s21_div_test_14);
  tcase_add_test(tc1_1, s21_div_test_15);
  tcase_add_test(tc1_1, s21_div_test_16);
  tcase_add_test(tc1_1, s21_div_test_17);
  tcase_add_test(tc1_1, s21_div_test_18);
  tcase_add_test(tc1_1, s21_div_test_19);
  tcase_add_test(tc1_1, s21_div_test_20);
  tcase_add_test(tc1_1, s21_div_test_21);
  tcase_add_test(tc1_1, s21_div_test_22);
  tcase_add_test(tc1_1, s21_div_test_23);
  tcase_add_test(tc1_1, s21_div_test_24);
  tcase_add_test(tc1_1, s21_div_test_25);
  tcase_add_test(tc1_1, s21_div_test_26);
  tcase_add_test(tc1_1, s21_div_test_27);
  tcase_add_test(tc1_1, s21_div_test_28);
  tcase_add_test(tc1_1, s21_div_test_29);
  tcase_add_test(tc1_1, s21_div_test_30);
  tcase_add_test(tc1_1, s21_div_test_31);
  tcase_add_test(tc1_1, s21_div_test_32);
  tcase_add_test(tc1_1, s21_div_test_33);
  tcase_add_test(tc1_1, s21_div_test_34);
  tcase_add_test(tc1_1, s21_div_test_35);
  tcase_add_test(tc1_1, s21_div_test_36);
  tcase_add_test(tc1_1, s21_div_test_37);
  tcase_add_test(tc1_1, s21_div_test_38);
  tcase_add_test(tc1_1, s21_div_test_39);
  tcase_add_test(tc1_1, s21_div_test_40);
  tcase_add_test(tc1_1, s21_div_test_41);
  tcase_add_test(tc1_1, s21_div_test_42);
  tcase_add_test(tc1_1, s21_div_test_43);
  tcase_add_test(tc1_1, s21_div_test_44);
  tcase_add_test(tc1_1, s21_div_test_45);
  tcase_add_test(tc1_1, s21_div_test_46);
  tcase_add_test(tc1_1, s21_div_test_47);
  tcase_add_test(tc1_1, s21_div_test_48);
  tcase_add_test(tc1_1, s21_div_test_49);
  tcase_add_test(tc1_1, s21_div_test_50);
  tcase_add_test(tc1_1, s21_div_test_51);
  tcase_add_test(tc1_1, s21_div_test_52);
  tcase_add_test(tc1_1, s21_div_test_53);
  tcase_add_test(tc1_1, s21_div_test_54);
  tcase_add_test(tc1_1, s21_div_test_55);
  tcase_add_test(tc1_1, s21_div_test_56);
  tcase_add_test(tc1_1, s21_div_test_57);
  tcase_add_test(tc1_1, s21_div_test_58);
  tcase_add_test(tc1_1, s21_div_test_59);
  tcase_add_test(tc1_1, s21_div_test_60);
  tcase_add_test(tc1_1, s21_div_test_61);
  tcase_add_test(tc1_1, s21_div_test_62);
  tcase_add_test(tc1_1, s21_div_test_63);
  tcase_add_test(tc1_1, s21_div_test_64);
  tcase_add_test(tc1_1, s21_div_test_65);
  tcase_add_test(tc1_1, s21_div_test_66);
  tcase_add_test(tc1_1, s21_div_test_67);
  tcase_add_test(tc1_1, s21_div_test_68);
  tcase_add_test(tc1_1, s21_div_test_69);
  tcase_add_test(tc1_1, s21_div_test_70);
  tcase_add_test(tc1_1, s21_div_test_71);
  tcase_add_test(tc1_1, s21_div_test_72);
  tcase_add_test(tc1_1, s21_div_test_73);
  tcase_add_test(tc1_1, s21_div_test_74);
  tcase_add_test(tc1_1, s21_div_test_75);
  tcase_add_test(tc1_1, s21_div_test_76);
  tcase_add_test(tc1_1, s21_div_test_77);
  tcase_add_test(tc1_1, s21_div_test_78);
  tcase_add_test(tc1_1, s21_div_test_79);
  tcase_add_test(tc1_1, s21_div_test_80);
  tcase_add_test(tc1_1, s21_div_test_81);
  tcase_add_test(tc1_1, s21_div_test_82);
  tcase_add_test(tc1_1, s21_div_test_83);
  tcase_add_test(tc1_1, s21_div_test_84);
  tcase_add_test(tc1_1, s21_div_test_85);
  tcase_add_test(tc1_1, s21_div_test_86);
  tcase_add_test(tc1_1, s21_div_test_87);
  tcase_add_test(tc1_1, s21_div_test_88);
  tcase_add_test(tc1_1, s21_div_test_89);
  tcase_add_test(tc1_1, s21_div_test_90);
  tcase_add_test(tc1_1, s21_div_test_91);
  tcase_add_test(tc1_1, s21_div_test_92);
  tcase_add_test(tc1_1, s21_div_test_93);
  tcase_add_test(tc1_1, s21_div_test_94);
  tcase_add_test(tc1_1, s21_div_test_95);
  tcase_add_test(tc1_1, s21_div_test_96);
  tcase_add_test(tc1_1, s21_div_test_97);
  tcase_add_test(tc1_1, s21_div_test_98);
  tcase_add_test(tc1_1, s21_div_test_99);
  tcase_add_test(tc1_1, s21_div_test_100);
  tcase_add_test(tc1_1, s21_div_test_101);
  tcase_add_test(tc1_1, s21_div_test_102);
  tcase_add_test(tc1_1, s21_div_test_103);

  suite_add_tcase(s, tc1_1);

  return s;
}