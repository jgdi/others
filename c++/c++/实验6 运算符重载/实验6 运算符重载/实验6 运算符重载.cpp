// 实验6 运算符重载.cpp : 定义控制台应用程序的入口点。
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
	Student(int nu=1,string na = "未命名", char se='m',float sc = 0)
	{
		num = nu; name = na; sex = se; score = sc;
	}
	int get_num(){ return num; }
	string get_name(){ return name; }
	char get_sex(){ return sex; }
	
	void show(){
		cout << "姓名：" << name << "  编号:"<<num<<"    性别:"<<sex<<"    成绩:"<<score<<endl;
	}
	
};
class Teacher{
private:
	int num;
	string name;
	char sex;
	float pay;
public:
	Teacher(int nu = 1, string na = "未命名", char se = 'm', float sc = 0)
	{
		num = nu; name = na; sex = se; pay = sc;
	}
	Teacher(Student&);
	void show(){
		cout << "姓名：" << name << "  编号:" << num << "    性别:" << sex << "    工资:" <<pay<<endl;
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
	/*①声明一个复数类Complex，重载运算符“+”，使之能用于复数的加法运算。
	参加运算的两个运算量可以都是类的对象，也可以其中一个是整数，顺序任意。
	运行该程序，分别求两个复数的和，整数和复数的和。*/

	Complex a(3, 4), b(1, -9), c;
	int w = 8;
	c = a + b;
	cout << "c="; c.display();
	c = a+w;
	cout << "c="; c.display();
	c = w + b;
	cout << "c="; c.display();
	/*②声明一个Teacher(教师)类和一个Student(学生)类，
	两者有一部分数据成员相同。
	编写程序，将一个Student对象转换为Teacher类。*/
	Teacher tec1(101, "why", 'm', 3500),tec2;
	Student stu1(110, "zhang", 'f', 96);
	tec2 = Teacher(stu1);
	cout << "Teacher1:"; tec1.show();
	cout << "Teacher2:"; tec2.show();
	return 0;
}

