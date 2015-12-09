// ʵ��8 ��̬�����麯��.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*��д1������Ҫ�����£� 
�������������Shape��������3�������ࣺCircle(Բ��)��Rectangle(����)��Triangle(������)�� 
����һ������printArea�ֱ�����������ߵ������
��3��ͼ�ε������ڶ������ʱ������Բ�ΰ뾶Ϊ6�����α߳�Ϊ4��5�������α߳�Ϊ3��4��5��
*/
#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;
//����������Shape
class Shape
{
public:virtual double area()const = 0;   //���麯��
};
//����Circle��
class Circle :public Shape
{
public:Circle(double r) :radius(r){}
	   virtual double area() const { return 3.14159*radius*radius; };   //�����麯��
protected:double radius;

};
class Rectangle :public Shape   //����Rectangle��
{
public:Rectangle(double w, double h) :width(w), height(h){}
	   virtual double area() const { return width*height; };   //�����麯��
protected:double width,height;

};
class Triangle :public Shape
{
public:Triangle(double a, double b, double c) :edge1(a), edge2(b), edge3(c){}
	   virtual double area() const { double s = (edge1 + edge2 + edge3) / 2;
	   return sqrt(s*(s - edge1)*(s - edge2)*(s - edge3));
	   };   //�����麯��
protected:double edge1,edge2,edge3;

};

void printArea(const Shape &s){ cout << s.area() << endl; }
int _tmain(int argc, _TCHAR* argv[])
{
	Circle c1(6); Rectangle r1(4, 5); Triangle t1(3, 4, 5);
	cout << "Բ�����"; printArea(c1);
	cout << "���������"; printArea(r1);
	cout << "�����������"; printArea(t1);
	
	
	return 0;
}

