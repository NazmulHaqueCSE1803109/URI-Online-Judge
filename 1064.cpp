#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c=0;
    float a[6],sum=0,avg;
    for(i=0;i<6;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<6;i++)
    {
        if(a[i]>0)
        {
            c++;
            sum=sum+a[i];
        }
    }
    avg=sum/c;
    cout<<c<<" "<<"valores positivos"<<endl;
    std::cout<<std::fixed;
    std::cout<<std::setprecision(1)<<avg<<endl;
    return 0;
}
