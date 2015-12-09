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
   CPU(CPU_Rank r,int f,float v)//���캯��
   {
    rank=r;
    frequency=f;
    voltage=v;
    cout<<"������һ��CPU��"<<endl;
   }
  ~CPU(){cout<<"������һ��CPU!"<<endl;}//��������
  CPU_Rank GetRank() const{return rank;}
  int GetFrequency() const {return frequency;}
  float GetVoltage() const {return voltage;}

  void SetRank(CPU_Rank r){rank=r;}
  void SetFrequency(int f){frequency=f;}
  void SetVoltage(float v){voltage=v;}

  void Run(){cout<<"CPU��ʼ���У�"<<endl;}
  void Stop(){cout<<"CPUֹͣ���У�"<<endl;}
};

class RAM
{
private:
 int ram;//��������λ Mbit
public:
 RAM(int r)
 {  ram=r; cout<<"������һ��ram!"<<endl;}
 RAM(){  ram=0;cout<<"������һ��ram!"<<endl;}
 ~RAM(){cout<<"������һ��ram!"<<endl;}
  void run()
 {cout<<"ram��ʼ���У�"<<endl;}
 void stop()
 {cout<<"ramֹͣ���У�"<<endl;}
};
class CDRAM
{
private:
 int cdram;
public:
 CDRAM(int c)
 {   cdram=c;
  cout<<"������һ��cdram!"<<endl;}
 CDRAM(){  cout<<"������һ��cdram!"<<endl;}
 ~CDRAM(){cout<<"������һ��cdram!"<<endl;}

 void run()
 {cout<<"cdram��ʼ����"<<endl;}
 void stop()
 {cout<<"cdramֹͣ����"<<endl;}
};
class computer
{private:
CPU cpu;
RAM ram;
CDRAM cdram;
public:
 computer(CPU c,RAM r,CDRAM cd);
 computer();
 ~computer(){cout<<"������һ��computer"<<endl;}
 computer(computer &p);
  void run()
 {cout<<"computer��ʼ����"<<endl;}
 void stop()
 {cout<<"computerֹͣ����"<<endl;}
};
computer::computer():cpu(P6,100,float(1.3)),ram(20),cdram(30)
{cout<<"������һ�� computer0000"<<endl;}
computer::computer(CPU c,RAM r,CDRAM cd):cpu(c),ram(r),cdram(cd)
{cout<<"������һ��computer1111"<<endl;}
computer::computer(computer &p): cpu(p.cpu),ram(p.ram),cdram(p.cdram)
{      cout<<"�����˸��ƹ��캯��"<<endl;}

int main()
{
 CPU m(P6,300,float(2.8));//���ù��캯����ʼ��CPU����m
 RAM n(1);//���ù��캯����ʼ���ڴ����n
 CDRAM q(2);//���ù��캯����ʼ����������q
 computer com1;//�������������com1
 //���ù��캯����������ʼ�����������com2
 computer com2(m,n,q);
//���ø��ƹ��캯�����Լ��������com1Ϊ���������Ƴ����������com3
 computer com3(com1);
 return 0;
}

   
