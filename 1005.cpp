#include<bits/stdc++.h>
using namespace std;
int main()
{
    float A,B,MEDIA,sum;
    cin>>A;
    cin>>B;
    A=A*3.5;
    B=B*7.5;
    sum=A+B;
    MEDIA=sum/11;
    std::cout<<std::fixed;
    std::cout<<std::setprecision(5)<<"MEDIA"<<" "<<"="<<" "<<MEDIA<<endl;
    return 0;
}
