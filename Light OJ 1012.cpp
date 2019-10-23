#include<bits/stdc++.h>
using namespace std;

int fx[]={0,-1,0,1};
int fy[]={1,0,-1,0};

string str[25];
int w,h,ans;


void DFS(int x,int y)
{
    ans++;
    str[x][y]='#';
    for(int i=0;i<4;i++)
    {
        int a = x + fx[i];
        int b = y + fy[i];
        if(a<0 || b<0 || a>=h || b>=w || str[a][b]=='#')
            continue;
        DFS(a,b);
    }
}

int main()
{
    int t,cas=0;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>w>>h;
        for(int i=0;i<h;i++)
            cin>>str[i];

        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                if(str[i][j]=='@')
                {
                    DFS(i,j);
                    i=h+1;
                }
            }
        }
        cout<<"Case "<<++cas<<": "<<ans<<endl;
    }
    return 0;
}
