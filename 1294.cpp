#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,caseno=0;
    cin>>t;
    while(t--)
    {
        long long int n,m,cnt;
        cin>>n>>m;
        cnt=(n*m)/2;
        cout<<"Case "<<++caseno<<": "<<cnt<<endl;
    }
    return 0;
}
