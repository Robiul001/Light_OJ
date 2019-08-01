#include<bits/stdc++.h>
using namespace std;
int main()
{
    /// Input - Output Faster
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        string str;
        long long int b,len,n=0,start;
        cin>>str;
        cin>>b;
        len = str.size();
        if(str[0]=='-')
            start = 1;
        else
            start = 0;

        if(b<0)
            b = b*(-1);

        for(int j=start;j<len;j++)
        {
            n = (n*10) + (str[j]-'0');
            n = n % b;
        }
        if(n==0)
            cout<<"Case "<<i<<": divisible"<<endl;
        else
            cout<<"Case "<<i<<": not divisible"<<endl;
    }
    return 0;
}
