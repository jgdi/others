#include<iostream>
#include<string>
using namespace std;

class Date  //定义日期类
{
private:
int year,month,day;
public:
	Date(){}//无参构造函数
	Date(int,int,int);//带参数构造函数
    void setday(){cin>>year>>month>>day;}
	void display(){cout<<"出生日期是："<<year<<"-"<<month<<"-"<<day;}
	 
};
//内联构造函数
inline Date::Date(int y,int m,int d){year=y; month=m;day=d;}  

class People
{
private:
 string number;
 string sex;
 char id[19];
 Date birthday;
public:
	People(string n="007",string s="man",char *idd="2014000011111",int y=2014,int m=11,int d=11):birthday(y,m,d)
 {
 number=n;
 sex=s;
 strcpy(id,idd);}
	void input(){
	cout<<"录入数据："<<endl;
	cout<<"编号：";cin>>number;
	cout<<"性别：";cin>>sex;
	cout<<"身份证号:";cin>>id;id[18]='\0';
	cout<<endl;cout<<"生日:";birthday.setday();}
 void coutall(){cout<<"编号："<<number<<"  性别:"
	             <<sex<<"   身份证号："<<id;
                birthday.display();cout<<endl;}
  
 int Peopele(const People &);//复制构造函数声明
 ~People(){}
};
//内联复制构造函数定义
inline int People::Peopele(const People &b){
	number=b.number;
	sex=b.sex;
	strcpy(id,b.id);
	birthday=b.birthday;
}

int main()
{
 People why1;
 why1.coutall();
 why1.input();
 why1.coutall();
 People why2(why1);//调用复制（拷贝）构造函数，复制出一个对象why2
 why2.coutall();
 
 return 0;
}