#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        if(n<=10)
        {
            cout<<"0 "<<n<<endl;
        }
        else
        {
            cout<<"10 "<<n-10<<endl;
        }
    }
    return 0;
}
