#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,tk100,tk50,tk20,tk10,tk5,tk2,tk1;
    cin>>N;
    if((N>0)&&(N<1000000))
    {
        cout<<N<<endl;

        while(N>0)
    {
        if((tk100=N/100)>0)
        {
          N=N%100;
          cout<<tk100<<" "<<"nota(s) de R$ 100,00"<<endl;
        }

        else
        {
            cout<<"0"<<" "<<"nota(s) de R$ 100,00"<<endl;
        }

        if((tk50=N/50)>0)
        {
            N=N%50;
           cout<<tk50<<" "<<"nota(s) de R$ 50,00"<<endl;
        }

        else
        {
            cout<<"0"<<" "<<"nota(s) de R$ 50,00"<<endl;
        }

         if((tk20=N/20)>0)
        {
           N=N%20;
           cout<<tk20<<" "<<"nota(s) de R$ 20,00"<<endl;
        }

        else
        {
            cout<<"0"<<" "<<"nota(s) de R$ 20,00"<<endl;
        }

        if((tk10=N/10)>0)
        {
           N=N%10;
           cout<<tk10<<" "<<"nota(s) de R$ 10,00"<<endl;
        }

        else
        {
            cout<<"0"<<" "<<"nota(s) de R$ 10,00"<<endl;
        }

        if((tk5=N/5)>0)
        {
           N=N%5;
           cout<<tk5<<" "<<"nota(s) de R$ 5,00"<<endl;
        }

        else
        {
            cout<<"0"<<" "<<"nota(s) de R$ 5,00"<<endl;
        }

        if((tk2=N/2)>0)
        {
            N=N%2;
           cout<<tk2<<" "<<"nota(s) de R$ 2,00"<<endl;
        }

        else
        {
            cout<<"0"<<" "<<"nota(s) de R$ 2,00"<<endl;
        }

        if((tk1=N/1)>0)
        {
            cout<<"1"<<" "<<"nota(s) de R$ 1,00"<<endl;
            break;
        }
        else
        {
            cout<<"0"<<" "<<"nota(s) de R$ 1,00"<<endl;
            break;
        }
    }

    }

    else
    {
        cout<<"please enter the amount of money again: ";
        cin>>N;
    }

}
