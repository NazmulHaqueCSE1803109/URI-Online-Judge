#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            int x=pow(i,2);
            cout<<i<<"^"<<"2"<<" "<<"="<<" "<<x<<endl;
        }
    }
   return 0;
}
