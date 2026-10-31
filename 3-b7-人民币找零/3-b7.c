/* 2652946 计科 张栋哲 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double x;
    int cents, total;
    int c50, c20, c10, c5, c1;
    int c5j, c1j, c5f, c2f, c1f;

    printf("请输入找零值：\n");
    scanf("%lf", &x);

    // 超出 [0.01, 100) 范围：与 demo 保持一致，输出错误提示后结束
    if (x < 0.01 || x >= 100.0)
    {
        printf("输入错误，请重新输入\n");
        return 0;
    }

    cents = (int)(x * 100 + 0.5);

    c50 = cents / 5000;
    cents = cents % 5000;
    c20 = cents / 2000;
    cents = cents % 2000;
    c10 = cents / 1000;
    cents = cents % 1000;
    c5 = cents / 500;
    cents = cents % 500;
    c1 = cents / 100;
    cents = cents % 100;
    c5j = cents / 50;
    cents = cents % 50;
    c1j = cents / 10;
    cents = cents % 10;
    c5f = cents / 5;
    cents = cents % 5;
    c2f = cents / 2;
    cents = cents % 2;
    c1f = cents;

    total = c50 + c20 + c10 + c5 + c1 + c5j + c1j + c5f + c2f + c1f;

    printf("共%d张找零，具体如下：\n", total);

    if (c50 != 0)
    {
        printf("50元 : %d张\n", c50);
    }
    if (c20 != 0)
    {
        printf("20元 : %d张\n", c20);
    }
    if (c10 != 0)
    {
        printf("10元 : %d张\n", c10);
    }
    if (c5 != 0)
    {
        printf("5元  : %d张\n", c5);
    }
    if (c1 != 0)
    {
        printf("1元  : %d张\n", c1);
    }
    if (c5j != 0)
    {
        printf("5角  : %d张\n", c5j);
    }
    if (c1j != 0)
    {
        printf("1角  : %d张\n", c1j);
    }
    if (c5f != 0)
    {
        printf("5分  : %d张\n", c5f);
    }
    if (c2f != 0)
    {
        printf("2分  : %d张\n", c2f);
    }
    if (c1f != 0)
    {
        printf("1分  : %d张\n", c1f);
    }

    return 0;
}