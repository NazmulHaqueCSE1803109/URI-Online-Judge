#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    float A,B,C,R1,R2;
    cin>>A>>B>>C;
    float x=(B*B)-(4*A*C);
    if(x<0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else if(A==0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else
    {
        R1=(-B+sqrt(x))/(2*A);
        R2=(-B-sqrt(x))/(2*A);
        std::cout<<std::fixed;
        std::cout<<std::setprecision(5)<<"R1"<<" "<<"="<<" "<<R1<<endl;
        std::cout<<std::setprecision(5)<<"R2"<<" "<<"="<<" "<<R2<<endl;
    }
    return 0;
}

