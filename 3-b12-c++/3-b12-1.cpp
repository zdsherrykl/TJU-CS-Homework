/* 计科 2652946 张栋哲 */
#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int x;

    while (true)
    {
        cout << "请输入x的值[0-100] : ";
        cin >> x;

        if (cin.fail())
        {
            cin.clear(); // 清除 cin 的错误状态，让它恢复工作
            // 清空当前输入缓冲区中的所有内容，直到遇到回车符
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        else if (x >= 0 && x <= 100)
        {
            break;
        }
    }

    cout << "cin.fail()=" << cin.fail() << " x=" << x << endl;

    return 0;
}