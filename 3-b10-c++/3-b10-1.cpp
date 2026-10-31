/*2652946 计科 张栋哲*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <windows.h> //取系统时间
using namespace std;

int main()
{
	LARGE_INTEGER tick, begin, end;

	QueryPerformanceFrequency(&tick);	//获得计数器频率
	QueryPerformanceCounter(&begin);	//获得初始硬件计数器计数

	/* 此处是你的程序开始 */

	int a1, a2, a3, b1, b2, b3, c1, c2, c3;
	int k, a, b, c;
	int xu = 0;

	for (a = 123; a < 651; a++) {
		for (b = a + 1; b <= 915; b++) {
			c = 1953 - a - b;
			if (c <= b) {
				break;
			}

			a1 = a / 100;
			a2 = a / 10 % 10;
			a3 = a % 10;
			b1 = b / 100;
			b2 = b / 10 % 10;
			b3 = b % 10;
			c1 = c / 100;
			c2 = c / 10 % 10;
			c3 = c % 10;

			bool zzz = true;

			if (a1 == 0 || a2 == 0 || a3 == 0 || b1 == 0 || b2 == 0 || b3 == 0 || c1 == 0 || c2 == 0 || c3 == 0) {
				zzz = false;
			}

			if (zzz) {
				for (int t = 1; t <= 9; t++) {
					k = 0;
					if (a1 == t) k++;
					if (a2 == t) k++;
					if (a3 == t) k++;
					if (b1 == t) k++;
					if (b2 == t) k++;
					if (b3 == t) k++;
					if (c1 == t) k++;
					if (c2 == t) k++;
					if (c3 == t) k++;

					if (k != 1) {
						zzz = false;
						break;
					}
				}

				if (zzz) {
					xu++;
					cout << "No." << setiosflags(ios::right) << setw(3) << xu << " : " << a << "+" << b << "+" << c << "=1953" << endl;
				}
			}
		}
	}

	cout << "total=" << xu << endl;

	/* 此处是你的程序结束 */

	QueryPerformanceCounter(&end);		//获得终止硬件计数器计数

	cout << "计数器频率 : " << tick.QuadPart << "Hz" << endl;
	cout << "计数器计数 : " << end.QuadPart - begin.QuadPart << endl;
	cout << setiosflags(ios::fixed) << setprecision(6) << double(end.QuadPart - begin.QuadPart) / tick.QuadPart << "秒" << endl;

	return 0;
}
