#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
  int pc1,pc2,pu1,pu2;
  float pp1,pp2,paid;
  cin>>pc1>>pu1>>pp1;
  cin>>pc2>>pu2>>pp2;
  paid=(pu1*pp1)+(pu2*pp2);
  std::cout<<std::fixed;
  std::cout<<std::setprecision(2)<<"VALOR A PAGAR:"<<" "<<"R$"<<" "<<paid<<endl;
  return 0;

}
