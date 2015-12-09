#include<iostream>
#include<fstream>
#include<string>
#define N 2
using namespace std;
class Student{
private:
string name;
float score[N];
public:
	Student(string na="未命名",float s1=0,float s2=0)
	{name=na;score[0]=s1;score[1]=s2;}
	void show(){cout<<"姓名："<<name<<"  ";
	for(int i=0;i<N;i++)cout<<score[i]<<"  ";
	}
//	void setname(string na){name=}
	float getscore(int choice){if(choice==0)return score[0];else return score[1];}
//	void show(string na,float w){cout<<"姓名："<<name<<"  "<<w;}
};

int main()
{
  Student s_max;
  int count_number(const char *s);//计算文本中存储的条目,从而得到班级人数，用n记录
  void input(Student p[],int n,const char *s);//从文件中输入数据到数组中的函数
  Student max(Student *p,int n,int cho);
 
  int n;
  char ss[30];
  cout<<"输入数据文件名称，若用默认文件名in_student.txt，请直接回车"<<endl;
  cin.getline(ss,100);
  if(strcmp(ss,"")==0)strcpy(ss,"in_student.txt"); 
  n=count_number(ss);
  cout<<"班级的人数是"<<n<<"人"<<endl;
   
  Student *S_s=new Student [n];
  input(S_s,n,ss);
  int choice;
  cout<<"求高数最高分，请按0，求英语最高分，请按1"<<endl;
  cin>>choice;
  s_max=max(S_s,n,choice);
  s_max.show();
   delete [] S_s;
  
	return 0;
}
int count_number(const char *s)
{
string str;
  int n=0;
  ifstream in_file(s,ios::in);
   if(!in_file)
   {
   cerr<<"open error!"<<endl;
   exit(1);  
   }
   
   while(!in_file.eof()){
	   //cout<<in_file.tellg()<<endl;
	   in_file>>str;n++;}
   
   n=n/(N+1);  //总条目除以3
   in_file.close();   
   return n;
}


void input(Student p[],int n,const char *s)
{
int i;string str;float a,b;
  
 //in_file.clear();//输入流清空
 //in_file.seekg(ios::beg);//重新定位到文件头部

 ifstream in_file(s,ios::in);
 if(!in_file)
   {
   cerr<<"open error!"<<endl;
   exit(1);  
   }
 for(i=0;i<n;i++){
	   in_file>>str; //cout<<in_file.tellg()<<endl;
	   in_file>>a;
	   in_file>>b;
	   Student *t=new Student(str,a,b);
       p[i]=*t;
	//   p[i].show();
	   delete t;
   }
    in_file.close();
 
   }
Student max(Student *p,int n,int cho)
{
Student t;
t=*p;
for(int i=0;i<n;i++,p++)
   if(t.getscore(cho)<p->getscore(cho))t=*p;
   return t;

}



