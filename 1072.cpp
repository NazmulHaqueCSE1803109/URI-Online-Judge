#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,X,i,c1=0,c2=0;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>X;
        if(X>=10&&X<=20)
        {
           c1++;
        }
        else
        {
            c2++;
        }
    }
    cout<<c1<<" "<<"in"<<endl;
    cout<<c2<<" "<<"out"<<endl;
}
