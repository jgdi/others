#include<iostream>
#include<string>
using namespace std;

class Date  //����������
{
private:
int year,month,day;
public:
	Date(){}//�޲ι��캯��
	Date(int,int,int);//���������캯��
    void setday(){cin>>year>>month>>day;}
	void display(){cout<<"���������ǣ�"<<year<<"-"<<month<<"-"<<day;}
	 
};
//�������캯��
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
	cout<<"¼�����ݣ�"<<endl;
	cout<<"��ţ�";cin>>number;
	cout<<"�Ա�";cin>>sex;
	cout<<"���֤��:";cin>>id;id[18]='\0';
	cout<<endl;cout<<"����:";birthday.setday();}
 void coutall(){cout<<"��ţ�"<<number<<"  �Ա�:"
	             <<sex<<"   ���֤�ţ�"<<id;
                birthday.display();cout<<endl;}
  
 int Peopele(const People &);//���ƹ��캯������
 ~People(){}
};
//�������ƹ��캯������
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
 People why2(why1);//���ø��ƣ����������캯�������Ƴ�һ������why2
 why2.coutall();
 
 return 0;
}