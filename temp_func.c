#include "s21_decimal.h"
int expon_float(float src) {
    unsigned int src_b = *((unsigned int *) &src);
    return ((src_b & s21_EXPON) >> 23) - 127;
}
void setbit(unsigned int *value, const int position, const int bit) {
    *value = bit ? (*value | (1 << position)) : (*value & ~(1 << position));
}
int checkbit(const int value, const int position) {
    return (value & (1 << position)) != 0;
}
int s21_from_float_to_decimal(float src, s21_decimal *dst) {
    *dst = zeroz;
    int check = (fabs(src) < 1e-28f || fabs(src) > powf(2, 96)) || (isnan(src) || isinf(src));
    if (!check) {
        int neg = src < 0;
        double src_d = (double)fabs(src);
        unsigned int scale = 0;
        for (; scale <= 28 && !((int)src_d / MAX_F) && (int)src_d != src_d; src_d *= 10, scale++) {}
        src = (float)round(src_d);
        for (; scale > 0 && !((int)src % 10); src /= 10, scale--) {}
        unsigned int src_b = *((unsigned int *) &src);
        int exp = expon_float(src);
        setbit(&dst->bits[exp / 32], exp % 32, src != 0);
        exp--;
        for (int i = 22; i >= 0; exp--, i--)
            checkbit(src_b, i) ? setbit(&dst->bits[exp / 32], exp % 32, 1) : 0;
        dst->bits[3] = scale << 16 | neg << 31;
    }
    return check;
}