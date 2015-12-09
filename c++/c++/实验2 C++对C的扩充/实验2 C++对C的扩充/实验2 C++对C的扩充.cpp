// 实验2 C++对C的扩充.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
template < typename T >
void sort_template(T m[], int n)
{
	sort(m, m + n);
}
int _tmain(int argc, _TCHAR* argv[])
{
	/* 编写一个程序，用来实现2个或3个正整数中的最大数。
	①用不带默认参数的函数实现；
	②用带默认参数的函数实现。
	对比两种方法，分析带默认参数的函数优点和应用场合，并分析本题中默认参数的取值应该在什么范围。
	*/int max_no_parameter(int, int, int);
int max_no_parameter(int, int);
int max_parameter(int, int, int c = 0);
cout << max_no_parameter(23, 9, 3) << endl;
cout << max_no_parameter(8, 52) << endl;
cout << max_parameter(23, 9, 3) << endl;
cout << max_parameter(8, 52) << endl;
/*编写一个程序，输入两个整数，将它们由大到小的顺序输出。
①使用指针方法；
②使用变量引用方法。
对比两种方法，分析这两种方法的特点和使用技巧。
*/

void sort_two(int *, int *);//point
void sort_two(int &, int &);//reference
int x, y;
cin >> x >> y;
sort_two(&x, &y);
cout << x << "x  y " << y << endl;
cin >> x >> y;
sort_two(x, y);
cout << x << "x  y" << y << endl;

/*有5个字符串，要求对它们由小到大的顺序排列，用string方法。*/
void sort_string();
sort_string();
cout << endl;
/*编写一个程序，用同一个函数名对n个数据从小到大排序，
数据类型可以是整形、单精度型和双精度型。对比以下两种方法，
分析这两种方法的特点和使用技巧。
①用重载函数实现；
②用函数模板实现。
*/
int a[5] = { 19, 8, 123, 10, 5 };
float b[5] = { 19.1, 8, 7, 10, 5 };
double c[5] = { 9.8, 8, 7, 6, 5 };
void sort_override(int[], int);
void sort_override(float[], int);
void sort_override(double[], int);
sort_override(a, 5);
for (int i = 0; i < 5; i++)cout << a[i] << '\t';
cout << endl;
sort_override(b, 5);
for (int i = 0; i < 5; i++)cout << b[i] << '\t';
cout << endl;
sort_template(c, 5);
for (int i = 0; i < 5; i++)cout << c[i] << '\t';
cout << endl;

return 0;
}


int max_no_parameter(int a, int b, int c)
{
	int temp = a;
	if (a < b)temp = b;
	if (temp < c)return c; else return temp;
}
int max_no_parameter(int a, int b)
{

	if (a < b)return b; else return a;
}
int max_parameter(int a, int b, int c = 0)
{
	int temp = a;
	if (a < b)temp = b;
	if (temp < c)return c; else return temp;
}
void sort_two(int *a, int *b)
{
	int temp;
	if (*a < *b){ temp = *a; *a = *b; *b = temp; }


}
void sort_two(int &a, int &b)
{
	int temp;
	if (a < b){
		temp = a; a = b; b = temp;
	}
}
void sort_string()
{
	int i;
	string str[5] = { "zwz", "ch", "cly", "dmq", "dx" };
	sort(str, str + 5);
	for (i = 0; i < 5; i++)cout << str[i] << " ";
}

void sort_override(int m[], int n)
{
	sort(m, m + n);
}
void sort_override(float m[], int n)
{
	sort(m, m + n);
}
void sort_override(double m[], int n)
{
	sort(m, m + n);
}

