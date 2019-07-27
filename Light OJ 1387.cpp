#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        long long int n,sum=0,amount;
        string operation;
        cin>>n;
        cout<<"Case "<<i<<":"<<endl;
        while(n--)
        {
            cin>>operation;
            if(operation=="donate")
            {
                cin>>amount;
                sum+=amount;
            }
            if(operation=="report")
            {
                cout<<sum<<endl;
            }
        }
    }
    return 0;
}
