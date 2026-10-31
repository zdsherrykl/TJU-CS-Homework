/* 2652946 计科 张栋哲 */
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int nian, yue, xingqi, a2, tian;

    while (true)
    {
        cout << "请输入年份(2000-2030)和月份(1-12) : ";
        cin >> nian >> yue;

        if (cin.eof())
        {
            return 0;
        }

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "输入非法，请重新输入" << endl;
        }
        else
        {
            if (nian >= 2000 && nian <= 2030 && yue >= 1 && yue <= 12)
            {
                break;
            }
            cout << "输入非法，请重新输入" << endl;
        }
    }

    while (true)
    {
        cout << "请输入" << nian << "年" << yue << "月1日的星期(0-6表示星期日-星期六) : ";
        cin >> xingqi;

        if (cin.eof())
        {
            return 0;
        }

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "输入非法，请重新输入" << endl;
        }
        else
        {
            if (xingqi >= 0 && xingqi <= 6)
            {
                break;
            }
            cout << "输入非法，请重新输入" << endl;
        }
    }

    cout << endl;

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
    cout << nian << "年" << yue << "月的月历为:" << endl;
    cout << "星期日" << "  " << "星期一" << "  " << "星期二" << "  "
        << "星期三" << "  " << "星期四" << "  " << "星期五" << "  " << "星期六" << endl;

    for (int i = 0; i < xingqi; i++)
    {
        cout << "        ";
    }

    // 打印日期
    for (int ri = 1; ri <= tian; ri++)
    {
        cout << right << setw(4) << ri << "    ";

        if ((ri + xingqi) % 7 == 0)
        {
            cout << endl;
        }
    }

    cout << endl;

    return 0;
}
