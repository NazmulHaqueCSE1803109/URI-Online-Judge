#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5],i,c=0;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
    }
    cout<<c<<" "<<"valores pares"<<endl;
}
