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
 cout<<"请输入学号:"<<endl;
 cin.clear();	// 重置 cin 输入状态
 cin.sync();	// 清除 cin 缓冲区未读取信息
 cin.getline(stud1.number,12,'\n');
 
 cout<<"请输入性别:"<<endl;
 cin.clear();	
 cin.sync();
 cin.get(stud1.sex);
 
 
 cout<<"请输入名字:"<<endl;
 cin.clear();	
 cin.sync();	
 getline(stud1.name,19,'\n');

 cout<<"请输入年龄:"<<endl;
 cin.clear();	
 cin.sync();
 cin>>stud1.age;	
 
 cout<<"请输入班级 :"<<endl;
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