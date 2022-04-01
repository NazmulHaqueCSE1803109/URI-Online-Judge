#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,y=0,m=0,d=0;
    cin>>n;
    y=n/365;
    n=n%365;
    m=n/30;
    d=n%30;
    cout<<y<<" "<<"ano(s)"<<endl<<m<<" "<<"mes(es)"<<endl<<d<<" "<<"dia(s)"<<endl;
    return 0;
}
