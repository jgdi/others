#include<iomanip>
#include<iostream>
#include<string>
using namespace std;
struct stud{
	char number[13];
	char sex;
	char name[20];
	unsigned short age;
	char class_number;
}stud1;
int main(void){
//
 cout<<"������ѧ��:"<<endl;
 cin.clear();	// ���� cin ����״̬
 cin.sync();	// ��� cin ������δ��ȡ��Ϣ
 cin.getline(stud1.number,12,'\n');
 
 cout<<"�������Ա�:"<<endl;
 cin.clear();	
 cin.sync();
 cin.get(stud1.sex);
 
 
 cout<<"����������:"<<endl;
 cin.clear();	
 cin.sync();	
 getline(stud1.name,19,'\n');

 cout<<"����������:"<<endl;
 cin.clear();	
 cin.sync();
 cin>>stud1.age;	
 
 cout<<"������༶ :"<<endl;
 cin.clear();
 cin.sync();
 stud1.class_number=getchar();
 cout.width(16);
 cout<<setiosflags(ios::left)
	 <<stud1.name;cout.width(16);
  cout<<stud1.number;cout.width(16);
   cout<<stud1.sex;cout.width(16);
	cout<<stud1.class_number;cout.width(16);
	cout<<stud1.age<<endl;
return 0;
}