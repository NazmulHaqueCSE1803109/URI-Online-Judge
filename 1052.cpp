#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>0&&n<=12)
    {
      if(n==1)
    {
        cout<<"January"<<endl;
    }
    else if(n==2)
    {
        cout<<"February"<<endl;
    }
    else if(n==3)
    {
        cout<<"March"<<endl;
    }
    else if(n==4)
    {
        cout<<"April"<<endl;
    }
    else if(n==5)
    {
        cout<<"May"<<endl;
    }
    else if(n==6)
    {
        cout<<"June"<<endl;
    }
    else if(n==7)
    {
        cout<<"July"<<endl;
    }
    else if(n==8)
    {
        cout<<"August"<<endl;
    }
    else if(n==9)
    {
        cout<<"September"<<endl;
    }
    else if(n==10)
    {
        cout<<"October"<<endl;
    }
    else if(n==11)
    {
        cout<<"November"<<endl;
    }
    else
    {
        cout<<"December"<<endl;
    }

    }
    else
    {
        cout<<"please enter a number again: ";
    }

    return 0;
}
