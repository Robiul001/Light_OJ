#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,caseno=0;
    double r,result;
    cin>>t;
    while(t--)
    {
        cin>>r;
        result=((2*r)*(2*r))-(acos(-1)*r*r);
        printf("Case %d: %.2lf\n",++caseno,result);
    }
    return 0;
}
