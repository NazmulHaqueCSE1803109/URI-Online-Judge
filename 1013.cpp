#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t;
    cin>>a>>b>>c;
    t=((a+b)+abs(a-b))/2;
    t=((t+c)+abs(t-c))/2;
    cout<<t<<" "<<"eh o maior"<<endl;
    return 0;
}
