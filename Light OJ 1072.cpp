#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        double R,n,r,angle;
        cin>>R>>n;
        angle = PI/n;
        r = (R*sin(angle))/(1+sin(angle));
        cout<<"Case "<<i<<": "<<setprecision(10)<<r<<endl;
    }
    return 0;
}
