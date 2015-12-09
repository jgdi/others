#include<iomanip>
#include<fstream>
#include<iostream>
using namespace std;
int main(void){
//将输出结果存放至文件中，文件名为123.dat
	ofstream outfile("123.dat",ios::out);
	if(!outfile){cerr<<"open error!"<<endl;exit(1);}
{int a=1,b=2,i;
 i=--a||++b,a+b;
 cout<<"a="<<a<<" b="<<b<<"  i="<<i<<endl;
 outfile<<"实验1，混合运算："<<endl;
 outfile<<"a="<<a<<" b="<<b<<" i="<<i<<endl;
  a=1;b=2;
 i=a--||(++b,a+b); 
 cout<<"a="<<a<<" b="<<b<<"  i="<<i<<endl;
 outfile<<"a="<<a<<" b="<<b<<" i="<<i<<endl;
 a=1;b=2;
 i=--a||(++b,a+b);
 cout<<"a="<<a<<" b="<<b<<"  i="<<i<<endl;
 outfile<<"a="<<a<<" b="<<b<<" i="<<i<<endl;
 a=1;b=2;
 i=((--a||++b),a+b); 
 cout<<"a="<<a<<" b="<<b<<"  i="<<i<<endl;
 outfile<<"a="<<a<<" b="<<b<<" i="<<i<<endl;
}

//整形、字符型间的相互赋值	

{char c;  short a; unsigned short u_a;
 c=128;  a=c; u_a=c; 
  outfile<<"实验1，整形、字符型间的相互赋值："<<endl;
 cout<<"c="<<c<<"  a="<<a<<"  u_a="<<u_a<<endl;
 outfile<<"c="<<c<<"  a="<<a<<"  u_a="<<u_a<<endl;
 c=0501;  a=c; u_a=c;
 cout<<"c="<<c<<"  a="<<a<<"  u_a="<<u_a<<endl;
 outfile<<"c="<<c<<"  a="<<a<<"  u_a="<<u_a<<endl;
}
//浮点型数据的赋值及精度
{int i;short j;char k;long l;float m;double n;
  n=50000.222233334447;
  i=n;j=n;k=n;l=n;m=n;
  outfile<<"实验1，浮点型数据的赋值及精度："<<endl;
  printf("n=%.12f\n",n);
  cout<<i<<"   "<<j<<"   "<<k<<"   "<<l<<"   "
	  <<setprecision(12)<<m<<"   "<<n<<endl;
  outfile<<"i="<<i<<"   j="<<j<<"   k="<<k<<"   l="
	  <<l<<"   m="<<setprecision(12)<<m<<"   n="<<n<<endl;
  	}
outfile.close();
return 0;
}