/* 计科 2652946 张栋哲 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x;
    int res;

    while (1)
    {
        printf("请输入x的值[0-100] : ");

        res = scanf("%d", &x);

        if (res == 0)
        {
            while (getchar() != '\n')
            {
              
            }
        }
        else if (res == 1)
        {
            if (x >= 0 && x <= 100)
            {
                break;
            }
        }
       
        else if (res == EOF)
        {
            break;
        }
    }

  
    printf("res=%d x=%d\n", res, x);

    return 0;
}