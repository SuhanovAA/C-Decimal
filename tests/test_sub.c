#include "tests.h"

START_TEST(s21_sub_test_1) {
  // one = 61523369196117510,183206108732
  // two = -515504825977965599486,24415428
  s21_decimal one = {{-676479428, 227282592, -959778769, 786432}};
  s21_decimal two = {{797166276, 1118242106, -1500410035, -2146959360}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 515566349347161716996,42736039
  s21_decimal standart = {{-1099129433, 485616151, -1500076516, 524288}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_2) {
  // one = 7806202648714481519773449762,3
  // two = 4806515437722785822377951982,8
  s21_decimal one = {{1820781911, 1284925087, -63216361, 65536}};
  s21_decimal two = {{-1223975596, -721211597, -1689350057, 65536}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2999687210991695697395497779,5
  s21_decimal standart = {{-1250209789, 2006136683, 1626133695, 65536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_3) {
  // one = 3756605,5317844323846989775249
  // two = 50788227780586,235493864487746
  s21_decimal one = {{1483440529, 1571411001, 2036459939, 1441792}};
  s21_decimal two = {{-1357595838, -773041342, -1541731952, 983040}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -50788224023980,703709432103047
  s21_decimal standart = {{-1600667513, 747403123, -1541732155, -2146500608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_4) {
  // one = -213004429240269024840925052,06
  // two = -129449303477,78240915678485733
  s21_decimal one = {{-250033034, -1474578636, 1154699324, -2147352576}};
  s21_decimal two = {{-2038637339, 1231518576, 701746080, -2146369536}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -213004429240268895391621574,28
  s21_decimal standart = {{-148950668, -1474581650, 1154699324, -2147352576}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_5) {
  // one = -606423933005981989654,44285149
  // two = -26,117983556872197641063065389
  s21_decimal one = {{924848861, 263918665, -1007536568, -2146959360}};
  s21_decimal two = {{-1274058963, -1438487835, 1415858725, -2145714176}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -606423933005981989628,32486793
  s21_decimal standart = {{-1686949495, 263918664, -1007536568, -2146959360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_6) {
  // one = -15638797574,469336153930829892
  // two = 60681973350,50832067498171775
  s21_decimal one = {{262377540, 1138314847, 847780915, -2146304000}};
  s21_decimal two = {{-1888920193, -1345857945, 328957636, 1114112}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -76320770924,977656828912547642
  s21_decimal standart = {{-1446955206, 564637290, -157610014, -2146304000}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_7) {
  // one = 32745020016394147048040,952015
  // two = -34523590,080976615305941914572
  s21_decimal one = {{1199567055, -30953347, 1775111091, 393216}};
  s21_decimal two = {{1742771148, 1673718316, 1871527568, -2146107392}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 32745020016394181571631,032992
  s21_decimal standart = {{1842522784, -30945309, 1775111091, 393216}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_8) {
  // one = -4605332118255332023758271537,5
  // two = -7015049579792594618377,9626532
  s21_decimal one = {{1021250031, -795211060, -1798411753, -2147418112}};
  s21_decimal two = {{1426337316, 1083740659, -492101299, -2147024896}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4605325103205752231163653159,5
  s21_decimal standart = {{270612875, -219673641, -1798415556, -2147418112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_9) {
  // one = -6219724957924969229734,5294207
  // two = -34682218411412498,062999708210
  s21_decimal one = {{-2076778625, -763292360, -923247641, -2147024896}};
  s21_decimal two = {{-1888591310, 1776009952, 1880126827, -2146697216}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6219690275706557817236,4664210
  s21_decimal standart = {{-347820654, -1915520997, -923266442, -2147024896}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_10) {
  // one = 6127784163176273712739697830,7
  // two = -71828519,382082631142444313526
  s21_decimal one = {{-1080316285, 511068380, -973088845, 65536}};
  s21_decimal two = {{1180642230, 101178953, -401135458, -2146107392}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6127784163176273712811526350,1
  s21_decimal standart = {{-362031091, 511068380, -973088845, 65536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_11) {
  // one = -343583055972957590398979576,48
  // two = -1216015820,5894541873820565302
  s21_decimal one = {{789476624, -1823443615, 1862567478, -2147352576}};
  s21_decimal two = {{865959734, 987476596, 659203497, -2146238464}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -343583055972957589182963755,89
  s21_decimal standart = {{-553021147, -1823443644, 1862567478, -2147352576}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_12) {
  // one = 2654300,672605244175763642356
  // two = 6398062739058870003,214881317
  s21_decimal one = {{1791236084, -930216606, 143889927, 1376256}};
  s21_decimal two = {{-1678208475, 297680730, 346839676, 589824}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6398062739056215702,5422760728
  s21_decimal standart = {{-1064805608, -1324340016, -826570536, -2146828288}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_13) {
  // one = 306058677502597,6240384488245
  // two = 25435521861,468267522956232700
  s21_decimal one = {{-1833716939, -2026458504, 165914741, 851968}};
  s21_decimal two = {{261916668, 108756604, 1378862403, 1179648}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 306033241980736,15577092586827
  s21_decimal standart = {{-681444021, 178159928, 1659009529, 917504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_14) {
  // one = 694618442731607,09390596605699
  // two = -607774337667366,72261793070607
  s21_decimal one = {{-927430909, 1247824539, -529433173, 917504}};
  s21_decimal two = {{1390886415, 1715786821, -1000216010, -2146566144}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1302392780398973,8165238967631
  s21_decimal standart = {{-2101138097, -133135594, 706028540, 851968}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_15) {
  // one = 18672519018421306,782092793100
  // two = 3742460,6009938016897256437573
  s21_decimal one = {{1266849036, 1191698720, 1012239284, 786432}};
  s21_decimal two = {{59553605, 83507836, 2028791957, 1441792}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 18672519014678846,181098991410
  s21_decimal standart = {{-1218367694, 320339209, 1012239284, 786432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_17) {
  // one = 746193103208085032200423,31333
  // two = 3217175601349,7823266887038882
  s21_decimal one = {{1277293765, -173816895, -249846379, 327680}};
  s21_decimal two = {{592312226, 538574188, 1744034388, 1048576}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 746193103204867856599073,53100
  s21_decimal standart = {{-1303893492, -248722602, -249846379, 327680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_18) {
  // one = 2173392027100442610,3265177934
  // two = -1870,2061517658990312461919873
  s21_decimal one = {{-1078447794, -1191908817, 1178198178, 655360}};
  s21_decimal two = {{-2083821951, 1589873937, 1013840786, -2145845248}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2173392027100444480,5326695593
  s21_decimal standart = {{695463081, -1191904462, 1178198178, 655360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_19) {
  // one = -53232039395458,641574984982011
  // two = -19117331046,09618069550703192
  s21_decimal one = {{1038130683, -345698205, -1409252659, -2146500608}};
  s21_decimal two = {{-872766888, 1123178190, 103635259, -2146369536}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -53212922064412,545394289474979
  s21_decimal standart = {{-1315373661, 1404006604, -1410289011, -2146500608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_20) {
  // one = -4496883827469889473208567,8315
  // two = 475858697700,05158875195890136
  s21_decimal one = {{-500969237, -1808644082, -1857201689, -2147221504}};
  s21_decimal two = {{-328869416, 913085237, -1715332127, 1114112}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4496883827470365331906267,8831
  s21_decimal standart = {{-1064735441, -1807536137, -1857201689, -2147221504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_21) {
  // one = 68485277984158603577,619092587
  // two = 49,095478829954064286670862299
  s21_decimal one = {{9933931, -1353248478, -582372938, 589824}};
  s21_decimal two = {{-663013413, 1428567931, -1633496056, 1769472}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 68485277984158603528,523613757
  s21_decimal standart = {{-1840904643, -1353248490, -582372938, 589824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_22) {
  // one = 2212462605691,2161126294976827
  // two = -614009181139,22195929023490773
  s21_decimal one = {{333150523, -787360973, 1199378381, 1048576}};
  s21_decimal two = {{-945444139, -1778329865, -966416856, -2146369536}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2826471786830,4380719197325904
  s21_decimal standart = {{1097599568, -535697230, 1532233425, 1048576}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_23) {
  // one = 71389231803561,446237959043882
  // two = 11223316306420880061,32249684
  s21_decimal one = {{-468501718, -1397456532, -424949286, 983040}};
  s21_decimal two = {{721761364, -1676894700, 60841719, 524288}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -11223244917189076499,876258881
  s21_decimal standart = {{724804673, 333566927, 608413326, -2146893824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_25) {
  // one = -6897262612393137070082793,1267
  // two = -79293135522,41060949545543778
  s21_decimal one = {{2103063171, 1201914192, -555953742, -2147221504}};
  s21_decimal two = {{-987666334, -73334283, 429848948, -2146369536}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6897262612393057776947270,7161
  s21_decimal standart = {{-979908007, 1201729573, -555953742, -2147221504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_26) {
  // one = 5929103487685361478162861839,6
  // two = -207406078526753158495433,01966
  s21_decimal one = {{-529590628, 515074382, -1080793855, 65536}};
  s21_decimal two = {{1701329742, -1601917461, 1124350604, -2147155968}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5929310893763888231321357272,6
  s21_decimal standart = {{-1981548938, 774759712, -1080681420, 65536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_27) {
  // one = 6699797808390038834,6108122925
  // two = 866783624952940,4056271406933
  s21_decimal one = {{-1017571539, -1996941887, -662999627, 655360}};
  s21_decimal two = {{-1166457003, -1613106655, 469884344, 851968}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6698931024765085894,2051851518
  s21_decimal standart = {{1277107454, 817874799, -663469511, 655360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_28) {
  // one = 279732405583892044,26242664806
  // two = 26327980068310660,864473938948
  s21_decimal one = {{170666342, 1044793870, 1516432409, 720896}};
  s21_decimal two = {{-224019452, 1549941585, 1427242659, 786432}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 253404425515581383,39795270911
  s21_decimal standart = {{193068287, 1319296441, 1373708143, 720896}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_29) {
  // one = 7138522315644887365535388,2523
  // two = 18790897339541016756,175897037
  s21_decimal one = {{2142648219, 2058235728, -425166595, 262144}};
  s21_decimal two = {{1869742541, -325890130, 1018656585, 589824}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 7138503524747547824518632,0764
  s21_decimal standart = {{1226684796, -372111207, -425176782, 262144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_30) {
  // one = 18637340,354627879684820423704
  // two = -59678398586899285,736533290659
  s21_decimal one = {{959435800, 394988554, 1010332245, 1376256}};
  s21_decimal two = {{55340707, -349596708, -1059794827, -2146697216}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 59678398605536626,091161170344
  s21_decimal standart = {{-957206104, -305220054, -1059794826, 786432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_31) {
  // one = 14565096764628823587688,161563
  // two = 336811150243738457332513829,74
  s21_decimal one = {{-1174789861, -1144144420, 789575477, 393216}};
  s21_decimal two = {{-1753317698, 249169772, 1825856904, 131072}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -336796585146973828508926141,58
  s21_decimal standart = {{1223641614, -2103498898, 1825777946, -2147352576}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_32) {
  // one = 446318810886236776185920,8415
  // two = 80931,65701175781802504094893
  s21_decimal one = {{-99752737, 824644284, 241949912, 262144}};
  s21_decimal two = {{-818936659, -966377646, 438731391, 1507328}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 446318810886236776104989,18449
  s21_decimal standart = {{-500758479, -343491745, -1875468175, 327680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_33) {
  // one = -60117638403802634,183574742931
  // two = -90574013890159817717335338,59
  s21_decimal one = {{-558176365, 451145307, -1035983588, -2146697216}};
  s21_decimal two = {{1201865891, 653769810, 491002713, -2147352576}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 90574013830042179313532704,41
  s21_decimal standart = {{-734287703, -745953035, 491002712, 131072}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_35) {
  // one = -760818689765950159452,57706926
  // two = 1207,6964984894007166780027191
  s21_decimal one = {{1502045614, -1893690125, -170560915, -2146959360}};
  s21_decimal two = {{2037625143, -1362911276, 654693583, 1638400}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -760818689765950160660,27356775
  s21_decimal standart = {{2012611175, -1893690097, -170560915, -2146959360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_36) {
  // one = -563050681805812891,03796679078
  // two = 4709080223986152,8688457391961
  s21_decimal one = {{-1788137050, 715258540, -1242663434, -2146762752}};
  s21_decimal two = {{-118775975, -1601351140, -1742169792, 851968}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -567759762029799043,90681252998
  s21_decimal standart = {{-28388218, 913993393, -1217135459, -2146762752}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_37) {
  // one = 2968282543506395526969277828,1
  // two = 23568003601916050,853518591472
  s21_decimal one = {{-1374066903, 473375967, 1609109191, 65536}};
  s21_decimal two = {{2110735856, 1362272561, 1277624035, 786432}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2968282543482827523367361777,2
  s21_decimal standart = {{847683948, 418502433, 1609109191, 65536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_38) {
  // one = 38148644,606340733019092856016
  // two = -88457,55253516967697287072188
  s21_decimal one = {{-209802032, -91902891, 2068042167, 1376256}};
  s21_decimal two = {{1641662908, 673914817, 479529353, -2145976320}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 38237102,158875902696065726738
  s21_decimal standart = {{21362962, -2103798371, 2072837461, 1376256}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_39) {
  // one = 345218,84305350275073556147548
  // two = -488253758492634514513,32291363
  s21_decimal one = {{2090921308, 462569557, 1871435098, 1507328}};
  s21_decimal two = {{-1807946973, 1759372177, -1648138368, -2146959360}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 488253758492634859732,16596713
  s21_decimal standart = {{1424200425, 1759380215, -1648138368, 524288}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_40) {
  // one = -10370145154148,419867055028486
  // two = -3893671,857536098020252720495
  s21_decimal one = {{-1170933498, 1099026958, 562166695, -2146500608}};
  s21_decimal two = {{1444420975, 1478823166, 211076374, -2146107392}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -10370141260476,562330957008233
  s21_decimal standart = {{-1548333719, 771001647, 562166484, -2146500608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_41) {
  // one = 2985,4714956722482380650134364
  // two = -70463249195698305770,234425541
  s21_decimal one = {{416365404, -1070735801, 1618427340, 1638400}};
  s21_decimal two = {{-1657163579, -351419359, -475146904, -2146893824}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 70463249195698308755,705921213
  s21_decimal standart = {{-1187938627, -351418664, -475146904, 589824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_42) {
  // one = 53938206254926251743384073594
  // two = 24697759564603470546046,696699
  s21_decimal one = {{-990481030, 335494098, -1370971276, 0}};
  s21_decimal two = {{-1758053125, -973297816, 1338868228, 393216}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 53938181557166687139913527547
  s21_decimal standart = {{-1595936517, 901447207, -1370972615, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_43) {
  // one = -2488065193687661184671,0961528
  // two = 70916299827758012,773157690427
  s21_decimal one = {{-677698184, 605009772, 1348782844, -2147024896}};
  s21_decimal two = {{674356283, -453410818, -450586980, 786432}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2488136109987488942683,8693105
  s21_decimal standart = {{-591190799, -240373175, 1348821287, -2147024896}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_45) {
  // one = -34886,047886622828543395037000
  // two = -219787350315174699785193795,26
  s21_decimal one = {{-561971384, 1741568733, 1891176445, -2145910784}};
  s21_decimal two = {{-1206935994, 2073288671, 1191469613, -2147352576}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 219787350315174699785158909,21
  s21_decimal standart = {{-1210424599, 2073288671, 1191469613, 131072}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_46) {
  // one = 7337235754988,4528619116918712
  // two = -45784,784701225547711560208116
  s21_decimal one = {{1119188920, -865863431, -317443824, 1048576}};
  s21_decimal two = {{-632893708, -32249649, -1812969145, -2145910784}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 7337235800773,2375631372395828
  s21_decimal standart = {{-1449745100, -1639036916, -317443799, 1048576}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_47) {
  // one = -79573011816538340064666228,01
  // two = -6037965156522765222107,4821957
  s21_decimal one = {{-497584815, 1776088889, 431366161, -2147352576}};
  s21_decimal two = {{1964135237, 201349950, -1021779826, -2147024896}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -79566973851381817299444120,53
  s21_decimal standart = {{-1832050795, -1980721018, 431333429, -2147352576}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_48) {
  // one = -40487545480844481,871767776473
  // two = 620220388497551807,03021381490
  s21_decimal one = {{387558617, 1919260788, -2100133058, -2146697216}};
  s21_decimal two = {{1563801458, 619532594, -932745833, 720896}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -660707933978396288,90198159137
  s21_decimal standart = {{-115429599, -47534787, -713262410, -2146762752}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_49) {
  // one = 48239921345139,628796470712024
  // two = -67678293344495268,945497390110
  s21_decimal one = {{-529443112, 629264869, -1679875920, 983040}};
  s21_decimal two = {{908557342, -1242743131, -626119663, -2146697216}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 67726533265840408,574293860822
  s21_decimal standart = {{1620992470, 372793837, -623504571, 786432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_50) {
  // one = -3112,2719682507202862571031940
  // two = 3799,7438204494668996995778898
  s21_decimal one = {{-94139004, -1410536377, 1687166014, -2145845248}};
  s21_decimal two = {{-842725038, -2105215798, 2059845252, 1638400}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6912,0157887001871859566810838
  s21_decimal standart = {{-936864042, 779215122, -547956029, -2145845248}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_51) {
  // one = -296,17382315739521785555876066
  // two = 4865,0580655350559220296020795
  s21_decimal one = {{-813401886, -2134910187, 1605561512, -2145779712}};
  s21_decimal two = {{-606637253, -169150340, -1657614035, 1638400}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5161,2318886924511398851608402
  s21_decimal standart = {{171016018, 905848831, -1497057883, -2145845248}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_52) {
  // one = -6099789899,3415390656392645793
  // two = 4465535862,576600413921079895
  s21_decimal one = {{-2106536799, 1226713671, -988264566, -2146238464}};
  s21_decimal two = {{1966338647, 755373324, 242077184, 1179648}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -10565325761,918139479560344474
  s21_decimal standart = {{-1680288870, 878044691, 572747457, -2146304000}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_53) {
  // one = 15397713541535946,90349889836
  // two = -1983825395646,7299845822160929
  s21_decimal one = {{1960376620, 1568580984, 83471172, 720896}};
  s21_decimal two = {{1029906465, -446461808, 1075433901, -2146435072}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 15399697366931593,633483480576
  s21_decimal standart = {{1214537216, 181792253, 834819267, 786432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_54) {
  // one = 722099729,70824587573637635456
  // two = 314,59778717682296771333718450
  s21_decimal one = {{-1102619264, -2128677590, -380456818, 1310720}};
  s21_decimal two = {{-1760427598, -1798650050, 1705438021, 1703936}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 722099415,11045869891340864122
  s21_decimal standart = {{1996360314, 285001340, -380458523, 1310720}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_55) {
  // one = -75736694970,058894002903641156
  // two = 65440,988502429306937967427240
  s21_decimal one = {{958458948, 732255217, -189272835, -2146304000}};
  s21_decimal two = {{-1061110104, 844556343, -747404201, 1572864}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -75736760411,047396432210579123
  s21_decimal standart = {{1377062579, -1144236625, -189269288, -2146304000}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_56) {
  // one = -97,11238896054632537638324772
  // two = -50593795916725954876011311,144
  s21_decimal one = {{215763492, 1852884190, 526447315, -2145779712}};
  s21_decimal two = {{-1722945496, 1546730177, -1552272124, -2147287040}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 50593795916725954876011214,032
  s21_decimal standart = {{-1723042608, 1546730177, -1552272124, 196608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_57) {
  // one = 1192293346515453504333,3899577
  // two = 2161974910885616,30300623844
  s21_decimal one = {{-687323847, 1142605240, 646343518, 458752}};
  s21_decimal two = {{-1732750364, 2045292203, 11720089, 720896}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1192291184540542618717,0869515
  s21_decimal standart = {{-1352011509, 1104175502, 646342346, 458752}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_58) {
  // one = 3260709641610,0469641374596688
  // two = 6664548017784651,6032267599366
  s21_decimal one = {{-2108162480, -1550389812, 1767634238, 1048576}};
  s21_decimal two = {{1159708166, -1039207045, -682108577, 851968}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6661287308143041,5562626224769
  s21_decimal standart = {{1449579137, -2064153839, -683876211, -2146631680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_59) {
  // one = -31597256,81664786203177674627
  // two = -3941326393332357,2025692237886
  s21_decimal one = {{253781891, 1829484829, 171289072, -2146172928}};
  s21_decimal two = {{-579358658, 269293239, 2136597319, -2146631680}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3941326361735100,3859213617568
  s21_decimal standart = {{-1298396768, -284359152, 2136597301, 851968}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_60) {
  // one = 7666881568976526426139986,3151
  // two = 6328533049835,865034972759294
  s21_decimal one = {{-879861905, -1560312732, -138742470, 262144}};
  s21_decimal two = {{1593607422, 274525713, 343070464, 983040}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 7666881568970197893090150,4501
  s21_decimal standart = {{-1883942411, -1575047496, -138742470, 262144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_61) {
  // one = -24,459560397175335302121237699
  // two = -33111434975,902792270852201522
  s21_decimal one = {{1050258627, 141284286, 1325955426, -2145714176}};
  s21_decimal two = {{708385842, -1076678822, 1794974486, -2146304000}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 33111434951,443231873676866220
  s21_decimal standart = {{1717564076, 1818320579, 1794974485, 1179648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_62) {
  // one = 110639,27350606532109882598946
  // two = 6194263207554389494704462,9763
  s21_decimal one = {{562275874, 2093666294, 599776703, 1507328}};
  s21_decimal two = {{-184181501, 1240167835, -937050483, 262144}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6194263207554389494593823,7028
  s21_decimal standart = {{-1290574236, 1240167835, -937050483, -2147221504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_63) {
  // one = -7867191591273711,3368816573409
  // two = 24801462668935506299627481397
  s21_decimal one = {{-727655455, 1328541786, -30154189, -2146631680}};
  s21_decimal two = {{-249583307, 1391142688, 1344489985, 0}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -24801462668943373491218755108
  s21_decimal standart = {{961359396, 1392974412, 1344489985, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_64) {
  // one = 581386918909781763419103,05777
  // two = -60225964820859818,62008946153
  s21_decimal one = {{-2134295567, -1360663100, -1143262494, 327680}};
  s21_decimal two = {{49511913, 2121966801, 326485609, -2146762752}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 581386979135746584278921,67786
  s21_decimal standart = {{485913706, 725013796, -1143262167, 327680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_65) {
  // one = -394823486618,66929444648427339
  // two = -138217397574617899996,6157799
  s21_decimal one = {{-364077237, -1282847930, 2140342409, -2146369536}};
  s21_decimal two = {{-170734617, 1558414749, 74927801, -2147024896}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 138217397179794413377,94648545
  s21_decimal standart = {{-1316398623, 2096479551, 749278011, 524288}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_66) {
  // one = -75615,253642252205276019889410
  // two = -893283775842156712121356755,5
  s21_decimal one = {{1267537154, -1723936983, -195856183, -2145910784}};
  s21_decimal two = {{337850947, 889317368, 484250105, -2147418112}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 893283775842156712121281140,2
  s21_decimal standart = {{337094794, 889317368, 484250105, 65536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_67) {
  // one = -308133837424,67663828459136646
  // two = 60557982445,280952971176761448
  s21_decimal one = {{-338483578, -1028008112, 1670396879, -2146369536}};
  s21_decimal two = {{-1121396632, 1828077528, -1012112490, 1179648}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -368691819869,95759125576812791
  s21_decimal standart = {{1696860407, 1731780019, 1998682360, -2146369536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_68) {
  // one = 559,37047897001085985136431896
  // two = -34430060721836696325738,705625
  s21_decimal one = {{604885784, -1641902756, -1262613854, 1703936}};
  s21_decimal two = {{-324291879, -1412361099, 1866457331, -2147090432}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 34430060721836696326298,076104
  s21_decimal standart = {{235078600, -1412361098, 1866457331, 393216}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_69) {
  // one = 435242318056,66786393970261437
  // two = -1901111630431619,0089702853894
  s21_decimal one = {{226311613, -114542645, -1935513963, 1114112}};
  s21_decimal two = {{-461583098, -319071504, 1030594679, -2146631680}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1901546872749675,6768342250920
  s21_decimal standart = {{491492776, 1112859139, 1030830625, 851968}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_70) {
  // one = 37466,01357013103676894023947
  // two = 57916116747298046,49572749252
  s21_decimal one = {{2090406155, -1994852105, 203103666, 1507328}};
  s21_decimal two = {{1499353028, -14073564, 313963897, 720896}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -57916116747260580,482157361483
  s21_decimal standart = {{1873787211, -149458873, -1155328317, -2146697216}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_71) {
  // one = 711076011253,8712756262879944
  // two = 34,650117180245278152385107604
  s21_decimal one = {{1975861960, 437601841, 385475078, 1048576}};
  s21_decimal two = {{595859092, 794403936, 1878386616, 1769472}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 711076011219,22115844604271625
  s21_decimal standart = {{105487369, -725709790, -440216516, 1114112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_72) {
  // one = -59359050,058459160555243710691
  // two = -2209,369660911183458625147285
  s21_decimal one = {{1158949091, -2135193417, -1077106745, -2146107392}};
  s21_decimal two = {{-603958891, 1327889506, 119770169, -2145910784}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -59356840,688798249371785085544
  s21_decimal standart = {{-1121074584, 1432596516, -1077226515, -2146107392}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_73) {
  // one = 2223636967535342,2754009974220
  // two = -171564007339830558,69497272073
  s21_decimal one = {{-375781940, -2102607277, 1205436015, 851968}};
  s21_decimal two = {{2131977993, 1678544518, 930050347, -2146762752}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 173787644307365900,97037371815
  s21_decimal standart = {{410233255, -1950254083, 942104707, 720896}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_74) {
  // one = 2653066444736491302147,1772996
  // two = 320218541024,75421410783125268
  s21_decimal one = {{1129926980, -1864665721, 1438230201, 458752}};
  s21_decimal two = {{-1527783660, 1056071173, 1735908189, 1114112}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2653066444416272761122,4230855
  s21_decimal standart = {{412814279, 1684734685, 1438230201, 458752}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_75) {
  // one = 30770701011282890390843771,465
  // two = 206182,34505130254076883444105
  s21_decimal one = {{134826569, 1145643452, 1668083044, 196608}};
  s21_decimal two = {{196288905, 703904528, 1117716732, 1507328}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 30770701011282890390637589,120
  s21_decimal standart = {{-71355776, 1145643451, 1668083044, 196608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_76) {
  // one = -422,48606773785382450851102645
  // two = -5775092336561897811205316,3761
  s21_decimal one = {{58867637, 1851970621, -2004665734, -2145779712}};
  s21_decimal two = {{-417351951, -848690788, -1164283468, -2147221504}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5775092336561897811204893,8900
  s21_decimal standart = {{-421576812, -848690788, -1164283468, 262144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_77) {
  // one = 1491348136780615919,0434973193
  // two = -13,540090044149471355775991321
  s21_decimal one = {{1447495177, -365602649, 808461444, 655360}};
  s21_decimal two = {{1720696345, 325602864, 734009752, -2145714176}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1491348136780615932,5835873634
  s21_decimal standart = {{-590557854, -365602618, 808461444, 655360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_78) {
  // one = -6494573,8035868240143664135291
  // two = -39351636443488790784075062067
  s21_decimal one = {{2076294267, -1683025100, -774251783, -2146041856}};
  s21_decimal two = {{-1261216973, 620686383, 2133256486, -2147483648}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 39351636443488790784068567493
  s21_decimal standart = {{-1267711547, 620686383, 2133256486, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_79) {
  // one = 562497549047543625,3674028758
  // two = -23400,718660391792887391006425
  s21_decimal one = {{912080598, 1492755363, 304930532, 655360}};
  s21_decimal two = {{-2130235687, 2001210996, 1268555500, -2145910784}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 562497549047567026,08606326759
  s21_decimal standart = {{-1879609369, 2043196584, -1245661973, 720896}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_80) {
  // one = -703,51247379056758680486408465
  // two = 6529434773039,1614165334758028
  s21_decimal one = {{-390336239, 1167906321, -481218534, -2145779712}};
  s21_decimal two = {{298979980, 67549920, -755353613, 1048576}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6529434773742,6738903240433896
  s21_decimal standart = {{-79666968, 1705542540, -755353613, -2146435072}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_81) {
  // one = -475439521508511078136,84809712
  // two = -44124,868669217381951157579809
  s21_decimal one = {{584454128, -2040186277, -1717604486, -2146959360}};
  s21_decimal two = {{-1104662495, -1760280656, -1902953373, -2145910784}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -475439521508511034011,97942790
  s21_decimal standart = {{-970999802, -2040187305, -1717604486, -2146959360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_82) {
  // one = 26517844301441077498861662,554
  // two = -2085968332,2321200002143691643
  s21_decimal one = {{1931817306, 269459793, 1437535220, 196608}};
  s21_decimal two = {{424223611, -983485262, 1130805698, -2146238464}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 26517844301441079584829994,786
  s21_decimal standart = {{546043682, 269460279, 1437535220, 196608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_83) {
  // one = 682164143967522713478699878,94
  // two = 619139744842990932,64745972186
  s21_decimal one = {{-1913736138, 1745958752, -596948062, 131072}};
  s21_decimal two = {{1320501722, 663393337, -938604014, 720896}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 682164143348382968635708946,29
  s21_decimal standart = {{883924773, 215390110, -596948065, 131072}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_84) {
  // one = -31191565294787,082040619610486
  // two = 271,09713704917413824317850617
  s21_decimal one = {{-349130378, -895153245, 1690898142, -2146500608}};
  s21_decimal two = {{-1709210631, -1217298238, 1469620524, 1703936}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -31191565295058,179177668784624
  s21_decimal standart = {{-727600656, -832033524, 1690898142, -2146500608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_85) {
  // one = -4422,3969982309513185246315591
  // two = 535937,89804919371311832278045
  s21_decimal one = {{136315975, -1985625811, -1897581080, -2145845248}};
  s21_decimal two = {{480420893, -381165195, -1389642130, 1507328}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -540360,29504742466443684741201
  s21_decimal standart = {{1383727185, 329122987, -1365668267, -2145976320}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_86) {
  // one = 174550,08599595940466604437944
  // two = 61643783050335284263,240651364
  s21_decimal one = {{-1707544136, 952426402, 946237912, 1507328}};
  s21_decimal two = {{421843556, 729850348, -953251121, 589824}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -61643783050335109713,154655405
  s21_decimal standart = {{2101724333, 729809707, -953251121, -2146893824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_87) {
  // one = -27259560087074,743912174611301
  // two = 20158281759,335539121103102830
  s21_decimal one = {{1782999909, 1590337004, 1477743713, -2146500608}};
  s21_decimal two = {{-1363877010, -634257585, 1092782643, 1179648}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -27279718368834,079451295714404
  s21_decimal standart = {{1953434724, 60694389, 1478836496, -2146500608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_88) {
  // one = -4917038367550735308692758186,5
  // two = 100480384770017811262,29244040
  s21_decimal one = {{-1978649943, 629396257, -1629435456, -2147418112}};
  s21_decimal two = {{-179980152, 1284897529, 544705257, 524288}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4917038468031120078710569448,8
  s21_decimal standart = {{1960952600, -1644678417, -1629435402, -2147418112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_89) {
  // one = -20374229653,947644192741515940
  // two = -1527453,9012071947847399373231
  s21_decimal one = {{-821697884, -1389717620, 1104489202, -2146304000}};
  s21_decimal two = {{472381871, 129492511, 828034419, -2146041856}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -20372702200,046436997956776003
  s21_decimal standart = {{1954951235, 1007290679, 1104406399, -2146304000}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_90) {
  // one = 33554,055169892555448599777527
  // two = -32452991002,842162936292533920
  s21_decimal one = {{1065685239, -1955073368, 1818968975, 1572864}};
  s21_decimal two = {{-455121248, 1918562375, 1759280167, -2146304000}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 32453024556,897332828847982520
  s21_decimal standart = {{1844955064, 1785313355, 1759281986, 1179648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_91) {
  // one = -58086064294223471966495,805158
  // two = 11234104763553989,122280745569
  s21_decimal one = {{1461030630, -229828612, -1146115442, -2147090432}};
  s21_decimal two = {{1694853729, -2024005675, 609002039, 786432}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -58086075528328235520484,927439
  s21_decimal standart = {{-1639225393, -221068903, -1146114833, -2147090432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_92) {
  // one = 61895,464545109762059697719480
  // two = -23796647443,560961889679424830
  s21_decimal one = {{117246136, 1461903463, -939607440, 1572864}};
  s21_decimal two = {{-1689535170, -820248529, 1290018842, -2146304000}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 23796709339,025506999441484528
  s21_decimal standart = {{-947197200, 725322684, 1290022198, 1179648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_93) {
  // one = 1752022384907,0292901253917242
  // two = -7636906108271,8486784961286012
  s21_decimal one = {{-243488198, -87110934, 949773237, 1048576}};
  s21_decimal two = {{882249596, -738396616, -154992200, -2146435072}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 9388928493178,877968621520325
  s21_decimal standart = {{493372869, 2064932893, 508974833, 983040}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_94) {
  // one = 759252786,74176063884529020132
  // two = -41809648,608727992157134696728
  s21_decimal one = {{-1154962204, 1097155456, -179049692, 1310720}};
  s21_decimal two = {{-2000113384, -1623833282, -2028461704, -2146107392}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 801062435,3504886310024248980
  s21_decimal standart = {{-1982333292, 1510816420, 434256816, 1245184}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_95) {
  // one = 6151771461618379160076739339,8
  // two = 769928832694727073,61888674106
  s21_decimal one = {{-732897674, -1458198001, -960085305, 65536}};
  s21_decimal two = {{-636870342, 1435626497, -121174731, 720896}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6151771460848450327382012266,2
  s21_decimal standart = {{-45093338, 1044139038, -960085305, 65536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_96) {
  // one = -496128179325863479869725331,03
  // two = -4193794007989313787113898,1032
  s21_decimal one = {{1727226223, 1210732201, -1605451047, -2147352576}};
  s21_decimal two = {{-183761752, 899162026, -2021507009, -2147221504}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -491934385317874166082611432,93
  s21_decimal standart = {{-1663960323, 1760086329, -1628185650, -2147352576}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_97) {
  // one = -50043893091305469,601748998957
  // two = -190690913968083102484217,18562
  s21_decimal one = {{1838799661, 1981207521, -1582082416, -2146697216}};
  s21_decimal two = {{403438114, -54929998, 1033737515, -2147155968}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 190690863924190011178747,58387
  s21_decimal standart = {{-1354063117, -1293976722, 1033737244, 327680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_98) {
  // one = -4095911113908605000531498,7675
  // two = 415,88926621751043598333580127
  s21_decimal one = {{-379296101, 15530511, -2074569432, -2147221504}};
  s21_decimal two = {{-1311435937, -1150468797, -2040427067, 1703936}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4095911113908605000531914,6568
  s21_decimal standart = {{-375137208, 15530511, -2074569432, -2147221504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_99) {
  // one = 512588217560444,77226921371948
  // two = 29978958965772914399,071956746
  s21_decimal one = {{598616364, 1492643209, -1516221001, 917504}};
  s21_decimal two = {{1999367946, -97756687, 1625162621, 589824}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -29978446377555353954,299687532
  s21_decimal standart = {{1504195180, -2086126723, 1625134834, -2146893824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_100) {
  // one = -2335073,6067388243165453940779
  // two = -3868608467560696194442286400,0
  s21_decimal one = {{-326698965, -1417777831, 1265845938, -2146041856}};
  s21_decimal two = {{2024625280, -2093528293, 2097176852, -2147418112}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3868608467560696194439951326,4
  s21_decimal standart = {{2001274544, -2093528293, 2097176852, 65536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_101) {
  // one = 7922816251426433759354395033,5
  // two = 0,08
  s21_decimal one = {{-1, -1, -1, 65536}};
  s21_decimal two = {{8, 0, 0, 131072}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 7922816251426433759354395033,4
  s21_decimal standart = {{-2, -1, -1, 65536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_103) {
  // one = 7922816251426433759354395033,5
  // two = 0,02
  s21_decimal one = {{-1, -1, -1, 65536}};
  s21_decimal two = {{2, 0, 0, 131072}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 7922816251426433759354395033,5
  s21_decimal standart = {{-1, -1, -1, 65536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_104) {
  // one = 0,0000000000000000
  // two = 0,0000000000000000000000000000
  s21_decimal one = {{0, 0, 0, 1048576}};
  s21_decimal two = {{0, 0, 0, 1835008}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000000000000000000000000000
  s21_decimal standart = {{0, 0, 0, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_sub_test_105) {
  // one = 0,0000000000000000000000000000
  // two = 0,0000000000000000000000
  s21_decimal one = {{0, 0, 0, -2145648640}};
  s21_decimal two = {{0, 0, 0, 1441792}};
  s21_decimal res = {0};
  int code = s21_sub(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000000000000000000000000000
  s21_decimal standart = {{0, 0, 0, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

Suite* suite_sub(void) {
  Suite* s = suite_create("\033[42m-=S21_DECIMAL_SUB=-\033[0m");
  TCase* tc1_1 = tcase_create("case_sub");
  tcase_add_test(tc1_1, s21_sub_test_1);
  tcase_add_test(tc1_1, s21_sub_test_2);
  tcase_add_test(tc1_1, s21_sub_test_3);
  tcase_add_test(tc1_1, s21_sub_test_4);
  tcase_add_test(tc1_1, s21_sub_test_5);
  tcase_add_test(tc1_1, s21_sub_test_6);
  tcase_add_test(tc1_1, s21_sub_test_7);
  tcase_add_test(tc1_1, s21_sub_test_8);
  tcase_add_test(tc1_1, s21_sub_test_9);
  tcase_add_test(tc1_1, s21_sub_test_10);
  tcase_add_test(tc1_1, s21_sub_test_11);
  tcase_add_test(tc1_1, s21_sub_test_12);
  tcase_add_test(tc1_1, s21_sub_test_13);
  tcase_add_test(tc1_1, s21_sub_test_14);
  tcase_add_test(tc1_1, s21_sub_test_15);
  tcase_add_test(tc1_1, s21_sub_test_17);
  tcase_add_test(tc1_1, s21_sub_test_18);
  tcase_add_test(tc1_1, s21_sub_test_19);
  tcase_add_test(tc1_1, s21_sub_test_20);
  tcase_add_test(tc1_1, s21_sub_test_21);
  tcase_add_test(tc1_1, s21_sub_test_22);
  tcase_add_test(tc1_1, s21_sub_test_23);
  tcase_add_test(tc1_1, s21_sub_test_25);
  tcase_add_test(tc1_1, s21_sub_test_26);
  tcase_add_test(tc1_1, s21_sub_test_27);
  tcase_add_test(tc1_1, s21_sub_test_28);
  tcase_add_test(tc1_1, s21_sub_test_29);
  tcase_add_test(tc1_1, s21_sub_test_30);
  tcase_add_test(tc1_1, s21_sub_test_31);
  tcase_add_test(tc1_1, s21_sub_test_32);
  tcase_add_test(tc1_1, s21_sub_test_33);
  tcase_add_test(tc1_1, s21_sub_test_35);
  tcase_add_test(tc1_1, s21_sub_test_36);
  tcase_add_test(tc1_1, s21_sub_test_37);
  tcase_add_test(tc1_1, s21_sub_test_38);
  tcase_add_test(tc1_1, s21_sub_test_39);
  tcase_add_test(tc1_1, s21_sub_test_40);
  tcase_add_test(tc1_1, s21_sub_test_41);
  tcase_add_test(tc1_1, s21_sub_test_42);
  tcase_add_test(tc1_1, s21_sub_test_43);
  tcase_add_test(tc1_1, s21_sub_test_45);
  tcase_add_test(tc1_1, s21_sub_test_46);
  tcase_add_test(tc1_1, s21_sub_test_47);
  tcase_add_test(tc1_1, s21_sub_test_48);
  tcase_add_test(tc1_1, s21_sub_test_49);
  tcase_add_test(tc1_1, s21_sub_test_50);
  tcase_add_test(tc1_1, s21_sub_test_51);
  tcase_add_test(tc1_1, s21_sub_test_52);
  tcase_add_test(tc1_1, s21_sub_test_53);
  tcase_add_test(tc1_1, s21_sub_test_54);
  tcase_add_test(tc1_1, s21_sub_test_55);
  tcase_add_test(tc1_1, s21_sub_test_56);
  tcase_add_test(tc1_1, s21_sub_test_57);
  tcase_add_test(tc1_1, s21_sub_test_58);
  tcase_add_test(tc1_1, s21_sub_test_59);
  tcase_add_test(tc1_1, s21_sub_test_60);
  tcase_add_test(tc1_1, s21_sub_test_61);
  tcase_add_test(tc1_1, s21_sub_test_62);
  tcase_add_test(tc1_1, s21_sub_test_63);
  tcase_add_test(tc1_1, s21_sub_test_64);
  tcase_add_test(tc1_1, s21_sub_test_65);
  tcase_add_test(tc1_1, s21_sub_test_66);
  tcase_add_test(tc1_1, s21_sub_test_67);
  tcase_add_test(tc1_1, s21_sub_test_68);
  tcase_add_test(tc1_1, s21_sub_test_69);
  tcase_add_test(tc1_1, s21_sub_test_70);
  tcase_add_test(tc1_1, s21_sub_test_71);
  tcase_add_test(tc1_1, s21_sub_test_72);
  tcase_add_test(tc1_1, s21_sub_test_73);
  tcase_add_test(tc1_1, s21_sub_test_74);
  tcase_add_test(tc1_1, s21_sub_test_75);
  tcase_add_test(tc1_1, s21_sub_test_76);
  tcase_add_test(tc1_1, s21_sub_test_77);
  tcase_add_test(tc1_1, s21_sub_test_78);
  tcase_add_test(tc1_1, s21_sub_test_79);
  tcase_add_test(tc1_1, s21_sub_test_80);
  tcase_add_test(tc1_1, s21_sub_test_81);
  tcase_add_test(tc1_1, s21_sub_test_82);
  tcase_add_test(tc1_1, s21_sub_test_83);
  tcase_add_test(tc1_1, s21_sub_test_84);
  tcase_add_test(tc1_1, s21_sub_test_85);
  tcase_add_test(tc1_1, s21_sub_test_86);
  tcase_add_test(tc1_1, s21_sub_test_87);
  tcase_add_test(tc1_1, s21_sub_test_88);
  tcase_add_test(tc1_1, s21_sub_test_89);
  tcase_add_test(tc1_1, s21_sub_test_90);
  tcase_add_test(tc1_1, s21_sub_test_91);
  tcase_add_test(tc1_1, s21_sub_test_92);
  tcase_add_test(tc1_1, s21_sub_test_93);
  tcase_add_test(tc1_1, s21_sub_test_94);
  tcase_add_test(tc1_1, s21_sub_test_95);
  tcase_add_test(tc1_1, s21_sub_test_96);
  tcase_add_test(tc1_1, s21_sub_test_97);
  tcase_add_test(tc1_1, s21_sub_test_98);
  tcase_add_test(tc1_1, s21_sub_test_99);
  tcase_add_test(tc1_1, s21_sub_test_100);
  tcase_add_test(tc1_1, s21_sub_test_101);
  tcase_add_test(tc1_1, s21_sub_test_103);
  tcase_add_test(tc1_1, s21_sub_test_104);
  tcase_add_test(tc1_1, s21_sub_test_105);

  suite_add_tcase(s, tc1_1);
  return s;
}