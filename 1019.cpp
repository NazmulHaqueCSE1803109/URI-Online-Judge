#include<bits/stdc++.h>
using namespace std;
int h,m,s;
int th,tm,ts;
int o;
int main()
{
    int N;
    cin>>N;

   if(N>0)
   {
       if((h=N/3600)>0)
       {
           cout<<h<<":";
           N=N%3600;
       }
       else
       {
           cout<<"0"<<":";
       }

      if((m=N/60)>0)
       {
           cout<<m<<":";
           N=N%60;
       }
       else
       {
          cout<<"0"<<":";
       }
       if(N>0)
       {
           cout<<N<<endl;
       }
       else
       {
           cout<<"0"<<endl;
       }

   }
}
