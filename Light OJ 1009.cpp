#include<bits/stdc++.h>
using namespace std;

#define FastRead        ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
const int white = 0;   /// Consider it as a not visited = white
const int Black = 1;   /// Consider it as a vampire = Black
const int Red = 2;     /// Consider it as a lykan = Red

int ans,vampire,lykan;
vector <int> adj[20005];
int color[20005];

void adj_clear()
{
    for(int i=0;i<20005;i++)
        adj[i].clear();
}

void BFS(int src)
{
    queue<int>que;
    color[src]=Black; /// Consider it as a vampire = Black
    vampire++;
    que.push(src);

    while(!que.empty())
    {
        int parent = que.front();
        que.pop();

        int sz = adj[parent].size();
        for(int i=0;i<sz;i++)
        {
            int child = adj[parent][i];
            if(color[child]==white)
            {
                que.push(child);

                if(color[parent]==Black)
                {
                    lykan++;
                    color[child]=Red;
                }
                else
                {
                    vampire++;
                    color[child]=Black;
                }
            }
        }
    }
}

int main()
{
    //freopen("in.txt","r",stdin);

    FastRead;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        adj_clear();
        memset(color,0,sizeof(color));

        int n;
        cin>>n;
        while(n--)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        ans = 0;
        vampire=0;
        lykan=0;

        for(int i=0;i<=20002;i++)
        {
            if(!adj[i].empty() && color[i]==white)
            {
                vampire = 0;
                lykan = 0;
                BFS(i);
                ans += max(vampire,lykan);
            }
        }

        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}
