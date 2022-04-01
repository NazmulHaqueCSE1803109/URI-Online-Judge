#include<iostream>
using namespace std;
int main()
{
    float a[6];
    int i,c=0;
    for(i=0;i<6;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<6;i++)
    {
        if(a[i]>0)
        {
            c++;
        }
    }
    cout<<c<<" "<<"valores positivos"<<endl;

}
