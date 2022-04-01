#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,a[1000],k;
    for(i=0;i<100;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<100;i++)
    {
      if(a[0]<a[i])
      {
          a[0]=a[i];
          k=(i+1);
      }
    }
    cout<<a[0]<<endl<<k<<endl;
}
