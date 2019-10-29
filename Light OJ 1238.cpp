#include<bits/stdc++.h>
using namespace std;

int fx[]={1,0,-1,0};
int fy[]={0,1,0,-1};

char adj[25][25];
int cost[25][25];
int m,n,ax,ay,bx,by,cx,cy,hx,hy;
const int infinity = 1000000000;

int BFS(int sx,int sy,int dx,int dy)
{
    int distance[25][25];
    for(int i=0;i<25;i++)
    {
        for(int j=0;j<25;j++)
        {
            distance[i][j]=infinity;
        }
    }

    queue<pair<int,int>>que;
    que.push(make_pair(sx,sy));
    distance[sx][sy]=0;

    while(!que.empty())
    {
        int x,y;
        x = que.front().first;
        y = que.front().second;
        que.pop();

        for(int i=0;i<4;i++)
        {
            int xx,yy;
            xx = x + fx[i];
            yy = y + fy[i];
            if(xx<1 || yy<1 || xx>m || yy>n || adj[xx][yy]=='#' || adj[xx][yy]=='m')
                continue;
            if(distance[xx][yy]>distance[x][y]+1)
            {
                distance[xx][yy]=distance[x][y]+1;
                que.push(make_pair(xx,yy));
            }
        }
    }
    return distance[dx][dy];
}

int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        char ch;
        cin>>m>>n;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>ch;
                adj[i][j]=ch;
                if(ch=='a')
                {
                    ax=i;
                    ay=j;
                }
                if(ch=='b')
                {
                    bx=i;
                    by=j;
                }
                if(ch=='c')
                {
                    cx=i;
                    cy=j;
                }
                if(ch=='h')
                {
                    hx=i;
                    hy=j;
                }
            }
        }
        int p,q,r,ans;
        p = BFS(ax,ay,hx,hy);
        q = BFS(bx,by,hx,hy);
        r = BFS(cx,cy,hx,hy);
        ans = max(p,max(q,r));
        //cout<<p<<" "<<q<<" "<<r<<endl;
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
