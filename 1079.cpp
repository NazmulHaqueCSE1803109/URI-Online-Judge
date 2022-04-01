#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,sum,avg;
    int i,N;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>a>>b>>c;
        sum=(a*2.0)+(b*3.0)+(c*5.0);
        avg=sum/10.0;
        std::cout<<std::fixed;
        std::cout<<std::setprecision(1)<<avg<<endl;
    }
    return 0;
}
