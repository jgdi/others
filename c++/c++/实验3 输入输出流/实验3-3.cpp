#include <iostream>
#include <strstream>
using namespace std;
 int main() {
	 char c,*p; 
	 char str1[]="ChengDu University 1978",str2[50];
	 istrstream s_in(str1); //�������봮������s_in�����ַ�����str1����
	 int len=strlen(str1),i,j=0;
	 p=str1;
	 while(*p){if((*p)=='\040')j++;p++;}//����ո���
	// cout<<"len="<<len<<"  j="<<j<<endl;
	 for(i=0;i<len-j;i++){ 
	   s_in>>c; //���ַ������ж����ַ��������ո񣬸�ֵ���ַ�����c
	   str2[len-j-1-i]=c;
	   cout<<c; //��������ո��str1
	 }
	 str2[len]='\0';
	 cout<<endl; 
    ostrstream s_out(str1,sizeof(str1));//���������������s_out�����ַ�����str1����
    for(i=0;i<len-j;i++){ 
	   s_out<<str2[i]; //���ַ�����str2�ж����ַ���������ַ�����str1��
	   }
	s_out<<ends;//�ַ���������
	cout<<"����:"<<str1<<endl;
 return 0;
 }
