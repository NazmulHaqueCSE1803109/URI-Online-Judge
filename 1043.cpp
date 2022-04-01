#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float A,B,C;
    double area,perimeter;
    cin>>A>>B>>C;
    if(((A+B)>C)&&((B+C)>A)&&((A+C)>B))
    {
        perimeter=A+B+C;
        std::cout<<std::fixed;
        std::cout<<std::setprecision(1)<<"Perimetro"<<" "<<"="<<" "<<perimeter<<endl;
    }
    else
    {
        area=0.5*(A+B)*C;
        std::cout<<std::fixed;
        std::cout<<std::setprecision(1)<<"Area"<<" "<<"="<<" "<<area<<endl;
    }
    return 0;
}
