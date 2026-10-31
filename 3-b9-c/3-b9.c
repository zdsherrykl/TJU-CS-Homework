/* 2652946 º∆ø∆ ’≈∂∞’‹ */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int i;
    int j;

    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%dx%d=%-4d", j, i, j * i);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}