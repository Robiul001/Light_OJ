#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    long long int a,b,c,mx;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>a>>b>>c;
        mx=max(a,max(b,c));
        cout<<"Case "<<i<<": ";
        if(mx==a)
        {
            if((a*a) == (b*b)+(c*c))
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
        else if(mx==b)
        {
            if((b*b) == (a*a)+(c*c))
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
        else
        {
            if((c*c) == (b*b)+(a*a))
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
    }
    return 0;
}
