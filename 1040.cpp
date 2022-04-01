#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,d,avg1,avg2,e;
    cin>>a>>b>>c>>d;
    avg1=((a*2)+(b*3)+(c*4)+(d*1))/10;
    std::cout<<std::fixed;
    std::cout<<std::setprecision(1)<<"Media:"<<" "<<avg1<<endl;
    if(avg1>=7.0)
    {
        cout<<"Aluno aprovado." <<endl;
    }
    else if(avg1<5.0)
    {
        cout<<"Aluno reprovado."<<endl;
    }
    else
    {
        cout<<"Aluno em exame." <<endl;
        cin>>e;
        avg2=(avg1+e)/2;
        cout<<"Nota do exame:"<<" "<<e<<endl;
        if(avg2>=5.0)
    {
        cout<<"Aluno aprovado."<<endl;
    }
    else
    {
        cout<<"Aluno reprovado."<<endl;
    }
    std::cout<<std::fixed;
    std::cout<<std::setprecision(1)<<"Media final:"<<" "<<avg2<<endl;
    }
    return 0;
}
