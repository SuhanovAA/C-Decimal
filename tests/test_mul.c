#include "tests.h"
START_TEST(s21_mul_test_1) {
  // one = 234,26547292429196604983962183
  // two = 428914569286,14128203264453619
  s21_decimal one = {{718236231, 1779436454, 1269955673, 1703936}};
  s21_decimal two = {{-1667208205, 659681049, -1969816757, 1114112}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 100479874417936,88100697027373
  s21_decimal standart = {{-1515965651, -1395911043, 544702490, 917504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_2) {
  // one = -7048080493485954785333054955,6
  // two = -59074538,541679790639895879963
  s21_decimal one = {{646941492, 1911643473, -474195205, -2147418112}};
  s21_decimal two = {{-650829541, 1174220852, -1092530145, -2146107392}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_3) {
  // one = -7849,7817842008912775408477699
  // two = -1115484571209282162,5258420065
  s21_decimal one = {{-2001246717, -69266077, -39592065, -2145845248}};
  s21_decimal two = {{-146757791, -1118484448, 604705397, -2146828288}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 8756310467635765091698,819482
  s21_decimal standart = {{679035290, -1724803080, 474680541, 393216}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_4) {
  // one = 54490878048334743,407162815860
  // two = -31236,578730259859528920056831
  s21_decimal one = {{-128453260, 138987866, -1341010878, 786432}};
  s21_decimal two = {{-584072193, 77790297, 1693338326, -2145910784}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1702108602237796931732,2702757
  s21_decimal standart = {{945569701, 756955274, 922714922, -2147024896}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_5) {
  // one = -6551,0257023862970062868378499
  // two = -50152717230,495073167521450540
  s21_decimal one = {{1605170051, 1150194009, -743649147, -2145845248}};
  s21_decimal two = {{300517932, -568235006, -1576183048, -2146304000}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 328551739621485,32702809413036
  s21_decimal standart = {{-77343316, 1535583432, 1781082549, 917504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_6) {
  // one = 783358720,09195651871420747097
  // two = 25919352256861324399389992725
  s21_decimal one = {{-1171223207, -876958678, -48371166, 1310720}};
  s21_decimal two = {{1829005077, 1354226867, 1405090901, 0}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_7) {
  // one = -61354569105027943391768124438
  // two = 1223,9486288847722960868912273
  s21_decimal one = {{1204591638, -948477451, -968929441, -2147483648}};
  s21_decimal two = {{-1043813231, 961051647, 663503881, 1638400}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_8) {
  // one = -8563940971531678147650394,37
  // two = 513823882502075625607,86855112
  s21_decimal one = {{1295765325, 136843390, 46425217, -2147352576}};
  s21_decimal two = {{-125373240, 1797163803, -1509522448, 524288}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_9) {
  // one = 6925437347891746652174345293,1
  // two = 6586614810852168299354879979
  s21_decimal one = {{-72553725, -7555104, -540680188, 65536}};
  s21_decimal two = {{873297899, 1557166321, 357061104, 0}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_10) {
  // one = 2518821258230,3333553097263662
  // two = -237,83795144300947955275863746
  s21_decimal one = {{917097006, 592703746, 1365455740, 1048576}};
  s21_decimal two = {{-331802942, 1159915874, 1289322118, -2145779712}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -599071288108606,06596886493774
  s21_decimal standart = {{-1204880818, 881332341, -1047395336, -2146566144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_11) {
  // one = 1863658645,8986190409317506136
  // two = 61562428261974250951346,793056
  s21_decimal one = {{594304088, 1405906417, 1010291376, 1245184}};
  s21_decimal two = {{-1416582560, 1098545212, -957661373, 393216}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_12) {
  // one = -4612,1891336165365086723960214
  // two = 5063223,024878391447021026815
  s21_decimal one = {{-410063466, 1247871335, -1794694557, -2145845248}};
  s21_decimal two = {{-1020396033, 719789117, 274477870, 1376256}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -23352542216,421167524858736703
  s21_decimal standart = {{-1321029569, 881174106, 1265943850, -2146304000}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_13) {
  // one = 45050137355837848743092,645379
  // two = -15299944792500248,219470370392
  s21_decimal one = {{-1596494333, -1724477919, -1852794457, 393216}};
  s21_decimal two = {{1533908568, 630726570, 829411669, -2146697216}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_14) {
  // one = -709210244139096844455303155,54
  // two = 15671026497,703317690536425146
  s21_decimal one = {{-1914938590, 957429536, -450330859, -2147352576}};
  s21_decimal two = {{-1055918406, -1312575743, 849528048, 1179648}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_15) {
  // one = -326985,67248466177361012922881
  // two = 377292257089386576514,35302671
  s21_decimal one = {{1019288065, 1707333799, 1772592882, -2145976320}};
  s21_decimal two = {{-1011814641, -37100183, 2045305423, 524288}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -123369162407628968279636093,59
  s21_decimal standart = {{827003151, -2146015797, 668785569, -2147352576}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_16) {
  // one = -52982203772049979171,675405344
  // two = 6995737922229992146,5690880495
  s21_decimal one = {{-1101956064, -1562020515, -1422796275, -2146893824}};
  s21_decimal two = {{194836975, -1243422347, -502570170, 655360}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_17) {
  // one = 2802355750617059,910128176384
  // two = 377129975333969972039650,46917
  s21_decimal one = {{1563102464, -1525515940, 151916009, 786432}};
  s21_decimal two = {{1602023557, -719515593, 2044425692, 327680}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_18) {
  // one = -59680422261642035,379993368824
  // two = -42189,837804893566357504366687
  s21_decimal one = {{-1972315912, -1948936614, -1059685123, -2146697216}};
  s21_decimal two = {{-1367762849, 1047256950, -2007851606, -2145910784}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2517907335346236740925,0077285
  s21_decimal standart = {{127240805, -1933642762, 1364960301, 458752}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_19) {
  // one = 39275770,370554292957426497054
  // two = -193159888879065845,98217098336
  s21_decimal one = {{-474991074, 385853404, 2129143778, 1376256}};
  s21_decimal two = {{126747744, -864537874, 1047121855, -2146762752}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -7586503440415974032968485,6032
  s21_decimal standart = {{2067492064, -713495668, -182315541, -2147221504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_20) {
  // one = 609446142513444,40092403577233
  // two = 40500764935371,234936145029638
  s21_decimal one = {{-1930808943, -1589422159, -991153138, 917504}};
  s21_decimal two = {{-1730172410, -2092887420, -2099416430, 983040}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 24683034958705769458816082771
  s21_decimal standart = {{-1568316589, 1237905883, 1338070006, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_21) {
  // one = -259844513130757526,96336362882
  // two = 57939,705416543065392309965003
  s21_decimal one = {{1762405762, 962190657, 1408619928, -2146762752}};
  s21_decimal two = {{579965131, 1242564128, -1154049572, 1572864}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -15055314544901147563644,912367
  s21_decimal standart = {{956531439, -636849659, 816150236, -2147090432}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_22) {
  // one = -214290063,99015425681573719682
  // two = 4550033954760832,1742547960682
  s21_decimal one = {{1346023042, -1714056850, 1161668764, -2146172928}};
  s21_decimal two = {{-1841052822, 1362590494, -1828388947, 851968}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -975027067323073365516068,6106
  s21_decimal standart = {{574129690, 1339699799, 528563232, -2147221504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_23) {
  // one = 57781569086955035443599,707724
  // two = 2329599,6664748413055289241867
  s21_decimal one = {{-303886772, -1353362602, -1162622160, 393216}};
  s21_decimal two = {{312979723, -1259435821, 1262878509, 1441792}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_24) {
  // one = -6963008222525608,7320199190123
  // two = -578243615739344,52361224112175
  s21_decimal one = {{-1005037973, -221844341, -520312976, -2146631680}};
  s21_decimal two = {{884852783, 224853515, -1160302374, -2146566144}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_25) {
  // one = 44201460,286470230715452594448
  // two = 54,854849050073649045590680605
  s21_decimal one = {{2000656656, 2066474404, -1898801333, 1376256}};
  s21_decimal two = {{-1197300707, -1835183800, -1321279971, 1769472}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2424664431,8071496585786384751
  s21_decimal standart = {{-2060754577, 1103039680, 1314413222, 1245184}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_26) {
  // one = -35210259171912111154039599,707
  // two = -11221085420039363636,459934126
  s21_decimal one = {{-371215781, 1710421173, 1908751974, -2147287040}};
  s21_decimal two = {{1349718446, -2136295880, 608296259, -2146893824}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_27) {
  // one = -6581104,1032123065011686913771
  // two = 72610809226554213,115472013857
  s21_decimal one = {{1761654507, 120366691, -727343613, -2146041856}};
  s21_decimal two = {{-1787139551, 2010170917, -358727441, 786432}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -477859294538441935340086,34185
  s21_decimal standart = {{1138240329, 1738802265, -1704486870, -2147155968}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_28) {
  // one = -55,443897299261218030852541644
  // two = 1204702973506884,0876045383299
  s21_decimal one = {{1162906828, 627538651, -1289347601, -2145714176}};
  s21_decimal two = {{-1175308669, -1984466404, 653070790, 851968}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -66793427939230289,361145011996
  s21_decimal standart = {{138780444, -114360127, -674088313, -2146697216}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_29) {
  // one = 75799396394894319,341606382465
  // two = -6915491352031336631,440824200
  s21_decimal one = {{1721609089, 952265929, -185873784, 786432}};
  s21_decimal two = {{450680712, 1648643276, 374889537, -2146893824}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_30) {
  // one = 662066990,09438089648248519207
  // two = 293966,2960903183635704278658
  s21_decimal one = {{-419104217, -187545927, -705894952, 1310720}};
  s21_decimal two = {{14249602, 1843915828, 159359448, 1441792}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 194625380841710,64967143875903
  s21_decimal standart = {{-147856065, -1516094252, 1055066303, 917504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_31) {
  // one = 757852,09405865555746735912001
  // two = 68290016,878967751202351443411
  s21_decimal one = {{-598608831, 23261602, -186642862, 1507328}};
  s21_decimal two = {{1544908243, -161361285, -592958064, 1376256}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 51753732295026,643816664276339
  s21_decimal standart = {{980950387, 1825597008, -1489391847, 983040}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_32) {
  // one = 5882,7174173661187904025038683
  // two = 28253,028942360482393710632227
  s21_decimal one = {{1602654043, 57255998, -1105939794, 1638400}};
  s21_decimal two = {{-1990222557, -299988725, 1531599767, 1572864}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 166204585,45257306365158734046
  s21_decimal standart = {{-1344292642, 531123854, 900996863, 1310720}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_33) {
  // one = 78,474475223881354462815715714
  // two = -67688372962006,675048199434244
  s21_decimal one = {{-1974337150, 513690212, -40857470, 1769472}};
  s21_decimal two = {{-1290719228, -554756065, -625573246, -2146500608}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -5311809546951833,3910213380424
  s21_decimal standart = {{1994574152, 1362408357, -1415429571, -2146631680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_34) {
  // one = -57531182776583794192,183577071
  // two = -7051637797351217102548228,1545
  s21_decimal one = {{-823539217, -1710946451, -1176195629, -2146893824}};
  s21_decimal two = {{-1965919671, -1140127315, -472266787, -2147221504}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_35) {
  // one = 3950612,5395623317474055509574
  // two = 6386707849791505817687180878,0
  s21_decimal one = {{1019958854, 90099641, 2141631349, 1441792}};
  s21_decimal two = {{1982250764, -484954777, -832726034, 65536}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_36) {
  // one = -71735114725,297084332393306172
  // two = 36,208707675679175605167123335
  s21_decimal one = {{488052796, 1860579500, -406198935, -2146304000}};
  s21_decimal two = {{-291181689, 1044519272, 1962877976, 1769472}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2597435799169,5907940767384240
  s21_decimal standart = {{1829520048, 754395399, 1408072768, -2146435072}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_37) {
  // one = 10768267491516,450532493919016
  // two = 698902675103908331786,97580261
  s21_decimal one = {{856195880, 1762476091, 583748950, 983040}};
  s21_decimal two = {{2060238565, -2070430073, -506208303, 524288}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_38) {
  // one = 28,705955542008666756809954392
  // two = 64054857,313200505806222853651
  s21_decimal one = {{916132952, 411909362, 1556152968, 1769472}};
  s21_decimal two = {{-801831405, -596787873, -822546524, 1376256}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1838755886,2824424372761759412
  s21_decimal standart = {{-249852236, 1241102164, 996791563, 1245184}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_39) {
  // one = -689536651,89851311021444873260
  // two = 109825,25028013811496954900819
  s21_decimal one = {{-301155284, -69815992, -556981617, -2146172928}};
  s21_decimal two = {{1021325651, -1127643692, 595363874, 1507328}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -75728535372082,674822842944729
  s21_decimal standart = {{-2061759271, 2052436861, -189715168, -2146500608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_40) {
  // one = -674153259547763102,33406547380
  // two = 7803404757540719644625770,4555
  s21_decimal one = {{1954194868, -217563931, -640375154, -2146762752}};
  s21_decimal two = {{-1745228181, 1952855545, -64733101, 262144}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_41) {
  // one = 608919551,57581533461874779201
  // two = 3303804340873812591,2216812422
  s21_decimal one = {{507552833, 1876860995, -994007793, 1310720}};
  s21_decimal two = {{930200454, -338384054, 1790995921, 655360}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 2011751057739114112759978573,7
  s21_decimal standart = {{-3832055, -1501608638, 1090572433, 65536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_42) {
  // one = 466627091275400,82786248285406
  // two = -2403996818,1789079566146184357
  s21_decimal one = {{1633541342, -2117819392, -1765376766, 917504}};
  s21_decimal two = {{-1252154203, 1970986703, 1303209286, -2146238464}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -1121770042702142451257079,5308
  s21_decimal standart = {{1871750444, -1445643205, 608112758, -2147221504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_43) {
  // one = 1459227411,4978604888784788068
  // two = -1579655519,4536737522932553134
  s21_decimal one = {{-180200860, -652020073, 791048764, 1245184}};
  s21_decimal two = {{-1565747794, -63584641, 856332972, -2146238464}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2305076634710692553,1723356673
  s21_decimal standart = {{-1323935231, -1935079510, 1249584547, -2146828288}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_44) {
  // one = -45391746006136,765819086521672
  // two = -631163618582484983056258064,70
  s21_decimal one = {{162088264, -1553983424, -1834275815, -2146500608}};
  s21_decimal two = {{1927599750, 1308730548, -873422464, -2147352576}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_45) {
  // one = 455520148914959924761,18723342
  // two = -379207,28273966899128304154756
  s21_decimal one = {{740207374, 1385557433, -1825587621, 524288}};
  s21_decimal two = {{483932292, -672719695, 2055686798, -2145976320}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -172736557903211331264643590,13
  s21_decimal standart = {{-881014171, -1152557569, 936406756, -2147352576}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_46) {
  // one = 317467641592713454605995,19383
  // two = -9570410,902035888283580773520
  s21_decimal one = {{-586221417, -1961309390, 1720995533, 327680}};
  s21_decimal two = {{587609232, -1811130537, 518813014, -2146107392}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_47) {
  // one = -42228,028818116151104020028531
  // two = -245351621504583232345446,47890
  s21_decimal one = {{-93709197, 941031458, -2005781267, -2145910784}};
  s21_decimal two = {{-533758254, 1247910233, 1330053805, -2147155968}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 10360715343467067116273965158
  s21_decimal standart = {{-677210010, 835562998, 561655504, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_48) {
  // one = 4193,1500000873373264300728788
  // two = -506741652014858537523,92631222
  s21_decimal one = {{-1032330796, -746713917, -2021856127, 1638400}};
  s21_decimal two = {{13321142, 73081480, -1547915296, -2146959360}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2124843758190361537696187,7141
  s21_decimal standart = {{-1032276843, 1765776664, 1151880109, -2147221504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_49) {
  // one = -868522,3955170783686116831891
  // two = -77015892906167266437649109383
  s21_decimal one = {{-52890989, 154470440, 470826934, -2146041856}};
  s21_decimal two = {{-1420586617, 1025960304, -119927376, -2147483648}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_50) {
  // one = -5391694364169045647185195,5896
  // two = 1879,3946999754647681743632861
  s21_decimal one = {{241104568, -2126159594, -1372123925, -2147221504}};
  s21_decimal two = {{1684191709, 1441265844, 1018821908, 1638400}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -10133121811906887822220060034
  s21_decimal standart = {{-1762007678, 543248682, 549317634, -2147483648}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_51) {
  // one = -311509646,39691085244277772332
  // two = 7099834887194,4637842559125608
  s21_decimal one = {{-775106516, -564315005, 1688697176, -2146172928}};
  s21_decimal two = {{601671784, 2114442335, -446139092, 1048576}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -2211667055186398863872,7069328
  s21_decimal standart = {{-1337401712, 102460041, 1198947113, -2147024896}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_52) {
  // one = 48762847,136412995436213436388
  // two = 15061,871030095525578748468901
  s21_decimal one = {{2010906596, 403196162, -1651528056, 1376256}};
  s21_decimal two = {{22814373, -1605018247, 816505664, 1572864}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 734459714628,91545327035434127
  s21_decimal standart = {{-613202801, 80611306, -313453205, 1114112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_53) {
  // one = -264842164903,61711841967582242
  // two = -171016948414245,62663398363684
  s21_decimal one = {{737127458, -982132409, 1435712252, -2146369536}};
  s21_decimal two = {{-1962618332, 55116260, 927084735, -2146566144}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 45292498853239022312287244,078
  s21_decimal standart = {{280629038, -1293007153, -1839656014, 196608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_54) {
  // one = 629,64177338480187912846383294
  // two = 1716112,6206932685170353146414
  s21_decimal one = {{894245054, -184085263, -881672404, 1703936}};
  s21_decimal two = {{2019854894, -890273366, 930306515, 1441792}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1080536193,8213494394700386274
  s21_decimal standart = {{-290500638, 1697210347, 585759844, 1245184}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_55) {
  // one = 21556090419368,751123959553881
  // two = 55,08587245025170367360057857
  s21_decimal one = {{2064555865, 638568933, 1168558003, 983040}};
  s21_decimal two = {{-2064596479, -347413583, 298621112, 1703936}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1187436047367439,7810772514750
  s21_decimal standart = {{1462343614, 522651475, 643710371, 851968}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_56) {
  // one = 714,10580613670294627931004469
  // two = -64795561782,213113282148325913
  s21_decimal one = {{262282805, -44543138, -423791965, 1703936}};
  s21_decimal two = {{-763995623, -1783661063, -782392854, -2146304000}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -46270886880567,835925569429930
  s21_decimal standart = {{1841652138, -270008907, -1786617493, -2146500608}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_57) {
  // one = 36393,596190672080316583788698
  // two = -409,12145296330997470662325784
  s21_decimal one = {{70926490, -1183940390, 1972900802, 1572864}};
  s21_decimal two = {{-1734248936, -1863010992, -2077115456, -2145779712}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -14889400,952087744580900761549
  s21_decimal standart = {{1584279501, -158640890, 807156042, -2146107392}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_58) {
  // one = 730724480,61951826738265323351
  // two = -350032816184805422360644,06022
  s21_decimal one = {{148502359, -514889560, -333701950, 1310720}};
  s21_decimal two = {{809032198, -1099827810, 1897531698, -2147155968}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_59) {
  // one = 3430160756096366083250178380,4
  // two = -125506826,22490267734661565663
  s21_decimal one = {{173661436, -570799854, 1859493871, 65536}};
  s21_decimal two = {{-896627489, 1176824558, 680373868, -2146172928}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_60) {
  // one = 5291482268,3685901844658332411
  // two = 3641435992439,185814970819089
  s21_decimal one = {{1496392443, -2075005048, -1426449011, 1245184}};
  s21_decimal two = {{-1038491119, -1295045564, 197402640, 983040}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 19268593985391131372448,902186
  s21_decimal standart = {{-1212683222, -63954486, 1044552572, 393216}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_61) {
  // one = -65871615687143364150707627165
  // two = 66345718889559219653216,704586
  s21_decimal one = {{858793117, -1475091619, -724059855, -2147483648}};
  s21_decimal two = {{1164580938, -1036660200, -698358669, 393216}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_62) {
  // one = 15781769894258,478760474490945
  // two = 2304621024057335793,1880628423
  s21_decimal one = {{1055438913, 1078331482, 855531460, 983040}};
  s21_decimal two = {{-1511669561, -2064308503, 1249337560, 655360}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_63) {
  // one = 308271568941527,44551680087717
  // two = 46790,178105698119171270463798
  s21_decimal one = {{-872638811, -817783012, 1671143523, 917504}};
  s21_decimal two = {{-138718922, -1464243404, -1758466659, 1572864}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 14424081615697065798,712501600
  s21_decimal standart = {{2133927264, 826133440, 781931031, 589824}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_64) {
  // one = -87580814024548,69931421031148
  // two = -1176463788,3783173548364411910
  s21_decimal one = {{721640172, 718647557, 474776544, -2146566144}};
  s21_decimal two = {{566899718, -1695871231, 637762297, -2146238464}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 103035656256577429681858,42063
  s21_decimal standart = {{1165912463, -926619727, 558557411, 327680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_65) {
  // one = -756805862,57268076135434852599
  // two = 723288,02803679610771871915455
  s21_decimal one = {{1862179063, -1050836951, -192314495, -2146172928}};
  s21_decimal two = {{2061524415, -1497853082, -374015040, 1507328}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -547388619946880,78459490788087
  s21_decimal standart = {{1609818871, -1283115609, -1327567642, -2146566144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_66) {
  // one = 64993636344,982607847281570404
  // two = 81906252642306,54914675730312
  s21_decimal one = {{261796452, 636295831, -771655210, 1179648}};
  s21_decimal two = {{548530056, 1179727626, 444014685, 917504}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5323385198614342691201664,9218
  s21_decimal standart = {{-1811690494, -1471350883, -1409154398, 262144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_67) {
  // one = -294860908479,21192712698420367
  // two = -741148339330581398,03292119174
  s21_decimal one = {{1076714639, -983309855, 1598444187, -2146369536}};
  s21_decimal two = {{178106502, 778251999, -277194098, -2146762752}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_68) {
  // one = -14596941303724357356,659926712
  // two = 706478667620758,25469748335771
  s21_decimal one = {{-1952192840, -1472886093, 791301773, -2146893824}};
  s21_decimal two = {{-1657875301, 1054214705, -465138765, 917504}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_69) {
  // one = -37217919242044913114161,857174
  // two = -81153,80843223872309605627424
  s21_decimal one = {{-1253588330, -512141922, 2017587444, -2147090432}};
  s21_decimal two = {{803403296, 165478051, 439935677, -2145976320}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3020375888415444295717009248,5
  s21_decimal standart = {{775891397, -122706722, 1637349049, 65536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_70) {
  // one = 45063161540630171803490674054
  // two = -425709198269618297,82648892604
  s21_decimal one = {{521627014, 304183168, -1852088414, 0}};
  s21_decimal two = {{875932860, 235847466, -1987193108, -2146762752}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_71) {
  // one = 771542160,45602486024382527831
  // two = 3974702793874024,7839991276288
  s21_decimal one = {{-1089914537, -1490744411, -112428864, 1310720}};
  s21_decimal two = {{-21617920, 219949130, -2140276594, 851968}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 3066650780756163135827364,3935
  s21_decimal standart = {{1102767519, 1611043147, 1662434719, 262144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_72) {
  // one = -4003,1276444780106918718570281
  // two = 83050758853840219862488,66030
  s21_decimal one = {{368803625, 1889440337, -2124867452, -2145845248}};
  s21_decimal two = {{853653742, -517472508, 450219065, 327680}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -332462788662684690390773153,98
  s21_decimal standart = {{-882060474, -1317011463, 1802284388, -2147352576}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_73) {
  // one = 36291,61062051301942224662431
  // two = 2522910,2704252740884194380145
  s21_decimal one = {{342798239, 1669845087, 196737215, 1507328}};
  s21_decimal two = {{1918880113, 388852709, 1367672398, 1441792}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 91560477164,76725099300734447
  s21_decimal standart = {{107300335, 1199371186, 496350341, 1114112}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_74) {
  // one = -4,002514030304493881743139978
  // two = 4572389498414372099741730,2432
  s21_decimal one = {{-158571382, 1516090039, 216976720, -2145714176}};
  s21_decimal two = {{-1410156128, -792919335, -1816269983, 262144}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -18301053119420451710070595,613
  s21_decimal standart = {{-879583203, -1965318718, 992102077, -2147287040}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_75) {
  // one = 424813232,08334115351304512706
  // two = -1491451,0360143437739028904000
  s21_decimal one = {{-1029528382, -1603155139, -1992050151, 1310720}};
  s21_decimal two = {{-2087454656, -1283104657, 808517226, -2146041856}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -633588135103301,02670042574590
  s21_decimal standart = {{-593252610, -1287668424, -860279134, -2146566144}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_76) {
  // one = -30298617280228344161785368949
  // two = -63916565366472976732469536347
  s21_decimal one = {{1757434229, -315590669, 1642491333, -2147483648}};
  s21_decimal two = {{-503896485, 1748428195, -830043345, -2147483648}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_77) {
  // one = -32520229296312,501015173150534
  // two = -763791517558655706539,02580000
  s21_decimal one = {{974665542, -1548601846, 1762925162, -2146500608}};
  s21_decimal two = {{-1322669792, 1354951003, -154445183, -2146959360}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_78) {
  // one = 573,14360764796289790815482701
  // two = -582411447,38685536544742868812
  s21_decimal one = {{1229173581, -899775288, -1187949574, 1703936}};
  s21_decimal two = {{-549812404, -1347424623, -1137708514, -2146172928}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -333805398090,77401776351209675
  s21_decimal standart = {{38398155, -55709074, 1809562688, -2146369536}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_80) {
  // one = 6354231,3918785874066535141340
  // two = -41,821994860865441424605696929
  s21_decimal one = {{641519580, -965604980, -850331557, 1441792}};
  s21_decimal two = {{699913121, 1251534859, -2027792412, -2145714176}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -265746632,61589614333318564307
  s21_decimal standart = {{-2092791341, 276205240, 1440615382, -2146172928}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_81) {
  // one = -59966878428735018807,618616416
  // two = 365337845255423610028,02340996
  s21_decimal one = {{1967570016, 2063439722, -1044156303, -2146893824}};
  s21_decimal two = {{1193469060, -1780192722, 1980500427, 524288}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_82) {
  // one = 458085470612374697743564484,77
  // two = -243,40249462534455023656230424
  s21_decimal one = {{-333675299, 472045778, -1811680984, 131072}};
  s21_decimal two = {{1569447448, 1314042624, 1319487567, -2145779712}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_83) {
  // one = -4670378044,9916861236746241244
  // two = 764914892357054219395251,97973
  s21_decimal one = {{-1720072996, 1521683433, -1763150285, -2146238464}};
  s21_decimal two = {{-845766507, 1289219389, -148355356, 327680}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_84) {
  // one = 6222100361585227519101,5759643
  // two = -70,086074491455584205658471959
  s21_decimal one = {{897277723, -1173500270, -921959932, 458752}};
  s21_decimal two = {{-996590057, 991501739, -495593585, -2145714176}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -436082589435374981399696,27546
  s21_decimal standart = {{854500762, 1050932095, -1930958842, -2147155968}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_85) {
  // one = 4694246,5897294458109084239148
  // two = 55508689704340011,90128797875
  s21_decimal one = {{355927340, 1647840598, -1750211121, 1441792}};
  s21_decimal two = {{-148813645, -659939041, 300913209, 720896}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 260571477344948100537686,88066
  s21_decimal standart = {{2110042562, 540094960, 1412560809, 327680}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_86) {
  // one = -57683194445797428637941,255313
  // two = 13783860,069736375324037148399
  s21_decimal one = {{-347452271, -1280468249, -1167955060, -2147090432}};
  s21_decimal two = {{-519246097, -1536658817, 747224551, 1376256}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_88) {
  // one = 3700014428729398869514675,9509
  // two = -37261750154543434936769,546901
  s21_decimal one = {{-1991244459, -308965204, 2005781840, 262144}};
  s21_decimal two = {{-1265137003, 1754080265, 2019963523, -2147090432}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_89) {
  // one = 3099416547738886084,1712200354
  // two = 78692032258350372282514616,099
  s21_decimal one = {{-976967006, 1065200117, 1680197077, 655360}};
  s21_decimal two = {{2033528611, -1760320404, -29063680, 196608}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_90) {
  // one = -3467410,6632912927786065132248
  // two = 54287647213481404158064,417569
  s21_decimal one = {{689896152, 85520424, 1879687087, -2146041856}};
  s21_decimal two = {{1449614113, 1714374744, -1352028044, 393216}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_91) {
  // one = -36972816136,506850293334983976
  // two = -623695865376613751,1212133062
  s21_decimal one = {{2141766952, -406337890, 2004300378, -2146304000}};
  s21_decimal two = {{-843404602, 454303032, 338106206, -2146828288}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 23059792555669069046811836775
  s21_decimal standart = {{1765392743, 1271625378, 1250073859, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_92) {
  // one = 74,940256990402436027517354849
  // two = -47170684209839838545166,845888
  s21_decimal one = {{-2118794399, -941385675, -232447825, 1769472}};
  s21_decimal two = {{125683648, -443233525, -1737839382, -2147090432}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3534983197098515770083594,7144
  s21_decimal standart = {{-1252445560, -12960253, 1916318230, -2147221504}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_93) {
  // one = -49696611383769919,240550911854
  // two = 65,263544115495325287822436869
  s21_decimal one = {{1027772270, 1600132408, -1600908595, -2146697216}};
  s21_decimal two = {{702065157, -1261949314, -757023481, 1769472}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = -3243376989435295307,7031473605
  s21_decimal standart = {{-1179676219, 290430274, 1758238189, -2146828288}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_94) {
  // one = 4645868235900079839998134469,1
  // two = 4690906490714060323767947936,9
  s21_decimal one = {{-2000496717, 954050890, -1776437079, 65536}};
  s21_decimal two = {{1752414793, 340457622, -1752021792, 65536}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_95) {
  // one = 77393257,383325975110959060386
  // two = 72879276214571,856561263659950
  s21_decimal one = {{-997108318, -1990324692, -99470407, 1376256}};
  s21_decimal two = {{1034996654, 216886546, -344173816, 983040}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 5640364581984866460144,6968136
  s21_decimal standart = {{129887048, -1292170329, -1237319530, 458752}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_96) {
  // one = -52355864364032936895461687,234
  // two = 415967219585220717086179,506
  s21_decimal one = {{1395621826, 1254326549, -1456750202, -2147287040}};
  s21_decimal two = {{1561002162, 677971576, 22549628, 196608}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_97) {
  // one = -687328887625216539695590946,03
  // two = 6461293238326129,530932534029
  s21_decimal one = {{-169474741, -530322873, -568949931, -2147352576}};
  s21_decimal two = {{1662491405, 1301179626, 350267408, 786432}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_98) {
  // one = -48615769580,973564780278303942
  // two = -34374337717,040163484861768336
  s21_decimal one = {{-1300116282, -698739532, -1659501147, -2146304000}};
  s21_decimal two = {{-237722992, -2026073505, 1863436581, -2146304000}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code, 0);
  // standart = 1671134881950193472132,2719703
  s21_decimal standart = {{172759511, -1016389508, 905924034, 458752}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_99) {
  // one = -131244112048876249766137,71189
  // two = 5103208,6602408041547472568479
  s21_decimal one = {{862193589, 200201278, 711475757, -2147155968}};
  s21_decimal two = {{-442761057, 171627622, -1528512338, 1441792}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

START_TEST(s21_mul_test_100) {
  // one = 278850133366890161715415,82854
  // two = -283509036739518330229981,83754
  s21_decimal one = {{-1013165050, -123373744, 1511649601, 327680}};
  s21_decimal two = {{932118346, -1025241630, 1536905567, -2147155968}};
  s21_decimal res = {0};
  int code = s21_mul(one, two, &res);
  ck_assert_int_eq(code == 1 || code == 2, 1);
  // standart = 0
  s21_decimal standart = {{0, 0, 0, 0}};
  ck_assert_int_eq(s21_is_equal(res, standart), 1);
}
END_TEST

Suite* suite_mul(void) {
  Suite* s = suite_create("\033[42m-=S21_DECIMAL_MUL=-\033[0m");
  TCase* tc1_1 = tcase_create("case_mul");
  tcase_add_test(tc1_1, s21_mul_test_1);
  tcase_add_test(tc1_1, s21_mul_test_2);
  tcase_add_test(tc1_1, s21_mul_test_3);
  tcase_add_test(tc1_1, s21_mul_test_4);
  tcase_add_test(tc1_1, s21_mul_test_5);
  tcase_add_test(tc1_1, s21_mul_test_6);
  tcase_add_test(tc1_1, s21_mul_test_7);
  tcase_add_test(tc1_1, s21_mul_test_8);
  tcase_add_test(tc1_1, s21_mul_test_9);
  tcase_add_test(tc1_1, s21_mul_test_10);
  tcase_add_test(tc1_1, s21_mul_test_11);
  tcase_add_test(tc1_1, s21_mul_test_12);
  tcase_add_test(tc1_1, s21_mul_test_13);
  tcase_add_test(tc1_1, s21_mul_test_14);
  tcase_add_test(tc1_1, s21_mul_test_15);
  tcase_add_test(tc1_1, s21_mul_test_16);
  tcase_add_test(tc1_1, s21_mul_test_17);
  tcase_add_test(tc1_1, s21_mul_test_18);
  tcase_add_test(tc1_1, s21_mul_test_19);
  tcase_add_test(tc1_1, s21_mul_test_20);
  tcase_add_test(tc1_1, s21_mul_test_21);
  tcase_add_test(tc1_1, s21_mul_test_22);
  tcase_add_test(tc1_1, s21_mul_test_23);
  tcase_add_test(tc1_1, s21_mul_test_24);
  tcase_add_test(tc1_1, s21_mul_test_25);
  tcase_add_test(tc1_1, s21_mul_test_26);
  tcase_add_test(tc1_1, s21_mul_test_27);
  tcase_add_test(tc1_1, s21_mul_test_28);
  tcase_add_test(tc1_1, s21_mul_test_29);
  tcase_add_test(tc1_1, s21_mul_test_30);
  tcase_add_test(tc1_1, s21_mul_test_31);
  tcase_add_test(tc1_1, s21_mul_test_32);
  tcase_add_test(tc1_1, s21_mul_test_33);
  tcase_add_test(tc1_1, s21_mul_test_34);
  tcase_add_test(tc1_1, s21_mul_test_35);
  tcase_add_test(tc1_1, s21_mul_test_36);
  tcase_add_test(tc1_1, s21_mul_test_37);
  tcase_add_test(tc1_1, s21_mul_test_38);
  tcase_add_test(tc1_1, s21_mul_test_39);
  tcase_add_test(tc1_1, s21_mul_test_40);
  tcase_add_test(tc1_1, s21_mul_test_41);
  tcase_add_test(tc1_1, s21_mul_test_42);
  tcase_add_test(tc1_1, s21_mul_test_43);
  tcase_add_test(tc1_1, s21_mul_test_44);
  tcase_add_test(tc1_1, s21_mul_test_45);
  tcase_add_test(tc1_1, s21_mul_test_46);
  tcase_add_test(tc1_1, s21_mul_test_47);
  tcase_add_test(tc1_1, s21_mul_test_48);
  tcase_add_test(tc1_1, s21_mul_test_49);
  tcase_add_test(tc1_1, s21_mul_test_50);
  tcase_add_test(tc1_1, s21_mul_test_51);
  tcase_add_test(tc1_1, s21_mul_test_52);
  tcase_add_test(tc1_1, s21_mul_test_53);
  tcase_add_test(tc1_1, s21_mul_test_54);
  tcase_add_test(tc1_1, s21_mul_test_55);
  tcase_add_test(tc1_1, s21_mul_test_56);
  tcase_add_test(tc1_1, s21_mul_test_57);
  tcase_add_test(tc1_1, s21_mul_test_58);
  tcase_add_test(tc1_1, s21_mul_test_59);
  tcase_add_test(tc1_1, s21_mul_test_60);
  tcase_add_test(tc1_1, s21_mul_test_61);
  tcase_add_test(tc1_1, s21_mul_test_62);
  tcase_add_test(tc1_1, s21_mul_test_63);
  tcase_add_test(tc1_1, s21_mul_test_64);
  tcase_add_test(tc1_1, s21_mul_test_65);
  tcase_add_test(tc1_1, s21_mul_test_66);
  tcase_add_test(tc1_1, s21_mul_test_67);
  tcase_add_test(tc1_1, s21_mul_test_68);
  tcase_add_test(tc1_1, s21_mul_test_69);
  tcase_add_test(tc1_1, s21_mul_test_70);
  tcase_add_test(tc1_1, s21_mul_test_71);
  tcase_add_test(tc1_1, s21_mul_test_72);
  tcase_add_test(tc1_1, s21_mul_test_73);
  tcase_add_test(tc1_1, s21_mul_test_74);
  tcase_add_test(tc1_1, s21_mul_test_75);
  tcase_add_test(tc1_1, s21_mul_test_76);
  tcase_add_test(tc1_1, s21_mul_test_77);
  tcase_add_test(tc1_1, s21_mul_test_78);
  tcase_add_test(tc1_1, s21_mul_test_80);
  tcase_add_test(tc1_1, s21_mul_test_81);
  tcase_add_test(tc1_1, s21_mul_test_82);
  tcase_add_test(tc1_1, s21_mul_test_83);
  tcase_add_test(tc1_1, s21_mul_test_84);
  tcase_add_test(tc1_1, s21_mul_test_85);
  tcase_add_test(tc1_1, s21_mul_test_86);
  tcase_add_test(tc1_1, s21_mul_test_88);
  tcase_add_test(tc1_1, s21_mul_test_89);
  tcase_add_test(tc1_1, s21_mul_test_90);
  tcase_add_test(tc1_1, s21_mul_test_91);
  tcase_add_test(tc1_1, s21_mul_test_92);
  tcase_add_test(tc1_1, s21_mul_test_93);
  tcase_add_test(tc1_1, s21_mul_test_94);
  tcase_add_test(tc1_1, s21_mul_test_95);
  tcase_add_test(tc1_1, s21_mul_test_96);
  tcase_add_test(tc1_1, s21_mul_test_97);
  tcase_add_test(tc1_1, s21_mul_test_98);
  tcase_add_test(tc1_1, s21_mul_test_99);
  tcase_add_test(tc1_1, s21_mul_test_100);

  suite_add_tcase(s, tc1_1);

  return s;
}