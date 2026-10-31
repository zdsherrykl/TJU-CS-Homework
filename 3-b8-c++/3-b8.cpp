/* 2652946 计科 张栋哲 */
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int m;
	
    while(true){
		
		cout << "请输入x的值[-10 ~ +65]" << endl;
		cin >> m;
		
	    if (m >= -10 && m <= 65) {
			int n = 0;
			double zz = 1;
			double zhi = 1;
		    while (fabs(zz) >= 1e-6) {
				zz = zz * m / (n + 1);
				zhi = zhi + zz;
				n++;
			}
			cout << setprecision(10);
			cout << "迭代终值" << " " << "n=" << n << " " << "x^" << n << "/" << n << "!=" << zz << endl;
			cout << "e^" << m << "=" << zhi << endl;
			break;
	    }
		else {
			cout << "输入非法，请重新输入" << endl;
			continue;
			
		}
		
    }


	
	return 0;
}

