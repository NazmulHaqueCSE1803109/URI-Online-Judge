#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,X,i;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        cin>>X;
        if(X>0)
        {
            if(X%2==0)
            {
                cout<<"EVEN POSITIVE"<<endl;
            }
            else
            {
                cout<<"ODD POSITIVE"<<endl;
            }
        }
        else if(X<0)
        {
            if(X%2==0)
            {
                cout<<"EVEN NEGATIVE"<<endl;
            }
            else
            {
                cout<<"ODD NEGATIVE"<<endl;
            }
        }
        else
        {
            cout<<"NULL"<<endl;
        }
    }
}
