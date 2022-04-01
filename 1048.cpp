#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    float s;
    double ns;
    cin>>s;
    if((s>0.00)&&(s<=400.00))
    {
      ns=(s+(s*0.15));
      std::cout<<std::fixed;
      std::cout<<std::setprecision(2)<<"Novo salario:"<<" "<<ns<<endl;
      std::cout<<std::setprecision(2)<<"Reajuste ganho:"<<" "<<(s*0.15)<<endl;
      cout<<"Em percentual:"<<" "<<"15"<<" "<<"%"<<endl;
    }

    if((s>400.00)&&(s<=800.00))
    {
      ns=(s+(s*0.12));
      std::cout<<std::fixed;
      std::cout<<std::setprecision(2)<<"Novo salario:"<<" "<<ns<<endl;
      std::cout<<std::setprecision(2)<<"Reajuste ganho:"<<" "<<(s*0.12)<<endl;
      cout<<"Em percentual:"<<" "<<"12"<<" "<<"%"<<endl;
    }

    if((s>800.00)&&(s<=1200.00))
    {
      ns=(s+(s*0.10));
      std::cout<<std::fixed;
      std::cout<<std::setprecision(2)<<"Novo salario:"<<" "<<ns<<endl;
      std::cout<<std::setprecision(2)<<"Reajuste ganho:"<<" "<<(s*0.10)<<endl;
      cout<<"Em percentual:"<<" "<<"10"<<" "<<"%"<<endl;
    }

    if((s>1200.00)&&(s<=2000.00))
    {
      ns=(s+(s*0.07));
      std::cout<<std::fixed;
      std::cout<<std::setprecision(2)<<"Novo salario:"<<" "<<ns<<endl;
      std::cout<<std::setprecision(2)<<"Reajuste ganho:"<<" "<<(s*0.07)<<endl;
      cout<<"Em percentual:"<<" "<<"7"<<" "<<"%"<<endl;
    }

    if(s>2000.00)
    {
      ns=(s+(s*0.04));
      std::cout<<std::fixed;
      std::cout<<std::setprecision(2)<<"Novo salario:"<<" "<<ns<<endl;
      std::cout<<std::setprecision(2)<<"Reajuste ganho:"<<" "<<(s*0.04)<<endl;
      cout<<"Em percentual:"<<" "<<"4"<<" "<<"%"<<endl;
    }
    return 0;
}
