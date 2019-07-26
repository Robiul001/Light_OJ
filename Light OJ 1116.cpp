#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        long long int w,n,m;
        cin>>w;
        cout<<"Case "<<i<<": ";
        if(w%2==1)
        {
            cout<<"Impossible"<<endl;
        }
        else
        {
            for(m=2;m<=1000000;m+=2)
            {
                n = w/m;
                if(w%m ==0 && m%2==0 && n%2==1)
                {
                    cout<<n<<" "<<m<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
