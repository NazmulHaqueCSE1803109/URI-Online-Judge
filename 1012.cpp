#include<bits/stdc++.h>
#define PI 3.14159
#include<iomanip>
using namespace std;
int main()
{
  double A,B,C;
  double TRI,CIR,TRA,QUA,RET;
  cin>>A>>B>>C;
  TRI=0.5*A*C;
  CIR=PI*(C*C);
  TRA=0.5*(A+B)*C;
  QUA=B*B;
  RET=A*B;
  std::cout<<std::fixed;
  std::cout<<std::setprecision(3)<<"TRIANGULO"<<":"<<" "<<TRI<<endl<<"CIRCULO"<<":"<<" "<<CIR<<endl<<"TRAPEZIO"<<":"<<" "<<TRA<<endl<<"QUADRADO"<<":"<<" "<<QUA<<endl<<"RETANGULO"<<":"<<" "<<RET<<endl;
  return 0;
}
