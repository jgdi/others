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
	Student(string na="δ����",float s1=0,float s2=0)
	{name=na;score[0]=s1;score[1]=s2;}
	void show(){cout<<"������"<<name<<"  ";
	for(int i=0;i<N;i++)cout<<score[i]<<"  ";
	}
//	void setname(string na){name=}
	float getscore(int choice){if(choice==0)return score[0];else return score[1];}
//	void show(string na,float w){cout<<"������"<<name<<"  "<<w;}
};

int main()
{
  Student s_max;
  int count_number(const char *s);//�����ı��д洢����Ŀ,�Ӷ��õ��༶��������n��¼
  void input(Student p[],int n,const char *s);//���ļ����������ݵ������еĺ���
  Student max(Student *p,int n,int cho);
 
  int n;
  char ss[30];
  cout<<"���������ļ����ƣ�����Ĭ���ļ���in_student.txt����ֱ�ӻس�"<<endl;
  cin.getline(ss,100);
  if(strcmp(ss,"")==0)strcpy(ss,"in_student.txt"); 
  n=count_number(ss);
  cout<<"�༶��������"<<n<<"��"<<endl;
   
  Student *S_s=new Student [n];
  input(S_s,n,ss);
  int choice;
  cout<<"�������߷֣��밴0����Ӣ����߷֣��밴1"<<endl;
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
   
   n=n/(N+1);  //����Ŀ����3
   in_file.close();   
   return n;
}


void input(Student p[],int n,const char *s)
{
int i;string str;float a,b;
  
 //in_file.clear();//���������
 //in_file.seekg(ios::beg);//���¶�λ���ļ�ͷ��

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



