// ʵ��2 C++��C������.cpp : �������̨Ӧ�ó������ڵ㡣
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
	/* ��дһ����������ʵ��2����3���������е��������
	���ò���Ĭ�ϲ����ĺ���ʵ�֣�
	���ô�Ĭ�ϲ����ĺ���ʵ�֡�
	�Ա����ַ�����������Ĭ�ϲ����ĺ����ŵ��Ӧ�ó��ϣ�������������Ĭ�ϲ�����ȡֵӦ����ʲô��Χ��
	*/int max_no_parameter(int, int, int);
int max_no_parameter(int, int);
int max_parameter(int, int, int c = 0);
cout << max_no_parameter(23, 9, 3) << endl;
cout << max_no_parameter(8, 52) << endl;
cout << max_parameter(23, 9, 3) << endl;
cout << max_parameter(8, 52) << endl;
/*��дһ���������������������������ɴ�С��˳�������
��ʹ��ָ�뷽����
��ʹ�ñ������÷�����
�Ա����ַ��������������ַ������ص��ʹ�ü��ɡ�
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

/*��5���ַ�����Ҫ���������С�����˳�����У���string������*/
void sort_string();
sort_string();
cout << endl;
/*��дһ��������ͬһ����������n�����ݴ�С��������
�������Ϳ��������Ρ��������ͺ�˫�����͡��Ա��������ַ�����
���������ַ������ص��ʹ�ü��ɡ�
�������غ���ʵ�֣�
���ú���ģ��ʵ�֡�
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

