// 实验8 多态性与虚函数.cpp : 定义控制台应用程序的入口点。
//
/*编写1个程序，要求如下： 
①申明抽象基类Shape，派生出3个派生类：Circle(圆形)、Rectangle(矩形)、Triangle(三角形)。 
②用一个函数printArea分别输出以上三者的面积。
③3个图形的数据在定义对象时给定：圆形半径为6；矩形边长为4、5；三角形边长为3、4、5。
*/
#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
//定义抽象基类Shape
class Shape
{
public:virtual double area()const = 0;   //纯虚函数
};
//定义Circle类
class Circle :public Shape
{
public:Circle(double r) :radius(r){}
	   virtual double area() const { return 3.14159*radius*radius; };   //定义虚函数
protected:double radius;

};
class Rectangle :public Shape   //定义Rectangle类
{
public:Rectangle(double w, double h) :width(w), height(h){}
	   virtual double area() const { return width*height; };   //定义虚函数
protected:double width,height;

};
class Triangle :public Shape
{
public:Triangle(double a, double b, double c) :edge1(a), edge2(b), edge3(c){}
	   virtual double area() const { double s = (edge1 + edge2 + edge3) / 2;
	   return sqrt(s*(s - edge1)*(s - edge2)*(s - edge3));
	   };   //定义虚函数
protected:double edge1,edge2,edge3;

};

void printArea(const Shape &s){ cout << s.area() << endl; }
int _tmain(int argc, _TCHAR* argv[])
{
	Circle c1(6); Rectangle r1(4, 5); Triangle t1(3, 4, 5);
	cout << "圆面积："; printArea(c1);
	cout << "矩形面积："; printArea(r1);
	cout << "三角形面积："; printArea(t1);
	
	
	return 0;
}

