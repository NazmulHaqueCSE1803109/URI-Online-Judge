#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t;
    double A,B,C,x[3];
    cin>>A>>B>>C;
    x[0]=A;
    x[1]=B;
    x[2]=C;
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(x[i]<x[j])
            {
                t=x[i];
                x[i]=x[j];
                x[j]=t;
            }
        }
    }
    A=x[0],B=x[1];C=x[2];
    while(1)
    {
       if(A>=(B+C))
    {
        cout<<"NAO FORMA TRIANGULO"<<endl;
        break;
    }
    if((A*A)==((B*B)+(C*C)))
    {
        cout<<"TRIANGULO RETANGULO"<<endl;
        break;
    }
    if((A*A)>((B*B)+(C*C)))
    {
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
    if((A*A)<((B*B)+(C*C)))
    {
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    if((A==B)&&(B==C)&&(A==C))
    {
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    if(((A==B)&&((A!=C)||B!=C))||((A==C)&&((A!=B)||(A!=C)))||((B==C)&&((A!=B)||(C!=A))))
    {
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
    break;
    }

    return 0;
}
