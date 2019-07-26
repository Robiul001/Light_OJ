#include<bits/stdc++.h>
using namespace std;

long long divisble_cnt(long long n)
{
    long long cnt;
    cnt = (n/3)*2;
    if(n%3==2)
        cnt++;
    return cnt;

}

int main()
{
    long long T,a,b,ans;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>a>>b;
        ans = divisble_cnt(b) - divisble_cnt(a-1);
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
