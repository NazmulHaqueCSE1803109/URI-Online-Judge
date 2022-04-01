#include<iostream>
using namespace std;
int main()
{
    int X,Y,sum=0,i;
    cin>>X>>Y;
    if(X>Y)
    {
        for(i=(Y+1);i<X;i++)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
        cout<<sum<<endl;
    }
    if(X<Y)
    {
       for(i=(X+1);i<Y;i++)
        {
            if(i%2!=0)
            {
                sum=sum+i;
            }
        }
        cout<<sum<<endl;
    }
    if(X==Y)
    {
        cout<<sum<<endl;
    }
}
