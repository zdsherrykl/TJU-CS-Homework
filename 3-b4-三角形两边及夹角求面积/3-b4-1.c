#include <stdio.h>
#include <math.h>

int main() {
    const double Pi = 3.14159;
    int a, b, angle;

    printf("请输入三角形的两边及其夹角（角度）\n");
    scanf("%d %d %d", &a, &b, &angle);

    double rad = angle * Pi / 180.0;
    float area = (float)(0.5 * a * b * sin(rad));

    printf("三角形面积为 : %.3f\n", area);

    return 0;
}