#include<iostream>
using namespace std;
int main()
{
    int a[20],b[20],i,j,t,k=0;
    for(i=0;i<3;i++)
    {
        cin>>a[i];

    }
    for(i=0;i<3;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        cout<<b[i]<<endl;
    }
    cout<<endl;
    for(i=0;i<3;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
