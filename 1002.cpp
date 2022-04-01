#include<iostream>
#include<math.h>
#include<iomanip>
#define pi 3.14159

using namespace std;
int main()
{
    double R,A;
    cin>>R;
    A=pi*pow(R,2);
    std::cout << std::fixed;
    std::cout<<std::setprecision(4)<<"A"<<"="<<A<< '\n';

    return 0;
}
