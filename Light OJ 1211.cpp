#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int T;
    cin>>T;
    for(int j=1;j<=T;j++)
    {
        long long int n,x1[102],y1[102],z1[102],x2[102],y2[102],z2[102],x,y,z,volume;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>x1[i]>>y1[i]>>z1[i]>>x2[i]>>y2[i]>>z2[i];

        sort(x1,x1+n);
        sort(y1,y1+n);
        sort(z1,z1+n);
        sort(x2,x2+n);
        sort(y2,y2+n);
        sort(z2,z2+n);
        x = x2[0] - x1[n-1];
        y = y2[0] - y1[n-1];
        z = z2[0] - z1[n-1];
        volume = x*y*z;
        if(volume <0)
        {
            volume =0;
        }
        printf("Case %d: %ld\n",j,volume);
    }
    return 0;
}
