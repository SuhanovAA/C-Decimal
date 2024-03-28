#include "tests.h"

START_TEST(s21_add_test_1) {
  // one = -2289958605421993567982,6639888
  // two = -42297566309232099258400118214
  s21_decimal one = {{567819280, 1933597411, 1241389047, -2147024896}};
  s21_decimal two = {{-737798714, 712775948, -2002011632, -2147483648}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -42297568599190704680393686197
  s21_decimal standart = {{-220545867, 1309367285, -2002011508, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_2) {
  // one = 5910935028745113529354355513,6
  // two = -65505223267292103026,166098864
  s21_decimal one = {{-768991168, -888801202, -1090642997, 65536}};
  s21_decimal two = {{-1675727952, -956465379, -743922028, -2146893824}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5910934963239890262062252487,4
  s21_decimal standart = {{-1372745270, 1213788494, -1090643032, 65536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_3) {
  // one = -4687186390,2441608643050933817
  // two = 5496189890,1704280184800302374
  s21_decimal one = {{1501761081, -1831355598, -1754038463, -2146238464}};
  s21_decimal two = {{512906534, -1469643170, -1315476787, 1245184}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 809003499,9262671541749368557
  s21_decimal standart = {{-988854547, 361712427, 438561676, 1245184}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_4) {
  // one = 47271936760789348829,47250890
  // two = -11541568249,824771249163666890
  s21_decimal one = {{1277508298, -1424958666, 256261682, 524288}};
  s21_decimal two = {{-945879606, -2072377949, 625669668, -2146304000}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 47271936749247780579,647737651
  s21_decimal standart = {{-1749496013, 243051762, -1732350470, 589824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_5) {
  // one = 28458083839585047847908146,334
  // two = -11,575397777871586412576686771
  s21_decimal one = {{801635486, 784418727, 1542715816, 196608}};
  s21_decimal two = {{1414841011, -396800331, 627503570, -2145714176}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 28458083839585047847908134,759
  s21_decimal standart = {{801623911, 784418727, 1542715816, 196608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_6) {
  // one = 1042012763276627178607186194,5
  // two = -677700697676569822691794585,40
  s21_decimal one = {{242723513, -639643379, 564876250, 65536}};
  s21_decimal two = {{434631660, -1806483669, -621144453, -2147352576}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 364312065600057355915391609,10
  s21_decimal standart = {{1992603470, -294982825, 1974939664, 131072}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_7) {
  // one = -38,851277731067908968929983108
  // two = 66940586885225272935,053620967
  s21_decimal one = {{1926134404, -29736982, 2106131985, -2145714176}};
  s21_decimal two = {{-1168804121, 1807302346, -666110810, 589824}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 66940586885225272896,202343236
  s21_decimal standart = {{-1365376188, 1807302337, -666110810, 589824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_8) {
  // one = 3140508045813150,3932367551222
  // two = -58122281,959810575400602420582
  s21_decimal one = {{255703798, -45475664, 1702472822, 851968}};
  s21_decimal two = {{-137378458, -2009686460, -1144152078, -2146107392}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3140507987690868,4334261797216
  s21_decimal standart = {{-1221394080, 2066994614, 1702472791, 851968}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_10) {
  // one = 6,292431695250690790905738903
  // two = -243831321,45724662698492958925
  s21_decimal one = {{-2008942953, -1243941816, 341113405, 1769472}};
  s21_decimal two = {{-1094051635, 943994852, 1321812242, -2146172928}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -243831315,16481493173423879834
  s21_decimal standart = {{1814345370, 465790741, 1321812208, -2146172928}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_11) {
  // one = -439057003713730080822,00906397
  // two = 628608266,87879384681312361675
  s21_decimal one = {{1381714589, 1533353617, -1914834510, -2146959360}};
  s21_decimal two = {{-265872181, -164582068, -887275054, 1310720}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -439057003713101472555,13027012
  s21_decimal standart = {{-1789488700, 1518717690, -1914834510, -2146959360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_12) {
  // one = -42589174527115,03818433434048
  // two = 792554,306193001987778773978
  s21_decimal one = {{-474017344, -1145415587, 230876377, -2146566144}};
  s21_decimal two = {{-28867622, 126099044, 42964455, 1376256}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -42589173734560,731991332352701
  s21_decimal standart = {{1432875709, 1583410513, -1986203562, -2146500608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_13) {
  // one = 40,102037223978934659922483156
  // two = 1610985944482492,1889192127166
  s21_decimal one = {{1513838548, -143338451, -2121031503, 1769472}};
  s21_decimal two = {{-837965122, 1828647322, 873317230, 851968}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1610985944482532,2909564366955
  s21_decimal standart = {{-1562152853, 1828740692, 873317230, 851968}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_14) {
  // one = -23503042186205,39466708200526
  // two = -23305122561762019910322096668
  s21_decimal one = {{1231596622, -36456788, 127410246, -2146566144}};
  s21_decimal two = {{-974517732, -1824646747, 1263373225, -2147483648}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -23305122561762043413364282873
  s21_decimal standart = {{6624761, -1824641274, 1263373225, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_15) {
  // one = -928170171974251611794339989,2
  // two = 70,708881926512593241794241940
  s21_decimal one = {{1224783316, 1912823513, 503162058, -2147418112}};
  s21_decimal two = {{-1077844588, -269300103, -461831127, 1769472}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -928170171974251611794339918,5
  s21_decimal standart = {{1224782609, 1912823513, 503162058, -2147418112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_16) {
  // one = 27919717,234201867306816812275
  // two = 167522279,71582783653095146822
  s21_decimal one = {{-249776909, 107941919, 1513530904, 1376256}};
  s21_decimal two = {{-808450746, 163743324, 908140098, 1310720}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 195441996,95002970383776828050
  s21_decimal standart = {{884558482, 1892524435, 1059493188, 1310720}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_17) {
  // one = -4606957,3916964672925205622161
  // two = -4532724674025283006194741863,8
  s21_decimal one = {{1782672785, 1343171230, -1797530690, -2146041856}};
  s21_decimal two = {{1220179982, 1840096587, -1837772327, -2147418112}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4532724674025283006199348821,2
  s21_decimal standart = {{1266249556, 1840096587, -1837772327, -2147418112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_18) {
  // one = -2730636428990787470229225633,6
  // two = 209564783551387785176314154,25
  s21_decimal one = {{-1206548912, 1245264858, 1480280974, -2147418112}};
  s21_decimal two = {{-1068747647, 61614353, 1136052968, 131072}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2521071645439399685052911479,4
  s21_decimal standart = {{-1958667606, 2098096882, 1366675677, -2147418112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_19) {
  // one = -0,152158413214630015896375749
  // two = 753222089867,30209928694157619
  s21_decimal one = {{-893922875, 465842664, 8248524, -2145714176}};
  s21_decimal two = {{-965783245, -38637693, -211742166, 1114112}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 753222089867,14994087372694617
  s21_decimal standart = {{-1518164903, -42180407, -211742166, 1114112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_21) {
  // one = -17,823550881562016545066906173
  // two = -205,94647203126093467138634776
  s21_decimal one = {{1216279101, 1545214573, 966216629, -2145714176}};
  s21_decimal two = {{838317080, -171406076, 1116438061, -2145779712}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -223,77002291282295121645325393
  s21_decimal standart = {{-328545199, -446381349, 1213059724, -2145779712}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_22) {
  // one = -153,05158254799506222392963430
  // two = 762538666429556,62292200508763
  s21_decimal one = {{1114272102, -2128569414, 829694291, -2145779712}};
  s21_decimal two = {{2061552987, -1135488868, -161236903, 917504}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 762538666429403,57133945709257
  s21_decimal standart = {{-1579244855, -1139052378, -161236903, 917504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_23) {
  // one = 1836304385410216550871,5294069
  // two = 257851671985415863397863,17889
  s21_decimal one = {{-1900171915, 13777861, 995462602, 458752}};
  s21_decimal two = {{551739457, -1168068723, 1397816714, 327680}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 259687976370826079948734,70830
  s21_decimal standart = {{-1442947218, -1082031599, 1407771340, 327680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_24) {
  // one = -4550837406847,2639414656415663
  // two = 54413843316,719728568542146861
  s21_decimal one = {{432125871, -1863794665, -1827953395, -2146435072}};
  s21_decimal two = {{1140306221, -585538082, -1345186940, 1179648}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4496423563530,5442128970994194
  s21_decimal standart = {{850219538, -11103347, -1857451199, -2146435072}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_25) {
  // one = -44226579,542811822463669457282
  // two = 7838556,2298597773531782804491
  s21_decimal one = {{-1421127294, 412219229, -1897439615, -2146107392}};
  s21_decimal two = {{-1867287541, -936827571, -45677450, 1441792}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -36388023,312952045110491176833
  s21_decimal standart = {{-2093391999, 1794392175, 1972598696, -2146107392}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_26) {
  // one = -10875860836612651,081875228406
  // two = 440002168513,9022666023451427
  s21_decimal one = {{-1719761162, 1439984870, 589581597, -2146697216}};
  s21_decimal two = {{700594979, -2145108846, 238525653, 1048576}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -10875420834444137,179608626061
  s21_decimal standart = {{1399174029, -988175128, 589557744, -2146697216}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_27) {
  // one = 1723489732669121,6551188896831
  // two = -55245124,230438900084234738091
  s21_decimal one = {{1316232255, 894046755, 934305656, 851968}};
  s21_decimal two = {{1124817323, 2120304398, -1300123111, -2146107392}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1723489677423997,4246799895989
  s21_decimal standart = {{840428981, 1115487302, 934305626, 851968}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_28) {
  // one = -11436124935135924432,250411161
  // two = -562975252341951110953219729,74
  s21_decimal one = {{1817254041, -109517855, 619953574, -2146893824}};
  s21_decimal two = {{15683822, 960321669, -1243072338, -2147352576}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -562975263778076046089144161,99
  s21_decimal standart = {{1632887367, 940382272, -1243072276, -2147352576}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_29) {
  // one = 31045,253078235702328536135333
  // two = 428602503288137651040906,82120
  s21_decimal one = {{1186526885, -1549314444, 1682966541, 1572864}};
  s21_decimal two = {{-1001450744, -48868163, -1971508471, 327680}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 428602503288137651071952,07428
  s21_decimal standart = {{2103074564, -48868162, -1971508471, 327680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_30) {
  // one = -5490945481755,139264715205670
  // two = 78122276060292524706344,741445
  s21_decimal one = {{248556582, 68373032, 297664751, -2146500608}};
  s21_decimal two = {{1403267653, 876488936, -59950225, 393216}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 78122276054801579224589,602180
  s21_decimal standart = {{-1969812092, -401971435, -59950226, 393216}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_31) {
  // one = -33,226753284502122078925073868
  // two = -2363978642272131,2115986832090
  s21_decimal one = {{1707453900, -924047022, 1801225904, -2145714176}};
  s21_decimal two = {{1789696730, -728474155, 1281515389, -2146631680}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2363978642272164,4383519677111
  s21_decimal standart = {{2062588599, -728396793, 1281515389, -2146631680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_32) {
  // one = -6531897493157151787134,3577020
  // two = -2979215733,2959257215217237775
  s21_decimal one = {{-2086361156, 1145906509, -754018570, -2147024896}};
  s21_decimal two = {{-686751985, 735379649, 1615036085, -2146238464}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6531897493160131002867,6536277
  s21_decimal standart = {{-1366222891, 1152843036, -754018570, -2147024896}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_33) {
  // one = 46381152053990665372978510235
  // two = 1538,1406800132577466115101143
  s21_decimal one = {{-1822557797, -146631120, -1780640006, 0}};
  s21_decimal two = {{608375255, 1844055285, 833827733, 1638400}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 46381152053990665372978511773
  s21_decimal standart = {{-1822556259, -146631120, -1780640006, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_35) {
  // one = 51936895725820431410,131670221
  // two = -126270294882097025991780,5658
  s21_decimal one = {{-1962109747, -410680182, -1479462538, 589824}};
  s21_decimal two = {{278894682, 67763562, 68451264, -2147221504}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -126218357986371205560370,43413
  s21_decimal standart = {{-2142767915, -1366298248, 684231089, -2147155968}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_36) {
  // one = -645462658357606,40546435916962
  // two = -77127003360,083644023525278443
  s21_decimal one = {{-723622750, 1064846949, -795907214, -2146566144}};
  s21_decimal two = {{2102330091, 64314357, -113904066, -2146304000}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -645539785360966,48910838269490
  s21_decimal standart = {{-535722446, -1842839479, -795489108, -2146566144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_37) {
  // one = -7661604,8714917703011430066376
  // two = -303646352591283,60821018162045
  s21_decimal one = {{-1199544120, 852339217, -141602973, -2146041856}};
  s21_decimal two = {{1089041277, -1143123438, 1646070175, -2146566144}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -303646360252888,47970195192159
  s21_decimal standart = {{1540864351, 1148856791, 1646070217, -2146566144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_38) {
  // one = 758495,71860991327259063104607
  // two = 16817169541453202,665642471820
  s21_decimal one = {{-1737608097, -1335266132, -183153767, 1507328}};
  s21_decimal two = {{1607807372, -1739329310, 911660587, 786432}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 16817169542211698,384252385093
  s21_decimal standart = {{-1086638267, -1562728264, 911660587, 786432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_39) {
  // one = -74042719511532115971644374,708
  // two = 65640890525,280207283583631628
  s21_decimal one = {{187219636, -1903106921, -281103429, -2147287040}};
  s21_decimal two = {{-640761588, -1848561431, -736567491, 1179648}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -74042719511532050330753849,428
  s21_decimal standart = {{-718120876, -1903122205, -281103429, -2147287040}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_40) {
  // one = 734772559925531230,98186851407
  // two = -37,75675929991765521071844175
  s21_decimal one = {{-2107792305, -987918613, -311757268, 720896}};
  s21_decimal two = {{817605455, 1266650178, 204679802, -2145779712}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 734772559925531193,22510921415
  s21_decimal standart = {{1787498183, -987919492, -311757268, 720896}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_41) {
  // one = -46046,753116762711222953173787
  // two = -700361663195220373,04529963482
  s21_decimal one = {{1111745307, 1094745057, -1798767808, -2145910784}};
  s21_decimal two = {{-1520514598, -819928985, -498299113, -2146762752}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -700361663195266419,79841639753
  s21_decimal standart = {{698414409, -818856875, -498299113, -2146762752}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_42) {
  // one = 42713488160708468917225032233
  // two = -731791792855355,12689230908045
  s21_decimal one = {{2048559657, -370656762, -1979464464, 0}};
  s21_decimal two = {{-578385267, 447498453, -327916038, -2146566144}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 42713488160707737125432176878
  s21_decimal standart = {{-331501330, -370827146, -1979464464, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_43) {
  // one = -1674684,6650841310278743775344
  // two = -56,61097746994704362274820889
  s21_decimal one = {{420501616, 241321872, 907848376, -2146041856}};
  s21_decimal two = {{1257509657, -870922087, 306888723, -2145779712}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1674741,2760616009749180002826
  s21_decimal standart = {{-345165302, -306803048, 907879064, -2146041856}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_44) {
  // one = 59538269230909746116858,027386
  // two = 66444009957768277171839154289
  s21_decimal one = {{387259770, 1326975239, -1067391254, 393216}};
  s21_decimal two = {{217561201, 1043860841, -693030299, 0}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 66444069496037508081585271147
  s21_decimal standart = {{637055339, -777023577, -693027072, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_45) {
  // one = 43575,091981694102914970990428
  // two = -284986299024734517628124408,31
  s21_decimal one = {{-1602439332, -1544377686, -1932756827, 1572864}};
  s21_decimal two = {{137351423, -1477022985, 1544913822, -2147352576}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -284986299024734517628080833,22
  s21_decimal standart = {{132993914, -1477022985, 1544913822, -2147352576}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_46) {
  // one = -51389798729863127628,64484597
  // two = 2811311718749,8471382468741395
  s21_decimal one = {{1215873269, 569306921, 278584657, -2146959360}};
  s21_decimal two = {{1223379219, -2142025396, 1524015136, 1048576}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -51389795918551408878,797707723
  s21_decimal standart = {{-1556882997, -326386080, -1509120878, -2146893824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_47) {
  // one = 8,410925368895949030344374845
  // two = 4562737208546175046388914,0781
  s21_decimal one = {{-1939326403, -521746026, 455957177, 1769472}};
  s21_decimal two = {{-424678355, -29615747, -1821502500, 262144}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4562737208546175046388922,4890
  s21_decimal standart = {{-424594246, -29615747, -1821502500, 262144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_48) {
  // one = 44521,079674908799116474232761
  // two = 3201564154,092369289466283804
  s21_decimal one = {{793423801, 1060074270, -1881474731, 1572864}};
  s21_decimal two = {{1785923356, -1885777748, 173557140, 1179648}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3201608675,1720441982654002782
  s21_decimal standart = {{1903867486, -1997228510, 1735595540, 1245184}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_49) {
  // one = 4705264236,5041386903837642186
  // two = -486049725763229274,96252251905
  s21_decimal one = {{-1200845366, -1425638148, -1744238443, 1245184}};
  s21_decimal two = {{315776769, 182038638, -1660086453, -2146762752}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -486049721057965038,45838382867
  s21_decimal standart = {{1693574931, -1996749037, -1660086479, -2146762752}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_50) {
  // one = -1911265,6106787158943855458510
  // two = 48592119443770345,460694397407
  s21_decimal one = {{-5326642, -1514624308, 1036099163, -2146041856}};
  s21_decimal two = {{1769091551, 1419686378, -1660783223, 786432}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 48592119441859079,850015681513
  s21_decimal standart = {{361065449, 974685176, -1660783223, 786432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_51) {
  // one = -5920497215,4287729605618623550
  // two = 40525287075158754,108322961434
  s21_decimal one = {{65725502, -1799043249, -1085459325, -2146238464}};
  s21_decimal two = {{1172658202, 1607575123, -2098087082, 786432}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 40525281154661538,679550000872
  s21_decimal standart = {{210386664, 1818899720, -2098087403, 786432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_52) {
  // one = -47018858433410,71540313320188
  // two = -62294871921160163409947,021480
  s21_decimal one = {{-1781863684, 1316241674, 254889742, -2146566144}};
  s21_decimal two = {{-1827909464, -1797852166, -917955523, -2147090432}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -62294871968179021843357,736883
  s21_decimal standart = {{2128584627, 559644315, -917955520, -2147090432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_53) {
  // one = 14884729167985984226590573,796
  // two = 5,872931324914286020304535654
  s21_decimal one = {{-403847964, 169384699, 806902785, 196608}};
  s21_decimal two = {{30113894, 285667040, 318372245, 1769472}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 14884729167985984226590579,669
  s21_decimal standart = {{-403842091, 169384699, 806902785, 196608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_54) {
  // one = 49639705889374354464803924719
  // two = 41108,204166643699208326433317
  s21_decimal one = {{-1499714833, 1460538878, -1603993448, 0}};
  s21_decimal two = {{81218085, 956223794, -2066487083, 1572864}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 49639705889374354464803965827
  s21_decimal standart = {{-1499673725, 1460538878, -1603993448, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_55) {
  // one = -303,62365240089572314366209491
  // two = 29591360861,912400345822507496
  s21_decimal one = {{-849220141, -1051519937, 1645947117, -2145779712}};
  s21_decimal two = {{-855264792, -1441401025, 1604150886, 1179648}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 29591360558,288747944926784352
  s21_decimal standart = {{-1024185504, 880152590, 1604150870, 1179648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_56) {
  // one = -4089,4580979819100142284750355
  // two = 32058412649844183819852667,138
  s21_decimal one = {{1548140051, 258612207, -2078067619, -2145845248}};
  s21_decimal two = {{1131895042, 300184079, 1737890032, 196608}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 32058412649844183819848577,680
  s21_decimal standart = {{1127805584, 300184079, 1737890032, 196608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_57) {
  // one = 79901790530,27968989740166392
  // two = 5833401059760217221348,1006585
  s21_decimal one = {{700738808, 1683862225, 433148474, 1114112}};
  s21_decimal two = {{-1164352007, -61694220, -1132674246, 458752}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5833401059840119011878,3803484
  s21_decimal standart = {{-380018596, 124341633, -1132674245, 458752}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_58) {
  // one = -6904073922924982235,2857253132
  // two = 1354189959794650,8134857059885
  s21_decimal one = {{1263944972, 506344077, -552261323, -2146828288}};
  s21_decimal two = {{1883254317, 789024825, 734107848, 851968}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6902719732965187584,4722396072
  s21_decimal standart = {{1979321256, 1158390081, -552995431, -2146828288}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_59) {
  // one = 6376385279,851033044766274294
  // two = 42581016293777331103,369019132
  s21_decimal one = {{-1174031626, -1499140900, 345664538, 1179648}};
  s21_decimal two = {{362823420, -1641956402, -1986645778, 589824}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 42581016300153716383,220052177
  s21_decimal standart = {{-97701679, -157338514, -1986645778, 589824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_60) {
  // one = -2261533109189758266158532,1296
  // two = -50418,270404371298200213572170
  s21_decimal one = {{-456934064, 282251129, 1225979555, -2147221504}};
  s21_decimal two = {{436783690, 1155555290, -1561787381, -2145910784}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2261533109189758266208950,4000
  s21_decimal standart = {{47248640, 282251130, 1225979555, -2147221504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_61) {
  // one = -446518064415274934993590,63575
  // two = -507616626,10744162192227834560
  s21_decimal one = {{-1935413737, 1998523329, -1874388019, -2147155968}};
  s21_decimal two = {{-1442047296, 331791261, -1543172052, -2146172928}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -446518064415275442610216,74319
  s21_decimal standart = {{1803692879, 1998535148, -1874388019, -2147155968}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_62) {
  // one = 1311766237834129607,1435173110
  // two = 62264052251713203226,988004826
  s21_decimal one = {{898186486, 1831589277, 711109902, 655360}};
  s21_decimal two = {{-187415078, -202202958, -919626261, 589824}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 63575818489547332834,131522137
  s21_decimal standart = {{-527093159, 839949429, -848515270, 589824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_63) {
  // one = -62179354069838,616201903697725
  // two = -38500457451026,065843965298563
  s21_decimal one = {{-879792323, 1345273839, -924217758, -2146500608}};
  s21_decimal two = {{1864271747, -2128545630, 2087113980, -2146500608}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -100679811520864,68204586899629
  s21_decimal standart = {{1816434861, -507823909, 545786351, -2146566144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_64) {
  // one = 344083720,80001864489548093516
  // two = -760924431178031749533,72474160
  s21_decimal one = {{-2064410548, 177724985, 1865281588, 1310720}};
  s21_decimal two = {{-673850576, -418357157, -169987690, -2146959360}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -760924431177687665812,92472296
  s21_decimal standart = {{1823807464, -426368480, -169987690, -2146959360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_65) {
  // one = -56927677,868082848948299749527
  // two = 69482690641556651402875092,138
  s21_decimal one = {{10213527, -186746396, -1208911696, -2146107392}};
  s21_decimal two = {{1119599786, 797564540, -528303089, 196608}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 69482690641556651345947414,270
  s21_decimal standart = {{26496766, 797564527, -528303089, 196608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_66) {
  // one = 252583621,09982493898761899280
  // two = -76607775051004466908801,383835
  s21_decimal one = {{-746255088, -1488513352, 1369258553, 1310720}};
  s21_decimal two = {{782613915, -90222602, -142051490, -2147090432}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -76607775051004214325180,284010
  s21_decimal standart = {{-106775446, -90281412, -142051490, -2147090432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_67) {
  // one = 333221285,98795040339776318401
  // two = 52822,465659548797457324291891
  s21_decimal one = {{-938398783, -288849328, 1806396210, 1310720}};
  s21_decimal two = {{-1770014925, 885570724, -1431455695, 1572864}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 333274108,45360995219522050830
  s21_decimal standart = {{-242361586, 398863493, 1806682562, 1310720}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_68) {
  // one = -62873100455,585868524068298002
  // two = 24827578482722298,15801146865
  s21_decimal one = {{1080581394, 1040575493, -886609691, -2146304000}};
  s21_decimal two = {{-126292495, -1534980949, 134590572, 720896}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 24827515609621842,572142944582
  s21_decimal standart = {{1049600326, 294156883, 1345902318, 786432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_69) {
  // one = 4583287112620914446,9523039367
  // two = -622293,10318919334722962010135
  s21_decimal one = {{1379959943, 1349500782, -1810362374, 655360}};
  s21_decimal two = {{13447191, 10084902, -921509624, -2145976320}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4583287112620292153,8491147434
  s21_decimal standart = {{1218602154, 1348051893, -1810362374, 655360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_71) {
  // one = -24683535,128368608333254522827
  // two = 717668486073934881718190250,20
  s21_decimal one = {{-1170049077, -1975790243, 1338097120, -2146107392}};
  s21_decimal two = {{-1095548292, -1594652993, -404478638, 131072}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 717668486073934881693506715,07
  s21_decimal standart = {{731065491, -1594652993, -404478638, 131072}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_72) {
  // one = 11709744,126116023855546547099
  // two = 77994,793624173458482262465133
  s21_decimal one = {{948616091, 168441677, 634786501, 1376256}};
  s21_decimal two = {{-1645716883, 2123310181, -66861062, 1572864}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 11787738,919740197314028809564
  s21_decimal standart = {{-1432441508, 1175587334, 639014607, 1376256}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_73) {
  // one = -3866129828663748,5353394410630
  // two = -5253535,9649851067356588735256
  s21_decimal one = {{1938723974, -1399628494, 2095833179, -2146631680}};
  s21_decimal two = {{-1823802600, 1004128297, -1447019743, -2146041856}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3866129833917284,5003245477987
  s21_decimal standart = {{1347543139, -2052688780, 2095833182, -2146631680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_74) {
  // one = -4962,2507737747831553598392675
  // two = -567422330527583312549265010,23
  s21_decimal one = {{1540589923, -1407685648, -1604925762, -2145845248}};
  s21_decimal two = {{904422559, 1606184427, -1218964679, -2147352576}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -567422330527583312549269972,48
  s21_decimal standart = {{904918784, 1606184427, -1218964679, -2147352576}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_75) {
  // one = -651093425,94034553806954188656
  // two = 1018081,8855938131253921686513
  s21_decimal one = {{1642876784, 2051974743, -765382762, -2146172928}};
  s21_decimal two = {{1559077873, 276920099, 551903296, 1441792}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -650075344,05475172494414971791
  s21_decimal standart = {{983040911, -2073963062, -770901795, -2146172928}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_76) {
  // one = -234882969650335462386404,47224
  // two = 7785684,8341294034532123953106
  s21_decimal one = {{2058018552, -542443373, 1273303129, -2147155968}};
  s21_decimal two = {{-383367214, -1179948932, -74339091, 1441792}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -234882969650335454600719,63811
  s21_decimal standart = {{878615715, -542443554, 1273303129, -2147155968}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_77) {
  // one = -4021281527896,4176917976076445
  // two = -8104190,467508390083937960779
  s21_decimal one = {{-2104471395, 1548603425, -2115026212, -2146435072}};
  s21_decimal two = {{-1231027381, -1909346532, 439329045, -2146107392}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -4021289632086,8852001876915825
  s21_decimal standart = {{-683493775, -1498866764, -2115021819, -2146435072}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_78) {
  // one = 450,66555460741378681743677434
  // two = -3001314600885930,1382056592433
  s21_decimal one = {{1609635834, -649769282, -1851904430, 1703936}};
  s21_decimal two = {{1876706353, 1273436600, 1627015905, -2146631680}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3001314600885479,4726510518295
  s21_decimal standart = {{-320249833, 1272387312, 1627015905, -2146631680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_79) {
  // one = 566558,60816983325086816244903
  // two = -2683,7371458261808243121788636
  s21_decimal one = {{27890855, 388627364, -1223646927, 1507328}};
  s21_decimal two = {{-766306596, -247406721, 1454856821, -2145845248}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 563874,87102400707004385027017
  s21_decimal standart = {{379151305, -553791374, -1238195496, 1507328}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_80) {
  // one = 397375816,49042236335756321599
  // two = 741217498703128340047,88598350
  s21_decimal one = {{-1274895553, -1457774942, -2140788679, 1310720}};
  s21_decimal two = {{302929486, -468080318, -276819185, 524288}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 741217498703525715864,37640586
  s21_decimal standart = {{-931466870, -458828192, -276819185, 524288}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_81) {
  // one = -58834026037060571353612651643
  // two = 25959011342360639,967385224708
  s21_decimal one = {{525962363, 1170336598, -1105568354, -2147483648}};
  s21_decimal two = {{-1287256572, -1511129146, 1407240824, 786432}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -58834026037034612342270291003
  s21_decimal standart = {{-846107589, 1164292544, -1105568354, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_82) {
  // one = -330762626037952,32496284664628
  // two = 346469164859491,62495678934123
  s21_decimal one = {{-885980364, -1559966768, 1793067788, -2146566144}};
  s21_decimal two = {{-1744507797, 856829018, 1878213106, 917504}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 15706538821539,29999394269495
  s21_decimal standart = {{-858527433, -1878171511, 85145317, 917504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_83) {
  // one = -69744,792759294045304463684480
  // two = 54189718330232374,669868041506
  s21_decimal one = {{-118885504, 1970935417, -514094505, -2145910784}};
  s21_decimal two = {{-319781598, 3329116, -1357336779, 786432}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 54189718330162629,877108747461
  s21_decimal standart = {{-275338043, -12909609, -1357336780, 786432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_84) {
  // one = -24589699976557,100077528514378
  // two = -720907836754270,39097480643068
  s21_decimal one = {{-628228278, -998587337, 1333010306, -2146500608}};
  s21_decimal two = {{278233596, -626950562, -386918083, -2146566144}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -745497536730827,49105233494506
  s21_decimal standart = {{-1502576150, -2015299485, -253617052, -2146566144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_85) {
  // one = 350133046381939594606,48452338
  // two = 7184637979826,0644663160832158
  s21_decimal one = {{2130641138, -1153911758, 1898075047, 524288}};
  s21_decimal two = {{1994752158, 535335187, -400167243, 1048576}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 350133053566577574432,54898970
  s21_decimal standart = {{-901525222, -1377247776, 1898075086, 524288}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_86) {
  // one = 3111895838,5671214639909103320
  // two = 1560233298437011941350,2926185
  s21_decimal one = {{-906565928, 1552788918, 1686962114, 1245184}};
  s21_decimal two = {{-1741595287, -537659605, 845804165, 458752}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1560233298440123837188,8597400
  s21_decimal standart = {{-1265825384, -530414158, 845804165, 458752}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_87) {
  // one = 4254876029265892519,0682710851
  // two = 265388259714353766617,73253669
  s21_decimal one = {{-784133309, 1259665402, -1988394379, 655360}};
  s21_decimal two = {{-1469481947, -1407683474, 1438672638, 524288}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 269643135743619659136,80080778
  s21_decimal standart = {{25915274, -664942379, 1461738367, 524288}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_88) {
  // one = 64100642842757364,314846303164
  // two = -2201314615337927650,3945101473
  s21_decimal one = {{-1474260036, 1682539518, -820064485, 786432}};
  s21_decimal two = {{-1471102815, 587280253, 1193335044, -2146828288}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2137213972495170286,0796638441
  s21_decimal standart = {{-382618391, 98008455, 1158586016, -2146828288}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_89) {
  // one = -755857378576,97656845744360931
  // two = -5857781477778832580309440,704
  s21_decimal one = {{-1692774941, -1237887454, -197456237, -2146369536}};
  s21_decimal two = {{-1924376384, 891884082, 317550970, -2147287040}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5857781477779588437688017,6806
  s21_decimal standart = {{511565478, 330666101, -1119457594, -2147221504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_90) {
  // one = -5601535178077231,5501356692884
  // two = -466542469715657,43955677150031
  s21_decimal one = {{-1175145068, -1448882744, -1258368992, -2146631680}};
  s21_decimal two = {{738327375, 482506420, -1765835500, -2146566144}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -6068077647792888,9896924407887
  s21_decimal standart = {{1475668047, 1176348276, -1005455812, -2146631680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_91) {
  // one = -31858366160368752958,475932139
  // two = -27384314458926,836065248250201
  s21_decimal one = {{1159008747, 625020887, 1727045490, -2146893824}};
  s21_decimal two = {{592218457, 1802745208, 1484506661, -2146500608}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -31858393544683211885,311997387
  s21_decimal standart = {{746108363, -1493852181, 1727046974, -2146893824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_92) {
  // one = 50009191367001125424,499371242
  // two = -25448429823021,607543500231553
  s21_decimal one = {{1513991402, 933286399, -1583963600, 589824}};
  s21_decimal two = {{-546778239, 99842531, 1379562145, -2146500608}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 50009165918571302402,891827742
  s21_decimal standart = {{-429274594, -1481108092, -1583964980, 589824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_94) {
  // one = -165,70282279492746849568496998
  // two = -62587201642778244225047,978996
  s21_decimal one = {{-923460250, 1315138895, 898276802, -2145779712}};
  s21_decimal two = {{-974920716, -1956678779, -902108297, -2147090432}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -62587201642778244225213,681819
  s21_decimal standart = {{-809217893, -1956678779, -902108297, -2147090432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_95) {
  // one = 655406113356160010295112,96663
  // two = -880050808443049779168435,4611
  s21_decimal one = {{419935895, -836885827, -742003637, 327680}};
  s21_decimal two = {{4170291, 883859341, 477076499, -2147221504}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -224644695086889768873322,49447
  s21_decimal standart = {{-378232985, 1085544644, 1217801332, -2147155968}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_96) {
  // one = 49798176698219451600759051005
  // two = 6915749256781524172064,3714252
  s21_decimal one = {{793400061, 435199061, -1595402728, 0}};
  s21_decimal two = {{1812462796, 1218785372, -545932112, 458752}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 49798183613968708382283223069
  s21_decimal standart = {{1707298845, 20813866, -1595402353, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_97) {
  // one = 456256,46031316365305240443929
  // two = 4508297331,9857152702358488213
  s21_decimal one = {{-1946592231, 1762619517, -1821596069, 1507328}};
  s21_decimal two = {{2081686677, -967407210, -1851014416, 1245184}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 4508753588,4460284338889012257
  s21_decimal standart = {{-1479035871, -440238461, -1850767079, 1245184}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_98) {
  // one = -6385457313785034167,1312632958
  // two = -5078758544470248995000971,5411
  s21_decimal one = {{-1225708418, -173543686, -833403951, -2146828288}};
  s21_decimal two = {{-2001966381, -1194081778, -1541766773, -2147221504}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5078764929927562780035138,6724
  s21_decimal standart = {{1385606244, 1225470695, -1541763311, -2147221504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_99) {
  // one = -2734797,2534474231400314070915
  // two = -610802502754391,4132810387659
  s21_decimal one = {{1378248579, -1084292736, 1482536561, -2146041856}};
  s21_decimal two = {{1671844043, 957551096, 331116700, -2146631680}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -610802505489188,66672846190593
  s21_decimal standart = {{826357761, 235527410, -983800279, -2146566144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_100) {
  // one = 6343856399168935557,8526714918
  // two = -9472554679463,838863246240786
  s21_decimal one = {{838913062, -182473109, -855955852, 655360}};
  s21_decimal two = {{-716428270, 528801782, 513508218, -2146500608}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 6343846926614256094,0138082456
  s21_decimal standart = {{-892424040, -535438810, -855960987, 655360}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_103) {
  // one = 7922816251426433759354395033,5
  // two = 0,02
  s21_decimal one = {{-1, -1, -1, 65536}};
  s21_decimal two = {{2, 0, 0, 131072}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 7922816251426433759354395033,5
  s21_decimal standart = {{-1, -1, -1, 65536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_104) {
  // one = 0,0000000000000000
  // two = 0,0000000000000000000000000000
  s21_decimal one = {{0, 0, 0, 1048576}};
  s21_decimal two = {{0, 0, 0, 1835008}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000000000000000000000000000
  s21_decimal standart = {{0, 0, 0, 1835008}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_add_test_105) {
  // one = 0,0000000000000000000000000000
  // two = 0,0000000000000000000000
  s21_decimal one = {{0, 0, 0, -2145648640}};
  s21_decimal two = {{0, 0, 0, 1441792}};
  s21_decimal res = {0};
  int code = s21_add(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 0,0000000000000000000000000000
  s21_decimal standart = {{0, 0, 0, -2145648640}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

Suite* suite_add(void) {
  Suite* s = suite_create("\033[42m-=S21_DECIMAL_ADD=-\033[0m");
  TCase* tc1_1 = tcase_create("case_add");
  tcase_add_test(tc1_1, s21_add_test_1);
  tcase_add_test(tc1_1, s21_add_test_2);
  tcase_add_test(tc1_1, s21_add_test_3);
  tcase_add_test(tc1_1, s21_add_test_4);
  tcase_add_test(tc1_1, s21_add_test_5);
  tcase_add_test(tc1_1, s21_add_test_6);
  tcase_add_test(tc1_1, s21_add_test_7);
  tcase_add_test(tc1_1, s21_add_test_8);

  tcase_add_test(tc1_1, s21_add_test_10);
  tcase_add_test(tc1_1, s21_add_test_11);
  tcase_add_test(tc1_1, s21_add_test_12);
  tcase_add_test(tc1_1, s21_add_test_13);
  tcase_add_test(tc1_1, s21_add_test_14);
  tcase_add_test(tc1_1, s21_add_test_15);
  tcase_add_test(tc1_1, s21_add_test_16);
  tcase_add_test(tc1_1, s21_add_test_17);
  tcase_add_test(tc1_1, s21_add_test_18);
  tcase_add_test(tc1_1, s21_add_test_19);
  tcase_add_test(tc1_1, s21_add_test_21);
  tcase_add_test(tc1_1, s21_add_test_22);
  tcase_add_test(tc1_1, s21_add_test_23);
  tcase_add_test(tc1_1, s21_add_test_24);
  tcase_add_test(tc1_1, s21_add_test_25);
  tcase_add_test(tc1_1, s21_add_test_26);
  tcase_add_test(tc1_1, s21_add_test_27);
  tcase_add_test(tc1_1, s21_add_test_28);
  tcase_add_test(tc1_1, s21_add_test_29);
  tcase_add_test(tc1_1, s21_add_test_30);
  tcase_add_test(tc1_1, s21_add_test_31);
  tcase_add_test(tc1_1, s21_add_test_32);
  tcase_add_test(tc1_1, s21_add_test_33);

  tcase_add_test(tc1_1, s21_add_test_35);
  tcase_add_test(tc1_1, s21_add_test_36);
  tcase_add_test(tc1_1, s21_add_test_37);
  tcase_add_test(tc1_1, s21_add_test_38);
  tcase_add_test(tc1_1, s21_add_test_39);
  tcase_add_test(tc1_1, s21_add_test_40);
  tcase_add_test(tc1_1, s21_add_test_41);
  tcase_add_test(tc1_1, s21_add_test_42);
  tcase_add_test(tc1_1, s21_add_test_43);
  tcase_add_test(tc1_1, s21_add_test_44);
  tcase_add_test(tc1_1, s21_add_test_45);
  tcase_add_test(tc1_1, s21_add_test_46);
  tcase_add_test(tc1_1, s21_add_test_47);
  tcase_add_test(tc1_1, s21_add_test_48);
  tcase_add_test(tc1_1, s21_add_test_49);
  tcase_add_test(tc1_1, s21_add_test_50);
  tcase_add_test(tc1_1, s21_add_test_51);
  tcase_add_test(tc1_1, s21_add_test_52);
  tcase_add_test(tc1_1, s21_add_test_53);
  tcase_add_test(tc1_1, s21_add_test_54);
  tcase_add_test(tc1_1, s21_add_test_55);
  tcase_add_test(tc1_1, s21_add_test_56);
  tcase_add_test(tc1_1, s21_add_test_57);
  tcase_add_test(tc1_1, s21_add_test_58);
  tcase_add_test(tc1_1, s21_add_test_59);
  tcase_add_test(tc1_1, s21_add_test_60);
  tcase_add_test(tc1_1, s21_add_test_61);
  tcase_add_test(tc1_1, s21_add_test_62);
  tcase_add_test(tc1_1, s21_add_test_63);
  tcase_add_test(tc1_1, s21_add_test_64);
  tcase_add_test(tc1_1, s21_add_test_65);
  tcase_add_test(tc1_1, s21_add_test_66);
  tcase_add_test(tc1_1, s21_add_test_67);
  tcase_add_test(tc1_1, s21_add_test_68);
  tcase_add_test(tc1_1, s21_add_test_69);
  tcase_add_test(tc1_1, s21_add_test_71);
  tcase_add_test(tc1_1, s21_add_test_72);
  tcase_add_test(tc1_1, s21_add_test_73);
  tcase_add_test(tc1_1, s21_add_test_74);
  tcase_add_test(tc1_1, s21_add_test_75);
  tcase_add_test(tc1_1, s21_add_test_76);
  tcase_add_test(tc1_1, s21_add_test_77);
  tcase_add_test(tc1_1, s21_add_test_78);
  tcase_add_test(tc1_1, s21_add_test_79);
  tcase_add_test(tc1_1, s21_add_test_80);
  tcase_add_test(tc1_1, s21_add_test_81);
  tcase_add_test(tc1_1, s21_add_test_82);
  tcase_add_test(tc1_1, s21_add_test_83);
  tcase_add_test(tc1_1, s21_add_test_84);
  tcase_add_test(tc1_1, s21_add_test_85);
  tcase_add_test(tc1_1, s21_add_test_86);
  tcase_add_test(tc1_1, s21_add_test_87);
  tcase_add_test(tc1_1, s21_add_test_88);
  tcase_add_test(tc1_1, s21_add_test_89);
  tcase_add_test(tc1_1, s21_add_test_90);
  tcase_add_test(tc1_1, s21_add_test_91);
  tcase_add_test(tc1_1, s21_add_test_92);

  tcase_add_test(tc1_1, s21_add_test_94);
  tcase_add_test(tc1_1, s21_add_test_95);
  tcase_add_test(tc1_1, s21_add_test_96);
  tcase_add_test(tc1_1, s21_add_test_97);
  tcase_add_test(tc1_1, s21_add_test_98);
  tcase_add_test(tc1_1, s21_add_test_99);
  tcase_add_test(tc1_1, s21_add_test_100);
  tcase_add_test(tc1_1, s21_add_test_103);
  tcase_add_test(tc1_1, s21_add_test_104);
  tcase_add_test(tc1_1, s21_add_test_105);

  suite_add_tcase(s, tc1_1);

  return s;
}