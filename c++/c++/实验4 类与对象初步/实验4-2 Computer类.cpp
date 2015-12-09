#include<iostream>

using namespace std;
enum CPU_Rank {P1,P2,P3,P4,P5,P6,P7};
class CPU
{
private:
   CPU_Rank rank;
   int frequency;
   float voltage;
public:
   CPU(CPU_Rank r,int f,float v)//构造函数
   {
    rank=r;
    frequency=f;
    voltage=v;
    cout<<"构造了一个CPU！"<<endl;
   }
  ~CPU(){cout<<"析构了一个CPU!"<<endl;}//析构函数
  CPU_Rank GetRank() const{return rank;}
  int GetFrequency() const {return frequency;}
  float GetVoltage() const {return voltage;}

  void SetRank(CPU_Rank r){rank=r;}
  void SetFrequency(int f){frequency=f;}
  void SetVoltage(float v){voltage=v;}

  void Run(){cout<<"CPU开始运行！"<<endl;}
  void Stop(){cout<<"CPU停止运行！"<<endl;}
};

class RAM
{
private:
 int ram;//容量，单位 Mbit
public:
 RAM(int r)
 {  ram=r; cout<<"构造了一个ram!"<<endl;}
 RAM(){  ram=0;cout<<"构造了一个ram!"<<endl;}
 ~RAM(){cout<<"析构了一个ram!"<<endl;}
  void run()
 {cout<<"ram开始运行！"<<endl;}
 void stop()
 {cout<<"ram停止运行！"<<endl;}
};
class CDRAM
{
private:
 int cdram;
public:
 CDRAM(int c)
 {   cdram=c;
  cout<<"构造了一个cdram!"<<endl;}
 CDRAM(){  cout<<"构造了一个cdram!"<<endl;}
 ~CDRAM(){cout<<"析构了一个cdram!"<<endl;}

 void run()
 {cout<<"cdram开始运行"<<endl;}
 void stop()
 {cout<<"cdram停止运行"<<endl;}
};
class computer
{private:
CPU cpu;
RAM ram;
CDRAM cdram;
public:
 computer(CPU c,RAM r,CDRAM cd);
 computer();
 ~computer(){cout<<"析构了一个computer"<<endl;}
 computer(computer &p);
  void run()
 {cout<<"computer开始运行"<<endl;}
 void stop()
 {cout<<"computer停止运行"<<endl;}
};
computer::computer():cpu(P6,100,float(1.3)),ram(20),cdram(30)
{cout<<"构造了一个 computer0000"<<endl;}
computer::computer(CPU c,RAM r,CDRAM cd):cpu(c),ram(r),cdram(cd)
{cout<<"构造了一个computer1111"<<endl;}
computer::computer(computer &p): cpu(p.cpu),ram(p.ram),cdram(p.cdram)
{      cout<<"调用了复制构造函数"<<endl;}

int main()
{
 CPU m(P6,300,float(2.8));//利用构造函数初始化CPU对象m
 RAM n(1);//利用构造函数初始化内存对象n
 CDRAM q(2);//利用构造函数初始化光驱对象q
 computer com1;//创建计算机对象com1
 //利用构造函数创建并初始化计算机对象com2
 computer com2(m,n,q);
//利用复制构造函数，以计算机对象com1为蓝本，复制出计算机对象com3
 computer com3(com1);
 return 0;
}

   
