#include<bits/stdc++.h>
using namespace std;
int main()
{
    float A,B,C,MEDIA,sum;
    cin>>A;
    cin>>B;
    cin>>C;
    A=A*2;
    B=B*3;
    C=C*5;
    sum=A+B+C;
    MEDIA=sum/10;
    std::cout<<std::fixed;
    std::cout<<std::setprecision(1)<<"MEDIA"<<" "<<"="<<" "<<MEDIA<<endl;
    return 0;
}

