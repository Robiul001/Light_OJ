#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double a,b,c,d,h,e,s,area,tarea;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>d;
        e=abs(a-c);
        s=(b+d+e)/2;
        area=sqrt(s*(s-b)*(s-d)*(s-e));
        h=(2*area)/e;
        tarea=((a+c)*h)/2;
        printf("Case %d: %lf\n",i,tarea);
    }
    return 0;
}
