#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        char ch;
        int n,m,x,y,z;
        int arr[105]={0};
        cin>>n>>m;
        for(int j=0;j<n;j++)
            cin>>arr[j];
        while(m--)
        {
            cin>>ch;
            if(ch=='S')
            {
                cin>>x;
                for(int j=0;j<n;j++)
                    arr[j]+=x;
            }
            if(ch=='M')
            {
                cin>>x;
                for(int j=0;j<n;j++)
                    arr[j]*=x;
            }
            if(ch=='D')
            {
                cin>>x;
                for(int j=0;j<n;j++)
                    arr[j]/=x;
            }
            if(ch=='R')
            {
                reverse(arr,arr+n);
            }
            if(ch=='P')
            {
                cin>>y>>z;
                swap(arr[y],arr[z]);
            }
        }
        cout<<"Case "<<i<<":"<<endl;
        for(int j=0;j<n-1;j++)
            cout<<arr[j]<<" ";
        cout<<arr[n-1]<<endl;
//        cout<<endl;
    }
    return 0;
}
