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
	{code=0;age=0;strcpy(sex,"��");strcpy(name,"###");}
	void getdata(){cin>>code>>name>>sex>>age;}
	virtual void print(){
		cout<<code<<'\t'<<name<<'\t'<<sex<<'\t'<<age<<'\t';}
};
class teacher:virtual public employer{  //��Ա��Ϊ�����
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
      cout<<"���\t����\t�Ա�\t����\t��ʱ"<<endl;
	 for(int i=0;i<count;i++)temp[i].getdata();
}
void input_labworker(labworker *temp,int count){
      cout<<"���\t����\t�Ա�\t����\tֵ��ʱ��"<<endl;
	  for(int i=0;i<count;i++)temp[i].getdata();
}
void input_double_shoulder(double_shoulder *temp,int count){
      cout<<"���\t����\t�Ա�\t����\t��ʱ"<<endl;
	  for(int i=0;i<count;i++)temp[i].getdata();
}

int main()
{ 
int count=1,i,choice;
teacher *t;labworker *l;admin *a;double_shoulder *d;
while(1)
{
cout<<" ����0.�˳�����"<<endl;
cout<<"1.�����ʦ����\n2.����ʵ��Ա����\n3.����������Ա����\n4.����˫������Ա����"<<endl;
cin>>choice;
switch(choice)
{
case 0:return 0;
case 1:cout<<"ȷ��������������:";
         cin>>count;
		 t=new teacher [count];
		 input_teacher(t,count);
         break;

case 2:  cout<<"ȷ��������������:";
         cin>>count;
		 l=new labworker[count];
         input_labworker(l,count);
		 break;

case 4:  cout<<"ȷ��������������:";
         cin>>count;
		 d=new double_shoulder[count];
         input_double_shoulder(d,count);
		 break;

default:cout<<"�����������������"<<endl;break;
}


switch(choice)
{
case 1:cout<<"��ʦ��Ϣ���£�"<<endl;cout<<"���\t����\t�Ա�\t����\tнˮ"<<endl;
	  for(i=0;i<count;i++)t[i].print();delete [] t;break;
case 2:cout<<"ʵ��Ա��Ϣ���£�"<<endl;cout<<"���\t����\t�Ա�\t����\tнˮ"<<endl;
	for(i=0;i<count;i++)l[i].print();delete [] l;break;
case 4:cout<<"˫������Ա��Ϣ���£�"<<endl;cout<<"���\t����\t�Ա�\t����\tнˮ"<<endl;
	   for(i=0;i<count;i++)d[i].print();delete [] d;break;
default:cout<<"error"<<endl;break;

}

}
return 0;
}
