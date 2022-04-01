#include<bits/stdc++.h>
#include<iomanip>
#define PI 3.14159
using namespace std;
int main()
{
  double R,Volume;
  cin>>R;
  Volume=(4/3.0)*PI*(R*R*R);
  std::cout<<std::fixed;
  std::cout<<std::setprecision(3)<<"VOLUME"<<" "<<"="<<" "<<Volume<<endl;
  return 0;
}
