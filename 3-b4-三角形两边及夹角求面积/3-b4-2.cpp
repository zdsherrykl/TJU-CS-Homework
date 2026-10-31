#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const double Pi = 3.14159;
    int a, b, angle;

    cout << "请输入三角形的两边及其夹角（角度）\n";
    cin >> a >> b >> angle;

    // 必须将角度转为弧度才能调用sin函数
    double rad = angle * Pi / 180.0;

    // 计算过程使用double，输出结果转为float型
    double area = (double)(0.5 * a * b * sin(rad));

    cout << fixed << setprecision(3);
    cout << "三角形面积为 : " << area << endl;

    return 0;
}