#include <stdio.h>

int main() {
    double num;
    printf("请输入[0-100亿)之间的数字：\n");
    scanf("%lf", &num);

    num += 1e-8; // 修正浮点数精度误差

    int b10 = (int)(num / 1000000000.0); num -= b10 * 1000000000.0;
    int b9 = (int)(num / 100000000.0);  num -= b9 * 100000000.0;
    int b8 = (int)(num / 10000000.0);   num -= b8 * 10000000.0;
    int b7 = (int)(num / 1000000.0);    num -= b7 * 1000000.0;
    int b6 = (int)(num / 100000.0);     num -= b6 * 100000.0;
    int b5 = (int)(num / 10000.0);      num -= b5 * 10000.0;
    int b4 = (int)(num / 1000.0);       num -= b4 * 1000.0;
    int b3 = (int)(num / 100.0);        num -= b3 * 100.0;
    int b2 = (int)(num / 10.0);         num -= b2 * 10.0;
    int b1 = (int)(num / 1.0);          num -= b1 * 1.0;

    int yuan = (int)(num * 10.0);        num -= yuan * 0.1;
    int jiao = (int)(num * 100.0 + 1e-5);
    num -= jiao * 0.01;
    int fen = (int)(num * 1000.0 + 1e-5);

    printf("十亿位 : %d\n", b10);
    printf("亿位   : %d\n", b9);
    printf("千万位 : %d\n", b8);
    printf("百万位 : %d\n", b7);
    printf("十万位 : %d\n", b6);
    printf("万位   : %d\n", b5);
    printf("千位   : %d\n", b4);
    printf("百位   : %d\n", b3);
    printf("十位   : %d\n", b2);
    printf("个位   : %d\n", b1);
    printf("圆     : %d\n", yuan);
    printf("角     : %d\n", jiao);
    printf("分     : %d\n", fen);

    return 0;
}