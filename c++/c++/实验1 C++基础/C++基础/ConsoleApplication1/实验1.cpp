// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	
	//混合运算
	{int a = 1, b = 2, i;
	i = --a || ++b, a + b;
	cout << "a=" << a << " b=" << b << "  i=" << i << endl;
	a = 1; b = 2;
	i = a-- || (++b, a + b);
	cout << "a=" << a << " b=" << b << "  i=" << i << endl;
	a = 1; b = 2;
	i = --a || (++b, a + b);
	cout << "a=" << a << " b=" << b << "  i=" << i << endl;
	a = 1; b = 2;
	i = ((--a || ++b), a + b);
	cout << "a=" << a << " b=" << b << "  i=" << i << endl;
	}

	//整形、字符型间的相互赋值	

{char c;  short a; unsigned short u_a;
c = 128;  a = c; u_a = c;
cout << "c=" << c << "  a=" << a << "  u_a=" << u_a << endl;
c = 0501;  a = c; u_a = c;
cout << "c=" << c << "  a=" << a << "  u_a=" << u_a << endl;
//char cc;c=140;cc=-116;if(c==cc)cout<<"same"<<endl;else cout<<"no same"<<endl;
//short i,j;i=32800;j=-32736;cout<<"i= "<<i<<"  j="<<j<<endl;
}
	//浮点型数据的赋值及精度
{int i; short j; char k; long l; float m; double n;
n = 50000.222233334447;
i = n; j = n; k = n; l = n; m = n;
printf("n=%.12f\n", n);
cout << i << "   " << j << "   " << k << "   " << l << "   "
<< setprecision(12) << m << "   " << n << endl;
}

	return 0;
}

