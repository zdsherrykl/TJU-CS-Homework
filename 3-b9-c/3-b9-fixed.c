/* 2652946 计科 张栋哲 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i;
    int j;

    // 外层循环控制行，内层循环控制列，乘积左对齐占 4 格
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%dx%d=%-4d", j, i, j * i);
        }
        printf("\n");
    }
    printf("\n");


    return 0;
}
