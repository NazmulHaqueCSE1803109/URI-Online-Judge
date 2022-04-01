#include<iostream>
using namespace std;
int main()
{
    int st,et,h1,h2,h;
    cin>>st>>et;
    if(((st,et)>=0)&&((st,et)<=24)&&(et>=st))
    {
        h=et-st;
    }

    if(((st,et)>=0)&&((st,et)<=24)&&(st>=et))
    {
        h1=(24-st);
        h2=(et-0);
        h=h1+h2;
    }

    if(((st,et)>=0)&&((st,et)<=24)&&(st==et))
    {
        h=(24-(st-et));
    }

    cout<<"O JOGO DUROU"<<" "<<h<<" "<<"HORA(S)"<<endl;
    return 0;
}
