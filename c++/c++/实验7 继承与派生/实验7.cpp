#include<iostream>
#include<iomanip> 
using namespace std;
class employer
{
protected:
	int code,age;
	char sex[3];
	char name[10];
	employer()
	{code=0;age=0;strcpy(sex,"男");strcpy(name,"###");}
	void getdata(){cin>>code>>name>>sex>>age;}
	virtual void print(){
		cout<<code<<'\t'<<name<<'\t'<<sex<<'\t'<<age<<'\t';}
};
class teacher:virtual public employer{  //雇员类为虚基类
protected:
int hour;
public:
	teacher():employer(){hour=30;}
    void getdata(){employer::getdata();cin>>hour;}
	void print(){
		double salary=0;
		salary=1000+hour*30;
		employer::print();cout<<salary<<endl;}
};
class labworker: public employer{
protected:
int hour;
public:
	labworker():employer(){hour=60;}
    void getdata(){employer::getdata();cin>>hour;}
	void print(){
		double salary=0;
		salary=800+150+hour*5;
		employer::print();cout<<salary<<endl;}
};
class admin:virtual public employer{
protected:
double addition;
public:
	admin():employer(){addition=200;}
    void getdata(){employer::getdata();}
	void print(){
		double salary=0;
		salary=900+addition;
		employer::print();cout<<salary<<endl;}
};

class double_shoulder:public teacher,public admin
	{
   public:
	   double_shoulder():teacher(),admin(){}
    void getdata(){teacher::getdata();}
	void print(){
		double salary=0;
		salary=1000+hour*30+addition;
		employer::print();cout<<salary<<endl;}
};
void input_teacher(teacher *temp,int count){
      cout<<"编号\t姓名\t性别\t年龄\t课时"<<endl;
	 for(int i=0;i<count;i++)temp[i].getdata();
}
void input_labworker(labworker *temp,int count){
      cout<<"编号\t姓名\t性别\t年龄\t值班时间"<<endl;
	  for(int i=0;i<count;i++)temp[i].getdata();
}
void input_double_shoulder(double_shoulder *temp,int count){
      cout<<"编号\t姓名\t性别\t年龄\t课时"<<endl;
	  for(int i=0;i<count;i++)temp[i].getdata();
}

int main()
{ 
int count=1,i,choice;
teacher *t;labworker *l;admin *a;double_shoulder *d;
while(1)
{
cout<<" 输入0.退出输入"<<endl;
cout<<"1.输入教师资料\n2.输入实验员资料\n3.输入行政人员资料\n4.输入双肩挑人员资料"<<endl;
cin>>choice;
switch(choice)
{
case 0:return 0;
case 1:cout<<"确定本次输入人数:";
         cin>>count;
		 t=new teacher [count];
		 input_teacher(t,count);
         break;

case 2:  cout<<"确定本次输入人数:";
         cin>>count;
		 l=new labworker[count];
         input_labworker(l,count);
		 break;

case 4:  cout<<"确定本次输入人数:";
         cin>>count;
		 d=new double_shoulder[count];
         input_double_shoulder(d,count);
		 break;

default:cout<<"输入错误，请重新输入"<<endl;break;
}


switch(choice)
{
case 1:cout<<"教师信息如下："<<endl;cout<<"编号\t姓名\t性别\t年龄\t薪水"<<endl;
	  for(i=0;i<count;i++)t[i].print();delete [] t;break;
case 2:cout<<"实验员信息如下："<<endl;cout<<"编号\t姓名\t性别\t年龄\t薪水"<<endl;
	for(i=0;i<count;i++)l[i].print();delete [] l;break;
case 4:cout<<"双肩挑人员信息如下："<<endl;cout<<"编号\t姓名\t性别\t年龄\t薪水"<<endl;
	   for(i=0;i<count;i++)d[i].print();delete [] d;break;
default:cout<<"error"<<endl;break;

}

}
return 0;
}
