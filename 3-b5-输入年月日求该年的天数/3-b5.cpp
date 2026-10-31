/* 2651946 计科 张栋哲 */
#include <iostream>
using namespace std;

int main()
{
    int year, month, day;
    int daysBefore = 0;
    int maxDay = 0;
    int totalDays = 0;
    bool isLeap = false;

    cout << "请输入年，月，日" << endl;
    cin >> year >> month >> day;

    if (month < 1 || month > 12)
    {
        cout << "输入错误-月份不正确" << endl;
        return 0;
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        isLeap = true;
    }
    else
    {
        isLeap = false;
    }

    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            maxDay = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            maxDay = 30;
            break;
        case 2:
            if (isLeap)
            {
                maxDay = 29;
            }
            else
            {
                maxDay = 28;
            }
            break;
    }

    if (day < 1 || day > maxDay)
    {
        cout << "输入错误-日与月的关系非法" << endl;
        return 0;
    }

    switch (month)
    {
        case 1:
            daysBefore = 0;
            break;
        case 2:
            daysBefore = 31;
            break;
        case 3:
            daysBefore = 59;
            break;
        case 4:
            daysBefore = 90;
            break;
        case 5:
            daysBefore = 120;
            break;
        case 6:
            daysBefore = 151;
            break;
        case 7:
            daysBefore = 181;
            break;
        case 8:
            daysBefore = 212;
            break;
        case 9:
            daysBefore = 243;
            break;
        case 10:
            daysBefore = 273;
            break;
        case 11:
            daysBefore = 304;
            break;
        case 12:
            daysBefore = 334;
            break;
    }

    if (isLeap && month > 2)
    {
        daysBefore = daysBefore + 1;
    }

    totalDays = daysBefore + day;

    cout << year << "-" << month << "-" << day << "是" << year << "年的第" << totalDays << "天" << endl;

    return 0;
}