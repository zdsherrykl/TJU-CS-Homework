/* 计科 2652946 张栋哲 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int ret, x;

    while (1)
    {
        printf("请输入x的值[0-100] : ");
        ret = scanf("%d", &x); //读入x的方式必须是scanf且格式符为%d，不准用非scanf

        if (ret == 1 && (x >= 0 && x <= 100))
        {
            break;
        }

        printf("输入有错[ret=%d x=%d],请重新输入\n", ret, x);

        if (ret == 0)
        {
            // 转换失败：清空本行剩余内容（非法字符），直到回车符
            while (getchar() != '\n' && !feof(stdin))
            {
            }
        }
    }

    printf("ret=%d x=%d\n", ret, x);

    return 0;
}
