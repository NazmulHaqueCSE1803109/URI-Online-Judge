#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int X;
    float Y,s;
    cin>>X>>Y;
    s=X/Y;
    std::cout<<std::fixed;
    std::cout<<std::setprecision(3)<<s<<" "<<"km/l"<<endl;
    return 0;
}
