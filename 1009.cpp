#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char n[100];
    double s,sm;
    double ts;
    cin>>n;
    cin>>s>>sm;
    ts=s+(sm*0.15);
    std::cout<<std::fixed;
    std::cout<<std::setprecision(2)<<"TOTAL"<<" "<<"="<<" "<<"R$"<<" "<<ts<<endl;
    return 0;
}
