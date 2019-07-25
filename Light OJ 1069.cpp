#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int T,a,b,ans; /// let, a = my position; b = lift position
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>a>>b;
        if(a<=b)
        {
            ans = (b*4)+19;
        }
        else
        {
            ans = (a*4)+19;
            ans += (a-b)*4;
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
