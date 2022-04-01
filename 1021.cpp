#include<bits/stdc++.h>
using namespace std;
int main()
{
    double tk;
    int t100,t50,t20,t10,t5,t2,t1,tp50,tp25,tp10,tp5,tp1,ttp;
    cin>>tk;
    if(tk>=0&&tk<=1000000.00)
    {
    ttp=tk*100;
    t100=ttp/10000;
    ttp=ttp%10000;
    t50=ttp/5000;
    ttp=ttp%5000;
    t20=ttp/2000;
    ttp=ttp%2000;
    t10=ttp/1000;
    ttp=ttp%1000;
    t5=ttp/500;
    ttp=ttp%500;
    t2=ttp/200;
    ttp=ttp%200;
    t1=ttp/100;
    ttp=ttp%100;
    tp50=ttp/50;
    ttp=ttp%50;
    tp25=ttp/25;
    ttp=ttp%25;
    tp10=ttp/10;
    ttp=ttp%10;
    tp5=ttp/5;
    ttp=ttp%5;
    tp1=ttp/1;
    cout<<"NOTAS:"<<endl;
    cout<<t100<<" "<<"nota(s) de R$ 100.00"<<endl;
    cout<<t50<<" "<<"nota(s) de R$ 50.00"<<endl;
    cout<<t20<<" "<<"nota(s) de R$ 20.00"<<endl;
    cout<<t10<<" "<<"nota(s) de R$ 10.00"<<endl;
    cout<<t5<<" "<<"nota(s) de R$ 5.00"<<endl;
    cout<<t2<<" "<<"nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;
    cout<<t1<<" "<<"moeda(s) de R$ 1.00"<<endl;
    cout<<tp50<<" "<<"moeda(s) de R$ 0.50"<<endl;
    cout<<tp25<<" "<<"moeda(s) de R$ 0.25"<<endl;
    cout<<tp10<<" "<<"moeda(s) de R$ 0.10"<<endl;
    cout<<tp5<<" "<<"moeda(s) de R$ 0.05"<<endl;
    cout<<tp1<<" "<<"moeda(s) de R$ 0.01"<<endl;
    }
    return 0;

}
