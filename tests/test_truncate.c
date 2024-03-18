#include "tests.h"

START_TEST(s21_truncate_test_1) {
  // src = 147120779588939173978,88401223
  s21_decimal src = {{-167379129, 1032701487, 797543344, 524288}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 147120779588939173978
  s21_decimal standart = {{-1925033894, -105512562, 7, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_2) {
  // src = -33491955094287166846068209,899
  s21_decimal src = {{1136802027, -1285676172, 1815602523, -2147287040}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -33491955094287166846068209
  s21_decimal standart = {{-290920975, -2045690110, 1815602, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_3) {
  // src = -422606306278450707,86420317369
  s21_decimal src = {{-1907319623, -576154191, -2004013920, -2146762752}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -422606306278450707
  s21_decimal standart = {{1301358099, 98395698, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_4) {
  // src = -770162388438,79171072131384651
  s21_decimal src = {{-1573075637, -1890581977, -119908623, -2146369536}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -770162388438
  s21_decimal standart = {{1363242454, 179, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_5) {
  // src = -7017490847674483895864677,6030
  s21_decimal src = {{-462204706, 957390109, -490777885, -2147221504}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7017490847674483895864677
  s21_decimal standart = {{1187941733, -252877835, 380418, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_6) {
  // src = -65,789753235093125605993866900
  s21_decimal src = {{1663952532, 1025039109, -728497627, -2145714176}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -65
  s21_decimal standart = {{65, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_7) {
  // src = 77702633099246,588789407857747
  s21_decimal src = {{160152659, -1278350623, -82699116, 983040}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 77702633099246
  s21_decimal standart = {{-1915219986, 18091, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_8) {
  // src = -788,63463611176337950339251799
  s21_decimal src = {{275791447, -650921547, -19770368, -2145779712}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -788
  s21_decimal standart = {{788, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_9) {
  // src = 52309841991220602873255377,173
  s21_decimal src = {{-980600555, 1987462356, -1459245080, 196608}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 52309841991220602873255377
  s21_decimal standart = {{1257444817, 929700398, 2835722, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_10) {
  // src = -208559,2092511593950631909856
  s21_decimal src = {{261577184, -511174272, 113060173, -2146041856}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -208559
  s21_decimal standart = {{208559, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_11) {
  // src = 64,751859519046583084053050276
  s21_decimal src = {{522335140, 649934993, -784761958, 1769472}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 64
  s21_decimal standart = {{64, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_12) {
  // src = 4094630237642303463284884,1584
  s21_decimal src = {{-2008769680, -1768189267, -2075263797, 262144}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4094630237642303463284884
  s21_decimal standart = {{-1402937196, 1503061734, 221970, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_13) {
  // src = 17130730011,787526469178032229
  s21_decimal src = {{-434175899, -1064579118, 928658734, 1179648}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 17130730011
  s21_decimal standart = {{-49139173, 3, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_14) {
  // src = -3980047600844231704,4652631178
  s21_decimal src = {{-650189686, -1221841305, -2137379169, -2146828288}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3980047600844231704
  s21_decimal standart = {{-1384688616, 926677044, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_15) {
  // src = -704988373,68583389732678800745
  s21_decimal src = {{416159081, -1563287813, -473217665, -2146172928}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -704988373
  s21_decimal standart = {{704988373, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_16) {
  // src = 2438507336911749660551040382,0
  s21_decimal src = {{-309917972, 647597055, 1321917476, 65536}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2438507336911749660551040382
  s21_decimal standart = {{828001662, -1653227213, 132191747, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_17) {
  // src = 7552895118182,0465845143075899
  s21_decimal src = {{942406715, -669723554, -200534649, 1048576}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 7552895118182
  s21_decimal standart = {{-1952355482, 1758, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_18) {
  // src = 540496727432039,29216490992004
  s21_decimal src = {{-1266617980, -2080427598, -1364928666, 917504}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 540496727432039
  s21_decimal standart = {{863034215, 125844, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_19) {
  // src = -6679248188,6718031984752482309
  s21_decimal src = {{-1287497723, 1563023283, -674139598, -2146238464}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6679248188
  s21_decimal standart = {{-1910686404, 1, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_20) {
  // src = -4860286229916812493782006910,2
  s21_decimal src = {{-1221436178, -1337474291, -1660200852, -2147418112}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4860286229916812493782006910
  s21_decimal standart = {{-122143618, 2013736218, 263476644, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_21) {
  // src = 164761279,64781579108854175861
  s21_decimal src = {{-1659987851, -1381828256, 893172686, 1310720}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 164761279
  s21_decimal standart = {{164761279, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_22) {
  // src = -23155802322655,33314254318920
  s21_decimal src = {{2018061640, -346436321, 125527855, -2146566144}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -23155802322655
  s21_decimal standart = {{1633629919, 5391, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_23) {
  // src = 6640750650374,7410625774486036
  s21_decimal src = {{-950009324, 152086423, -695009155, 1048576}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6640750650374
  s21_decimal standart = {{731210758, 1546, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_24) {
  // src = 510425283315508,08505460777920
  s21_decimal src = {{361554880, 1335798510, -1527946291, 917504}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 510425283315508
  s21_decimal standart = {{-1515043020, 118842, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_25) {
  // src = -1586773112,4777017756430475584
  s21_decimal src = {{-24796864, -451164951, 860191427, -2146238464}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1586773112
  s21_decimal standart = {{1586773112, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_26) {
  // src = 362351296684,17080422635432588
  s21_decimal src = {{-1534825844, 1458518176, 1964310315, 1114112}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 362351296684
  s21_decimal standart = {{1574043820, 84, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_27) {
  // src = 32348489923287532765073648,512
  s21_decimal src = {{1689004928, -1835284259, 1753615152, 196608}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 32348489923287532765073648
  s21_decimal standart = {{126243056, 655294712, 1753615, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_28) {
  // src = -68748200557474643,146249464999
  s21_decimal src = {{1826221223, -239836314, -568119877, -2146697216}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -68748200557474643
  s21_decimal standart = {{-919801005, 16006687, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_29) {
  // src = -28795802615341809453546,498195
  s21_decimal src = {{16672915, -1284762118, 1561023587, -2147090432}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -28795802615341809453546
  s21_decimal standart = {{-790574614, 101308403, 1561, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_30) {
  // src = 6438343191299780074202578,3310
  s21_decimal src = {{61958158, -1686897311, -804734459, 262144}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6438343191299780074202578
  s21_decimal standart = {{-542448174, 1218743028, 349023, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_31) {
  // src = 26746104290594383180,035560277
  s21_decimal src = {{751080277, -561287449, 1449909218, 589824}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 26746104290594383180
  s21_decimal standart = {{913171788, 1932345381, 1, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_32) {
  // src = 77191002596488681801159955325
  s21_decimal src = {{-1486466179, -1836690708, -110434661, 0}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 77191002596488681801159955325
  s21_decimal standart = {{-1486466179, -1836690708, -110434661, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_33) {
  // src = 540880,43580471324316119030875
  s21_decimal src = {{-810066853, -979756861, -1362848579, 1507328}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 540880
  s21_decimal standart = {{540880, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_34) {
  // src = 227554689638654,37246213229103
  s21_decimal src = {{-2137355729, 1406468142, 1233576444, 917504}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 227554689638654
  s21_decimal standart = {{-1267638018, 52981, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_35) {
  // src = -272,29840433957518113498858930
  s21_decimal src = {{-952236622, -1088694332, 1476132607, -2145779712}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -272
  s21_decimal standart = {{272, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_36) {
  // src = 760758718530255117906,75401871
  s21_decimal src = {{-497116017, -691683490, -170886020, 524288}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 760758718530255117906
  s21_decimal standart = {{-1321410990, 1034282964, 41, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_37) {
  // src = -4512687362,650849564235635178
  s21_decimal src = {{-1186752022, 501208187, 244633272, -2146304000}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4512687362
  s21_decimal standart = {{217720066, 1, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_38) {
  // src = -702571877940646988373,17048241
  s21_decimal src = {{-877537359, -204652748, -486317515, -2146959360}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -702571877940646988373
  s21_decimal standart = {{123554389, 371505306, 38, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_39) {
  // src = 324399982963061267094907715,02
  s21_decimal src = {{1440015918, 1778366678, 1758575831, 131072}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 324399982963061267094907715
  s21_decimal standart = {{-1961284797, 1349223528, 17585758, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_40) {
  // src = -71492945325665,862677280484222
  s21_decimal src = {{-820876418, -112889433, -419326965, -2146500608}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -71492945325665
  s21_decimal standart = {{-1080283551, 16645, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_41) {
  // src = 232447805,47678639776684243617
  s21_decimal src = {{1239612065, 1877324799, 1260102078, 1310720}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 232447805
  s21_decimal standart = {{232447805, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_42) {
  // src = 68843523396231581,40375543454
  s21_decimal src = {{359018142, 595946749, 373201488, 720896}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 68843523396231581
  s21_decimal standart = {{-585211491, 16028881, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_43) {
  // src = 744451,30340032785024342231090
  s21_decimal src = {{-1662056398, 1209051535, -259288694, 1507328}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 744451
  s21_decimal standart = {{744451, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_44) {
  // src = -685359369529562328,58413546281
  s21_decimal src = {{1949023017, -488614643, -579626710, -2146762752}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -685359369529562328
  s21_decimal standart = {{608933080, 159572663, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_45) {
  // src = -460290,52853696766183371445612
  s21_decimal src = {{-653257364, 306691025, -1799727341, -2145976320}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -460290
  s21_decimal standart = {{460290, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_46) {
  // src = 102,37691887623176100293446091
  s21_decimal src = {{-1931671093, 1245169484, 554986389, 1703936}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 102
  s21_decimal standart = {{102, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_47) {
  // src = -203713778140323757200,32429286
  s21_decimal src = {{1215915238, 536206929, 1104334604, -2146959360}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -203713778140323757200
  s21_decimal standart = {{-1833190256, 186169829, 11, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_48) {
  // src = 1158075914467410746321,3154440
  s21_decimal src = {{2111996040, 791785694, 627794211, 458752}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1158075914467410746321
  s21_decimal standart = {{2108464081, -947379083, 62, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_49) {
  // src = -4372317387328817,6399154229449
  s21_decimal src = {{1902194889, 296457630, -1924729291, -2146631680}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4372317387328817
  s21_decimal standart = {{2025295153, 1018009, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_50) {
  // src = -4838067,7696747066292792244758
  s21_decimal src = {{512539158, 1102552497, -1672245503, -2146041856}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4838067
  s21_decimal standart = {{4838067, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_51) {
  // src = -78714070627524459366117644,169
  s21_decimal src = {{1547540361, -98901901, -27868978, -2147287040}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -78714070627524459366117644
  s21_decimal standart = {{-2047151860, 1369995665, 4267098, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_52) {
  // src = -3996833,1580271354089979417635
  s21_decimal src = {{-1526557661, 2137003209, -2128279700, -2146041856}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3996833
  s21_decimal standart = {{3996833, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_53) {
  // src = 1833039802,3405353381960088933
  s21_decimal src = {{-721945243, -107356898, 993692867, 1245184}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1833039802
  s21_decimal standart = {{1833039802, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_54) {
  // src = 176,79174915420312017777772080
  s21_decimal src = {{-1398487504, -1922011525, 958389992, 1703936}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 176
  s21_decimal standart = {{176, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_55) {
  // src = -3473026025532146617839731799,8
  s21_decimal src = {{-70734994, -41553050, 1882731180, -2147418112}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3473026025532146617839731799
  s21_decimal standart = {{-1295563689, 425341424, 188273118, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_56) {
  // src = -8448,14756761541472450455778
  s21_decimal src = {{858990818, -1153482990, 45797499, -2145976320}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -8448
  s21_decimal standart = {{8448, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_57) {
  // src = -75957741351911661,406974281847
  s21_decimal src = {{-362903433, -1968241806, -177289887, -2146697216}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -75957741351911661
  s21_decimal standart = {{-818364179, 17685289, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_58) {
  // src = 744600205019000,91608328517853
  s21_decimal src = {{-621856547, -1830669776, -258481497, 917504}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 744600205019000
  s21_decimal standart = {{-1095219336, 173365, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_59) {
  // src = -222760220,48630070703643718062
  s21_decimal src = {{-2104462930, -116024299, 1207585574, -2146172928}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -222760220
  s21_decimal standart = {{222760220, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_60) {
  // src = -83514232657452,89632700687455
  s21_decimal src = {{63693919, 1732381339, 452731562, -2146566144}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -83514232657452
  s21_decimal standart = {{-1406413268, 19444, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_61) {
  // src = 375335356,62536127598949004773
  s21_decimal src = {{-879004187, 1370916314, 2034697045, 1310720}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 375335356
  s21_decimal standart = {{375335356, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_62) {
  // src = -754392,11958144888305289696276
  s21_decimal src = {{1442747412, -941643041, -205399422, -2145976320}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -754392
  s21_decimal standart = {{754392, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_63) {
  // src = 414544077493268,0282303496490
  s21_decimal src = {{917802, -1268732267, 224724794, 851968}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 414544077493268
  s21_decimal standart = {{-1870949356, 96518, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_64) {
  // src = -6526484492164107700299951241,5
  s21_decimal src = {{1538866527, -1938577065, -756952964, -2147418112}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6526484492164107700299951241
  s21_decimal standart = {{1442376841, 1094632482, 353801433, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_65) {
  // src = 3278939179,4917772471935957892
  s21_decimal src = {{-974652540, -316061795, 1777516490, 1245184}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3278939179
  s21_decimal standart = {{-1016028117, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_66) {
  // src = -1472760473308217282185,7611496
  s21_decimal src = {{1926737640, 1528039719, 798385052, -2147024896}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1472760473308217282185
  s21_decimal standart = {{1416957577, -693614732, 79, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_67) {
  // src = 743884069,16837617563175532159
  s21_decimal src = {{1984214655, 1497025825, -262363677, 1310720}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 743884069
  s21_decimal standart = {{743884069, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_68) {
  // src = -1634217136412299412097222,4027
  s21_decimal src = {{-1491941861, -834823583, 885910884, -2147221504}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1634217136412299412097222
  s21_decimal standart = {{1450690758, 380021123, 88591, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_69) {
  // src = -141162047657965940940775,68445
  s21_decimal src = {{-385948227, -1218289243, 765240993, -2147155968}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -141162047657965940940775
  s21_decimal standart = {{1846058983, 1760666710, 7652, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_70) {
  // src = 671261,27604372783107926713969
  s21_decimal src = {{1301079665, -171764175, -656052628, 1507328}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 671261
  s21_decimal standart = {{671261, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_71) {
  // src = -38198571461407884,843715601237
  s21_decimal src = {{-1495063723, 923679691, 2070748708, -2146697216}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -38198571461407884
  s21_decimal standart = {{-85822324, 8893797, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_72) {
  // src = -4962,142293132399148430811087
  s21_decimal src = {{-1493409841, -1203374691, 268998272, -2145910784}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4962
  s21_decimal standart = {{4962, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_73) {
  // src = 634332479288254,31906674223890
  s21_decimal src = {{527903506, -1665554427, -856244036, 917504}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 634332479288254
  s21_decimal standart = {{169407422, 147692, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_74) {
  // src = 4218734,8487607831620883393600
  s21_decimal src = {{1102916672, 358086644, -2007986552, 1441792}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4218734
  s21_decimal standart = {{4218734, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_75) {
  // src = -62,416855356814860534759035972
  s21_decimal src = {{-348384188, -521373205, -911342788, -2145714176}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -62
  s21_decimal standart = {{62, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_76) {
  // src = 75720201,75299418450507340624
  s21_decimal src = {{1938561872, 894147681, 410480036, 1310720}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 75720201
  s21_decimal standart = {{75720201, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_77) {
  // src = -75458607633,013032229068995400
  s21_decimal src = {{233700168, 1813334556, -204347980, -2146304000}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -75458607633
  s21_decimal standart = {{-1850803695, 17, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_78) {
  // src = 2123398876577905065,4315482828
  s21_decimal src = {{1087803084, -2063636934, 1151096837, 655360}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2123398876577905065
  s21_decimal standart = {{719567273, 494392327, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_79) {
  // src = 183439888,89048565489787285223
  s21_decimal src = {{-1042207001, 1193229888, 994429630, 1310720}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 183439888
  s21_decimal standart = {{183439888, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_80) {
  // src = 5484512323559597022936808158,9
  s21_decimal src = {{383601845, 487128566, -1321807208, 65536}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5484512323559597022936808158
  s21_decimal standart = {{1756347102, -810280603, 297316008, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_81) {
  // src = -663374399815585889926,9241468
  s21_decimal src = {{289327740, -1178268800, 359615982, -2147024896}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -663374399815585889926
  s21_decimal standart = {{-1879835002, -164934164, 35, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_82) {
  // src = -722,69728484379086144839823741
  s21_decimal src = {{394473853, 1653851652, -377217465, -2145779712}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -722
  s21_decimal standart = {{722, 0, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_83) {
  // src = -73210726980581,878892965839691
  s21_decimal src = {{-1944665269, 341451507, -326205834, -2146500608}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -73210726980581
  s21_decimal standart = {{-1285547035, 17045, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_84) {
  // src = 116,13564388202825888059368189
  s21_decimal src = {{-1172823299, -2192150, 629572586, 1703936}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 116
  s21_decimal standart = {{116, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_85) {
  // src = 7706902627887755535968326,1376
  s21_decimal src = {{-863947840, 623087489, -117047010, 262144}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 7706902627887755535968326
  s21_decimal standart = {{1780607046, 122898373, 417792, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_86) {
  // src = -295663910315568800809330,96595
  s21_decimal src = {{939396243, 1926272188, 1602797269, -2147155968}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -295663910315568800809330
  s21_decimal standart = {{-566410894, -117276295, 16027, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_87) {
  // src = 58714826727,296296183635160322
  s21_decimal src = {{1830595842, -1107112705, -1112030162, 1179648}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 58714826727
  s21_decimal standart = {{-1414715417, 13, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_88) {
  // src = 5930,3312200003523295453075795
  s21_decimal src = {{1175148883, 607724856, -1080128300, 1638400}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5930
  s21_decimal standart = {{5930, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_89) {
  // src = 45637138595250,903139831962855
  s21_decimal src = {{-10298137, -1934218935, -1820973056, 983040}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 45637138595250
  s21_decimal standart = {{-1183892046, 10625, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_90) {
  // src = -857038793928,8458230474527542
  s21_decimal src = {{-1180380362, 605614417, 464601661, -2146435072}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -857038793928
  s21_decimal standart = {{-1954665272, 199, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_91) {
  // src = 582804405180,36591232225370996
  s21_decimal src = {{638051188, 658738392, -1135578285, 1114112}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 582804405180
  s21_decimal standart = {{-1311147076, 135, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_92) {
  // src = 1479625608108792573,573304183
  s21_decimal src = {{657035127, -262693404, 80210664, 589824}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1479625608108792573
  s21_decimal standart = {{-1276814595, 344502182, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_93) {
  // src = -2610085644686954034000,7588299
  s21_decimal src = {{-2025958965, 736208885, 1414930263, -2147024896}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2610085644686954034000
  s21_decimal standart = {{810775376, 2117531908, 141, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_94) {
  // src = 594,17292526238037616612563163
  s21_decimal src = {{341268699, 33072612, -1073949414, 1703936}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 594
  s21_decimal standart = {{594, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_95) {
  // src = -1150719141485312323332078816,0
  s21_decimal src = {{667934912, -1891868299, 623806096, -2147418112}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1150719141485312323332078816
  s21_decimal standart = {{1355283680, -1477677019, 62380609, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_96) {
  // src = 406451613194310203,84090899443
  s21_decimal src = {{-236141581, 762550858, -2091588686, 720896}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 406451613194310203
  s21_decimal standart = {{-1227566533, 94634390, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_97) {
  // src = 42299715964460209712196315029
  s21_decimal src = {{-1173002347, 899266043, -2001895099, 0}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 42299715964460209712196315029
  s21_decimal standart = {{-1173002347, 899266043, -2001895099, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_98) {
  // src = -17724384315640464498992,224582
  s21_decimal src = {{767170886, 211611397, 960840799, -2147090432}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -17724384315640464498992
  s21_decimal standart = {{519266608, -683762877, 960, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_99) {
  // src = 444015,96563799710477482871443
  s21_decimal src = {{-1275966829, -795308827, -1887951924, 1507328}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 444015
  s21_decimal standart = {{444015, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_100) {
  // src = 77206476811222538756667558517
  s21_decimal src = {{-2059842955, 1863843432, -109595802, 0}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 77206476811222538756667558517
  s21_decimal standart = {{-2059842955, 1863843432, -109595802, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_101) {
  // src = 18446744073709551615
  s21_decimal src = {{-1, -1, 0, 0}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = 18446744073709551615
  s21_decimal standart = {{-1, -1, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_truncate_test_102) {
  // src = -18446744073709551615
  s21_decimal src = {{-1, -1, 0, -2147483648}};
  s21_decimal res = {0};
  int code = s21_truncate(src, &res);
  ck_assert_int_eq(code, 0);
  // standart = -18446744073709551615
  s21_decimal standart = {{-1, -1, 0, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

//
//
//

void truncate_test_function(float n, float accuracy) {
  float value0 = 0.0;
  s21_decimal var1 = {{0}}, var2 = {{0}};

  int value1 = 0, value2 = 0;
  s21_from_float_to_decimal(n, &var1);
  s21_truncate(var1, &var2);
  s21_from_decimal_to_float(var2, &value0);
  value2 = (int)value0;
  value1 = truncf(n);
  ck_assert_float_eq_tol(value1, value2, accuracy);
  return;
}

START_TEST(truncate_0) {
  s21_decimal val = {{7, 7, 7, 0}};
  s21_decimal res;
  ck_assert_int_eq(0, s21_truncate(val, &res));
  float fres = 0;
  s21_from_decimal_to_float(res, &fres);
  float need = 129127208515966861312.0;
  ck_assert_float_eq(need, fres);
}
END_TEST

START_TEST(truncate_1) {
  s21_decimal val = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_truncate(val, &res));
  float fres = 0;
  s21_from_decimal_to_float(res, &fres);
  float need = -2.0;
  ck_assert_float_eq(need, fres);
}
END_TEST

START_TEST(truncate_2) {
  s21_decimal val = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {{0}};
  ck_assert_int_eq(0, s21_truncate(val, &res));
  float fres = 0;
  s21_from_decimal_to_float(res, &fres);
  float need = -2.0;
  ck_assert_float_eq(need, fres);
}
END_TEST

START_TEST(truncate_3) {
  s21_decimal val = {{2, 0, 0, ~(UINT_MAX / 2)}};
  s21_decimal res = {{0}};
  set_scale_decimal(&val, 5);
  ck_assert_int_eq(0, s21_truncate(val, &res));
  float fres = 0;
  s21_from_decimal_to_float(res, &fres);
  float need = -0.0;
  ck_assert_float_eq(need, fres);
}

START_TEST(truncate_4) {
  s21_decimal val = {{128, 0, 0, 0}};
  s21_decimal res = {{0}};
  set_scale_decimal(&val, 1);
  ck_assert_int_eq(0, s21_truncate(val, &res));
  float fres = 0;
  s21_from_decimal_to_float(res, &fres);
  float need = 12;
  ck_assert_float_eq(need, fres);
}

START_TEST(truncate_6) {
  s21_decimal value_1 = {{35, 0, 0, 0}};
  s21_decimal check = {{3, 0, 0, 0}};
  set_scale_decimal(&value_1, 1);
  s21_truncate(value_1, &value_1);
  ck_assert_int_eq(s21_is_equal(value_1, check), 1);
}
END_TEST

START_TEST(truncate_8) {
  s21_decimal src1 = {0};
  src1.bits[3] = 0x000A0000;
  src1.bits[2] = 0x0;
  src1.bits[1] = 0xFFFFFFFF;
  src1.bits[0] = 0xFFFFFFFF;
  s21_decimal result = {0};
  result.bits[3] = 0x0;
  result.bits[2] = 0x0;
  result.bits[1] = 0x0;
  result.bits[0] = 0x6DF37F67;
  s21_decimal res_od = {0};
  s21_truncate(src1, &res_od);
  ck_assert_float_eq(res_od.bits[0], result.bits[0]);
  ck_assert_float_eq(res_od.bits[1], result.bits[1]);
  ck_assert_float_eq(res_od.bits[2], result.bits[2]);
  ck_assert_float_eq(res_od.bits[3], result.bits[3]);
}
END_TEST

START_TEST(truncate_9) {
  s21_decimal src1 = {0};
  src1.bits[0] = 0b00000000000000000000000001101101;
  src1.bits[1] = 0b00000000000011000110010101011011;
  src1.bits[2] = 0b00000000000000000011000000111001;
  src1.bits[3] = 0b00000000000011100000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b10000111101111000001011000011110;
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal res_od = {0};
  s21_truncate(src1, &res_od);
  ck_assert_float_eq(res_od.bits[0], result.bits[0]);
  ck_assert_float_eq(res_od.bits[1], result.bits[1]);
  ck_assert_float_eq(res_od.bits[2], result.bits[2]);
  ck_assert_float_eq(res_od.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_trun_1) {
  s21_decimal dec1 = {0};
  dec1.bits[0] = 0b00000000000000000000000011010011;  // 21.1
  dec1.bits[1] = 0b00000000000000000000000000000000;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b00000000000000000000000000010101;
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_truncate(dec1, &res1);
  ck_assert_int_eq(res1.bits[0], result.bits[0]);
  ck_assert_int_eq(res1.bits[1], result.bits[1]);
  ck_assert_int_eq(res1.bits[2], result.bits[2]);
  ck_assert_int_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_trun_2) {
  s21_decimal dec1 = {0};
  dec1.bits[0] = 0b00000000000000000000000010100101;
  dec1.bits[1] = 0b00000000000000000000000000000000;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b00000000000000000000000000010000;
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_truncate(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_trun_4) {
  s21_decimal dec1 = {0};
  dec1.bits[0] = 0b10000000000000000000000010100101;  // 214.7483813
  dec1.bits[1] = 0b00000000000000000000000000000000;
  dec1.bits[2] = 0b00000000000000000000000000000000;
  dec1.bits[3] = 0b00000000000001110000000000000000;
  float num = 0.0;
  s21_from_decimal_to_float(dec1, &num);
  s21_decimal result = {0};
  result.bits[0] = 0b00000000000000000000000011010110;
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_truncate(dec1, &res1);
  ck_assert_int_eq(res1.bits[0], result.bits[0]);
  ck_assert_int_eq(res1.bits[1], result.bits[1]);
  ck_assert_int_eq(res1.bits[2], result.bits[2]);
  ck_assert_int_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_truncate_1) {
  s21_decimal dec1 = {0};

  dec1.bits[3] = 0x000A0000;
  dec1.bits[2] = 0x0;
  dec1.bits[1] = 0xFFFFFFFF;
  dec1.bits[0] = 0xFFFFFFFF;
  s21_decimal result = {0};
  result.bits[3] = 0x0;
  result.bits[2] = 0x0;
  result.bits[1] = 0x0;
  result.bits[0] = 0x6DF37F67;
  s21_decimal res1 = {0};
  s21_truncate(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_truncate_2) {
  s21_decimal dec1 = {0};

  dec1.bits[3] = 0b10000000000011000000000000000000;
  dec1.bits[2] = 0x0;
  dec1.bits[1] = 0xFFFFFFFF;
  dec1.bits[0] = 0xFFFFFFFF;
  s21_decimal result = {0};
  result.bits[3] = 0b10000000000000000000000000000000;
  result.bits[2] = 0x0;
  result.bits[1] = 0x0;
  result.bits[0] = 0x1197998;
  s21_decimal res1 = {0};
  s21_truncate(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_truncate_3) {
  s21_decimal dec1 = {0};

  dec1.bits[3] = 0x80000000;
  dec1.bits[2] = 0x0;
  dec1.bits[1] = 0xFFFFFFFF;
  dec1.bits[0] = 0xFFFFFFFF;
  s21_decimal result = {0};
  result.bits[3] = 0x80000000;
  result.bits[2] = 0x0;
  result.bits[1] = 0xFFFFFFFF;
  result.bits[0] = 0xFFFFFFFF;
  s21_decimal res1 = {0};
  s21_truncate(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_truncate_4) {
  s21_decimal dec1 = {0};

  dec1.bits[0] = 0b00000000000000000000000001101101;
  dec1.bits[1] = 0b00000000000011000110010101011011;
  dec1.bits[2] = 0b00000000000000000011000000111001;
  dec1.bits[3] = 0b00000000000011100000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b10000111101111000001011000011110;
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_truncate(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_truncate_6) {
  s21_decimal dec1 = {0};

  dec1.bits[3] = 0x80090000;
  dec1.bits[2] = 0;
  dec1.bits[1] = 0xFFFFEA34;
  dec1.bits[0] = 0xFF837E4F;
  s21_decimal result = {0};
  s21_truncate(dec1, &result);
  s21_decimal res1 = {0};

  res1.bits[3] = 0x80000000;
  res1.bits[2] = 0;
  res1.bits[1] = 0x4;
  res1.bits[0] = 0x4B829C70;
  ck_assert_int_eq(res1.bits[3], result.bits[3]);
  ck_assert_int_eq(res1.bits[2], result.bits[2]);
  ck_assert_int_eq(res1.bits[1], result.bits[1]);
  ck_assert_int_eq(res1.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_truncate_7) {
  s21_decimal dec1 = {0};

  dec1.bits[0] = 0b11010000101000110011000001101101;
  dec1.bits[1] = 0b00011111100110100110101101011000;
  dec1.bits[2] = 0;
  dec1.bits[3] = 0b00000000000010010000000000000000;
  s21_decimal result = {0};
  s21_truncate(dec1, &result);
  s21_decimal result_origin;
  result_origin.bits[3] = 0;
  result_origin.bits[2] = 0;
  result_origin.bits[1] = 0;
  result_origin.bits[0] = 0b10000111101111000001011000011110;
  ck_assert_int_eq(result_origin.bits[3], result.bits[3]);
  ck_assert_int_eq(result_origin.bits[2], result.bits[2]);
  ck_assert_int_eq(result_origin.bits[1], result.bits[1]);
  ck_assert_int_eq(result_origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_truncate_8) {
  s21_decimal dec1 = {0};

  dec1.bits[0] = 0b01111000101001111011110011000110;
  dec1.bits[1] = 0b10011111111111001111101010000100;
  dec1.bits[2] = 0b00011111111010011010111101101101;
  dec1.bits[3] = 0b00000000000111000000000000000000;
  s21_decimal result = {0};
  result.bits[0] = 0b00000000000000000000000000000000;
  result.bits[1] = 0b00000000000000000000000000000000;
  result.bits[2] = 0b00000000000000000000000000000000;
  result.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal res1 = {0};
  s21_truncate(dec1, &res1);
  ck_assert_float_eq(res1.bits[0], result.bits[0]);
  ck_assert_float_eq(res1.bits[1], result.bits[1]);
  ck_assert_float_eq(res1.bits[2], result.bits[2]);
  ck_assert_float_eq(res1.bits[3], result.bits[3]);
}
END_TEST

START_TEST(s21_truncateTest1) {
  // 6766
  s21_decimal src1, origin;
  // src1 = 2;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_truncate(src1, &result);

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

START_TEST(s21_truncateTest2) {
  // 6787
  s21_decimal src1, origin;
  // src1 = 3.5;

  src1.bits[0] = 0b00000000000000000000000000100011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000010000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_truncate(src1, &result);

  origin.bits[0] = 0b00000000000000000000000000000011;
  origin.bits[1] = 0b00000000000000000000000000000000;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_truncateTest3) {
  // 6808
  s21_decimal src1, origin;
  // src1 = 0;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_truncate(src1, &result);

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

START_TEST(s21_truncateTest4) {
  // 6829
  s21_decimal src1, origin;
  // src1 = 0;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_truncate(src1, &result);

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

START_TEST(s21_truncateTest5) {
  // 6850
  s21_decimal src1, origin;
  // src1 = -9878798789;

  src1.bits[0] = 0b01001100110100101000000111000101;
  src1.bits[1] = 0b00000000000000000000000000000010;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_truncate(src1, &result);

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

START_TEST(s21_truncateTest6) {
  // 6871
  s21_decimal src1, origin;
  // src1 = -545454512454545.35265454545645;

  src1.bits[0] = 0b10000010111000100101101011101101;
  src1.bits[1] = 0b11111001111010000010010110101101;
  src1.bits[2] = 0b10110000001111101111000010010100;
  src1.bits[3] = 0b10000000000011100000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_truncate(src1, &result);

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

START_TEST(s21_truncateTest7) {
  // 6892
  s21_decimal src1, origin;
  // src1 = -5.492654545456454545645464;

  src1.bits[0] = 0b00000111100110110001111110011000;
  src1.bits[1] = 0b01100110010010001001000110100011;
  src1.bits[2] = 0b00000000000001001000101100011101;
  src1.bits[3] = 0b10000000000110000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_truncate(src1, &result);

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

START_TEST(s21_truncateTest8) {
  // 6913
  s21_decimal src1, origin;
  // src1 = 7961327845421.879754123131254;

  src1.bits[0] = 0b01001110111001000011100101110110;
  src1.bits[1] = 0b01001011001101011010000111011001;
  src1.bits[2] = 0b00011001101110010111010010111111;
  src1.bits[3] = 0b00000000000011110000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_truncate(src1, &result);

  origin.bits[0] = 0b10100100000111100100000000101101;
  origin.bits[1] = 0b00000000000000000000011100111101;
  origin.bits[2] = 0b00000000000000000000000000000000;
  origin.bits[3] = 0b00000000000000000000000000000000;
  ck_assert_int_eq(origin.bits[3], result.bits[3]);
  ck_assert_int_eq(origin.bits[2], result.bits[2]);
  ck_assert_int_eq(origin.bits[1], result.bits[1]);
  ck_assert_int_eq(origin.bits[0], result.bits[0]);
}
END_TEST

START_TEST(s21_truncateTest9) {
  // 6934
  s21_decimal src1, origin;
  // src1 = -12345677.187654345678987654346;

  src1.bits[0] = 0b01111000100010101111010011001010;
  src1.bits[1] = 0b01100010000010101110010010000111;
  src1.bits[2] = 0b00100111111001000001101011010101;
  src1.bits[3] = 0b10000000000101010000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_truncate(src1, &result);

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

START_TEST(s21_truncateTest10) {
  // 6955
  s21_decimal src1, origin;
  // src1 = 2.5086531268974139743;

  src1.bits[0] = 0b01100101111011101101100101011111;
  src1.bits[1] = 0b01011100001001010100001101000110;
  src1.bits[2] = 0b00000000000000000000000000000001;
  src1.bits[3] = 0b00000000000100110000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_truncate(src1, &result);

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

START_TEST(s21_truncateTest11) {
  // 6976
  s21_decimal src1, origin;
  // src1 = 1;

  src1.bits[0] = 0b00000000000000000000000000000001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;
  s21_decimal result = {{0, 0, 0, 0}};
  s21_truncate(src1, &result);

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

Suite* suite_truncate(void) {
  Suite* s = suite_create("\033[42m-=S21_DECIMAL_TRUNCATE=-\033[0m");
  TCase* tc1_1 = tcase_create("case_truncate");
  tcase_add_test(tc1_1, s21_truncate_test_1);
  tcase_add_test(tc1_1, s21_truncate_test_2);
  tcase_add_test(tc1_1, s21_truncate_test_3);
  tcase_add_test(tc1_1, s21_truncate_test_4);
  tcase_add_test(tc1_1, s21_truncate_test_5);
  tcase_add_test(tc1_1, s21_truncate_test_6);
  tcase_add_test(tc1_1, s21_truncate_test_7);
  tcase_add_test(tc1_1, s21_truncate_test_8);
  tcase_add_test(tc1_1, s21_truncate_test_9);
  tcase_add_test(tc1_1, s21_truncate_test_10);
  tcase_add_test(tc1_1, s21_truncate_test_11);
  tcase_add_test(tc1_1, s21_truncate_test_12);
  tcase_add_test(tc1_1, s21_truncate_test_13);
  tcase_add_test(tc1_1, s21_truncate_test_14);
  tcase_add_test(tc1_1, s21_truncate_test_15);
  tcase_add_test(tc1_1, s21_truncate_test_16);
  tcase_add_test(tc1_1, s21_truncate_test_17);
  tcase_add_test(tc1_1, s21_truncate_test_18);
  tcase_add_test(tc1_1, s21_truncate_test_19);
  tcase_add_test(tc1_1, s21_truncate_test_20);
  tcase_add_test(tc1_1, s21_truncate_test_21);
  tcase_add_test(tc1_1, s21_truncate_test_22);
  tcase_add_test(tc1_1, s21_truncate_test_23);
  tcase_add_test(tc1_1, s21_truncate_test_24);
  tcase_add_test(tc1_1, s21_truncate_test_25);
  tcase_add_test(tc1_1, s21_truncate_test_26);
  tcase_add_test(tc1_1, s21_truncate_test_27);
  tcase_add_test(tc1_1, s21_truncate_test_28);
  tcase_add_test(tc1_1, s21_truncate_test_29);
  tcase_add_test(tc1_1, s21_truncate_test_30);
  tcase_add_test(tc1_1, s21_truncate_test_31);
  tcase_add_test(tc1_1, s21_truncate_test_32);
  tcase_add_test(tc1_1, s21_truncate_test_33);
  tcase_add_test(tc1_1, s21_truncate_test_34);
  tcase_add_test(tc1_1, s21_truncate_test_35);
  tcase_add_test(tc1_1, s21_truncate_test_36);
  tcase_add_test(tc1_1, s21_truncate_test_37);
  tcase_add_test(tc1_1, s21_truncate_test_38);
  tcase_add_test(tc1_1, s21_truncate_test_39);
  tcase_add_test(tc1_1, s21_truncate_test_40);
  tcase_add_test(tc1_1, s21_truncate_test_41);
  tcase_add_test(tc1_1, s21_truncate_test_42);
  tcase_add_test(tc1_1, s21_truncate_test_43);
  tcase_add_test(tc1_1, s21_truncate_test_44);
  tcase_add_test(tc1_1, s21_truncate_test_45);
  tcase_add_test(tc1_1, s21_truncate_test_46);
  tcase_add_test(tc1_1, s21_truncate_test_47);
  tcase_add_test(tc1_1, s21_truncate_test_48);
  tcase_add_test(tc1_1, s21_truncate_test_49);
  tcase_add_test(tc1_1, s21_truncate_test_50);
  tcase_add_test(tc1_1, s21_truncate_test_51);
  tcase_add_test(tc1_1, s21_truncate_test_52);
  tcase_add_test(tc1_1, s21_truncate_test_53);
  tcase_add_test(tc1_1, s21_truncate_test_54);
  tcase_add_test(tc1_1, s21_truncate_test_55);
  tcase_add_test(tc1_1, s21_truncate_test_56);
  tcase_add_test(tc1_1, s21_truncate_test_57);
  tcase_add_test(tc1_1, s21_truncate_test_58);
  tcase_add_test(tc1_1, s21_truncate_test_59);
  tcase_add_test(tc1_1, s21_truncate_test_60);
  tcase_add_test(tc1_1, s21_truncate_test_61);
  tcase_add_test(tc1_1, s21_truncate_test_62);
  tcase_add_test(tc1_1, s21_truncate_test_63);
  tcase_add_test(tc1_1, s21_truncate_test_64);
  tcase_add_test(tc1_1, s21_truncate_test_65);
  tcase_add_test(tc1_1, s21_truncate_test_66);
  tcase_add_test(tc1_1, s21_truncate_test_67);
  tcase_add_test(tc1_1, s21_truncate_test_68);
  tcase_add_test(tc1_1, s21_truncate_test_69);
  tcase_add_test(tc1_1, s21_truncate_test_70);
  tcase_add_test(tc1_1, s21_truncate_test_71);
  tcase_add_test(tc1_1, s21_truncate_test_72);
  tcase_add_test(tc1_1, s21_truncate_test_73);
  tcase_add_test(tc1_1, s21_truncate_test_74);
  tcase_add_test(tc1_1, s21_truncate_test_75);
  tcase_add_test(tc1_1, s21_truncate_test_76);
  tcase_add_test(tc1_1, s21_truncate_test_77);
  tcase_add_test(tc1_1, s21_truncate_test_78);
  tcase_add_test(tc1_1, s21_truncate_test_79);
  tcase_add_test(tc1_1, s21_truncate_test_80);
  tcase_add_test(tc1_1, s21_truncate_test_81);
  tcase_add_test(tc1_1, s21_truncate_test_82);
  tcase_add_test(tc1_1, s21_truncate_test_83);
  tcase_add_test(tc1_1, s21_truncate_test_84);
  tcase_add_test(tc1_1, s21_truncate_test_85);
  tcase_add_test(tc1_1, s21_truncate_test_86);
  tcase_add_test(tc1_1, s21_truncate_test_87);
  tcase_add_test(tc1_1, s21_truncate_test_88);
  tcase_add_test(tc1_1, s21_truncate_test_89);
  tcase_add_test(tc1_1, s21_truncate_test_90);
  tcase_add_test(tc1_1, s21_truncate_test_91);
  tcase_add_test(tc1_1, s21_truncate_test_92);
  tcase_add_test(tc1_1, s21_truncate_test_93);
  tcase_add_test(tc1_1, s21_truncate_test_94);
  tcase_add_test(tc1_1, s21_truncate_test_95);
  tcase_add_test(tc1_1, s21_truncate_test_96);
  tcase_add_test(tc1_1, s21_truncate_test_97);
  tcase_add_test(tc1_1, s21_truncate_test_98);
  tcase_add_test(tc1_1, s21_truncate_test_99);
  tcase_add_test(tc1_1, s21_truncate_test_100);
  tcase_add_test(tc1_1, s21_truncate_test_101);
  tcase_add_test(tc1_1, s21_truncate_test_102);

  tcase_add_test(tc1_1, truncate_0);
  tcase_add_test(tc1_1, truncate_1);
  tcase_add_test(tc1_1, truncate_2);
  tcase_add_test(tc1_1, truncate_3);
  tcase_add_test(tc1_1, truncate_4);
  tcase_add_test(tc1_1, truncate_6);
  tcase_add_test(tc1_1, truncate_8);
  tcase_add_test(tc1_1, truncate_9);

  tcase_add_test(tc1_1, s21_trun_1);
  tcase_add_test(tc1_1, s21_trun_2);
  tcase_add_test(tc1_1, s21_trun_4);
  tcase_add_test(tc1_1, s21_truncate_1);
  tcase_add_test(tc1_1, s21_truncate_2);
  tcase_add_test(tc1_1, s21_truncate_3);
  tcase_add_test(tc1_1, s21_truncate_4);
  tcase_add_test(tc1_1, s21_truncate_6);
  tcase_add_test(tc1_1, s21_truncate_7);
  tcase_add_test(tc1_1, s21_truncate_8);
  tcase_add_test(tc1_1, s21_truncateTest1);
  tcase_add_test(tc1_1, s21_truncateTest2);
  tcase_add_test(tc1_1, s21_truncateTest3);
  tcase_add_test(tc1_1, s21_truncateTest4);
  tcase_add_test(tc1_1, s21_truncateTest5);
  tcase_add_test(tc1_1, s21_truncateTest6);
  tcase_add_test(tc1_1, s21_truncateTest7);
  tcase_add_test(tc1_1, s21_truncateTest8);
  tcase_add_test(tc1_1, s21_truncateTest9);
  tcase_add_test(tc1_1, s21_truncateTest10);
  tcase_add_test(tc1_1, s21_truncateTest11);

  suite_add_tcase(s, tc1_1);
  return s;
}