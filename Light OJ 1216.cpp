#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        double r1,r2,h,p,R,v;
        cin>>r1>>r2>>h>>p;
        R = r2 + ((r1-r2)*p)/h; /// radius over the water
        v = (1/3.0)*PI*p*((R*R)+(R*r2)+(r2*r2)); /// Volume of Circular truncated cone
        printf("Case %d: %.6lf\n",i,v);
//        cout<<"Case "<<i<<": "<<setprecision(12)<<v<<endl;
    }
    return 0;
}
