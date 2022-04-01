#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    double p;
    cin>>a>>b;
    if(a==1)
    {
        p=4.00*b;
        std::cout<<std::fixed;
        std::cout<<std::setprecision(2)<<"Total:"<<" "<<"R$"<<" "<<p<<endl;
    }
    if(a==2)
    {
        p=4.50*b;
        std::cout<<std::fixed;
        std::cout<<std::setprecision(2)<<"Total:"<<" "<<"R$"<<" "<<p<<endl;
    }
    if(a==3)
    {
        p=5.00*b;
        std::cout<<std::fixed;
        std::cout<<std::setprecision(2)<<"Total:"<<" "<<"R$"<<" "<<p<<endl;
    }
    if(a==4)
    {
        p=2.00*b;
        std::cout<<std::fixed;
        std::cout<<std::setprecision(2)<<"Total:"<<" "<<"R$"<<" "<<p<<endl;
    }
    if(a==5)
    {
        p=1.50*b;
        std::cout<<std::fixed;
        std::cout<<std::setprecision(2)<<"Total:"<<" "<<"R$"<<" "<<p<<endl;
    }
    return 0;
}
