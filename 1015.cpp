#include<bits/stdc++.h>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    double x1,y1,x2,y2,d;
    cin>>x1>>y1;
    cin>>x2>>y2;
    d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    std::cout<<std::fixed;
    std::cout<<std::setprecision(4)<<d<<endl;
    return 0;
}
