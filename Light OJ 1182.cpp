#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int cnt=0;
        cin>>n;
        while(n!=0)
        {
            if(n%2==1)
                cnt++;
            n/=2;
        }
        if(cnt%2==0)
            cout<<"Case "<<i<<": even"<<endl;
        else
            cout<<"Case "<<i<<": odd"<<endl;
    }
    return 0;
}
