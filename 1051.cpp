#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float tk;
    double t1,t2,t3,t;
    cin>>tk;
               if((tk>0.00)&&(tk<=2000.00))
           {
               cout<<"Isento"<<endl;
           }
           if(tk>=2000.01)
           {
                      tk=tk-2000.01;
       if((tk>0.00)&&(tk<=1000.00))
       {
           t=(tk*8)/100;
           std::cout<<std::fixed;
           std::cout<<setprecision(2)<<"R$"<<" "<<t<<endl;
       }
        if(tk>1000)
       {
           t1=(1000.00*8)/100;
           tk=tk-1000.00;
           if((tk>0.00)&&(tk<=1500.00))
           {
               t2=(tk*18)/100;
           }
           if(tk>1500)
           {
              t2=(1500.00*18)/100;
              tk=(tk-1500.00);
              if(tk>0)
              {
                  t3=(tk*28)/100;
              }

           }
           t=(t1+t2+t3);
             std::cout<<std::fixed;
             std::cout<<setprecision(2)<<"R$"<<" "<<t<<endl;
       }
           }
return 0;
}
