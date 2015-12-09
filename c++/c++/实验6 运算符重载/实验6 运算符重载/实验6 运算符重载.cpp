// ʵ��6 ���������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
class Complex{
private:double real, imag;
public:Complex(){ real = 0; imag = 0; }
	   Complex(double r,double i){ real = r; imag = i; }
	   Complex operator + (Complex &);
	   Complex operator + (int &);
	   friend Complex operator + (int &, Complex &);
	   void display(){ if(imag>=0)cout << "(" << real << "+" << imag << "i)" << endl; 
	   else cout << "(" << real << imag << "i)" << endl;
	   }
};
Complex Complex:: operator + (Complex &x){
	return Complex(real + x.real, imag+x.imag);

}
Complex Complex:: operator + (int &a){
	
	return Complex(a+real,imag); 

}
Complex operator + (int &a, Complex &x)
{
	return Complex(a + x.real, x.imag);
}
class Student{
private:
	int num;
	string name;
	char sex;
	float score;
public:
	Student(int nu=1,string na = "δ����", char se='m',float sc = 0)
	{
		num = nu; name = na; sex = se; score = sc;
	}
	int get_num(){ return num; }
	string get_name(){ return name; }
	char get_sex(){ return sex; }
	
	void show(){
		cout << "������" << name << "  ���:"<<num<<"    �Ա�:"<<sex<<"    �ɼ�:"<<score<<endl;
	}
	
};
class Teacher{
private:
	int num;
	string name;
	char sex;
	float pay;
public:
	Teacher(int nu = 1, string na = "δ����", char se = 'm', float sc = 0)
	{
		num = nu; name = na; sex = se; pay = sc;
	}
	Teacher(Student&);
	void show(){
		cout << "������" << name << "  ���:" << num << "    �Ա�:" << sex << "    ����:" <<pay<<endl;
	}
};
Teacher::Teacher(Student & stud)
{
	num = stud.get_num();
	name = stud.get_name();
	sex = stud.get_sex();
	pay = 2500;

}
int _tmain(int argc, _TCHAR* argv[])
{
	/*������һ��������Complex�������������+����ʹ֮�����ڸ����ļӷ����㡣
	�μ�������������������Զ�����Ķ���Ҳ��������һ����������˳�����⡣
	���иó��򣬷ֱ������������ĺͣ������͸����ĺ͡�*/

	Complex a(3, 4), b(1, -9), c;
	int w = 8;
	c = a + b;
	cout << "c="; c.display();
	c = a+w;
	cout << "c="; c.display();
	c = w + b;
	cout << "c="; c.display();
	/*������һ��Teacher(��ʦ)���һ��Student(ѧ��)�࣬
	������һ�������ݳ�Ա��ͬ��
	��д���򣬽�һ��Student����ת��ΪTeacher�ࡣ*/
	Teacher tec1(101, "why", 'm', 3500),tec2;
	Student stu1(110, "zhang", 'f', 96);
	tec2 = Teacher(stu1);
	cout << "Teacher1:"; tec1.show();
	cout << "Teacher2:"; tec2.show();
	return 0;
}

