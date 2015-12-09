#include <iostream>
#include <strstream>
using namespace std;
 int main() {
	 char c,*p; 
	 char str1[]="ChengDu University 1978",str2[50];
	 istrstream s_in(str1); //建立输入串流对象s_in并与字符数组str1关联
	 int len=strlen(str1),i,j=0;
	 p=str1;
	 while(*p){if((*p)=='\040')j++;p++;}//计算空格数
	// cout<<"len="<<len<<"  j="<<j<<endl;
	 for(i=0;i<len-j;i++){ 
	   s_in>>c; //从字符数组中读入字符，不含空格，赋值给字符变量c
	   str2[len-j-1-i]=c;
	   cout<<c; //输出不含空格的str1
	 }
	 str2[len]='\0';
	 cout<<endl; 
    ostrstream s_out(str1,sizeof(str1));//建立输出串流对象s_out并与字符数组str1关联
    for(i=0;i<len-j;i++){ 
	   s_out<<str2[i]; //从字符数组str2中读入字符，存放在字符数组str1中
	   }
	s_out<<ends;//字符串结束符
	cout<<"逆序:"<<str1<<endl;
 return 0;
 }
