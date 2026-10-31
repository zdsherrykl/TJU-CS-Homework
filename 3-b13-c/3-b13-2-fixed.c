/* 计科 2652946 张栋哲 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int nian, yue, xingqi, a2, tian;
    int i, ri, res;

    while (1)
    {
        printf("请输入年份(2000-2030)和月份(1-12) : ");
        res = scanf("%d %d", &nian, &yue);

        if (res == EOF)
        {
            return 0;
        }

        if (res != 2)
        {
            while (getchar() != '\n' && !feof(stdin))
            {
            }
            printf("输入非法，请重新输入\n");
            continue;
        }

        if (nian >= 2000 && nian <= 2030 && yue >= 1 && yue <= 12)
        {
            break;
        }

        printf("输入非法，请重新输入\n");
    }

    while (1)
    {
        printf("请输入%d年%d月1日的星期(0-6表示星期日-星期六) : ", nian, yue);
        res = scanf("%d", &xingqi);

        if (res == EOF)
        {
            return 0;
        }

        if (res != 1)
        {
            while (getchar() != '\n' && !feof(stdin))
            {
            }
            printf("输入非法，请重新输入\n");
            continue;
        }

        if (xingqi >= 0 && xingqi <= 6)
        {
            break;
        }

        printf("输入非法，请重新输入\n");
    }

    printf("\n");

    // 判断闰年
    if ((nian % 4 == 0 && nian % 100 != 0) || (nian % 400 == 0))
    {
        a2 = 29;
    }
    else
    {
        a2 = 28;
    }

    // 判断当月天数
    if (yue == 4 || yue == 6 || yue == 9 || yue == 11)
    {
        tian = 30;
    }
    else if (yue != 2)
    {
        tian = 31;
    }
    else
    {
        tian = a2;
    }

    // 打印表头
    printf("%d年%d月的月历为:\n", nian, yue);
    printf("星期日  星期一  星期二  星期三  星期四  星期五  星期六\n");

    for (i = 0; i < xingqi; i++)
    {
        printf("        ");
    }

    // 打印日期
    for (ri = 1; ri <= tian; ri++)
    {
        printf("%4d    ", ri);

        if ((ri + xingqi) % 7 == 0)
        {
            printf("\n");
        }
    }

    printf("\n");

    return 0;
}
