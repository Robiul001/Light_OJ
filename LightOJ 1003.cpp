#include<bits/stdc++.h>
using namespace std;

map <string,int> stoii;
bool flag;
vector <int> adj[100005];
int visited[100005];

void DFS(int src)
{
      visited[src]=1;
      for(int i=0;i<adj[src].size();i++)
      {
            int child=adj[src][i];
            if(!visited[child])
                  DFS(child);
            if(visited[child]==1)
            {
                  flag=true;
                  return;
            }
      }
      visited[src]=2;
}

int main()
{
      int t,n;
      scanf("%d",&t);
      for(int cs=1;cs<=t;cs++)
      {
            scanf("%d",&n);
            stoii.clear();
            int cnt=0;
            while(n--)
            {
                  string str1,str2;
                  cin>>str1>>str2;
                  if(!stoii[str1])stoii[str1]=++cnt;
                  if(!stoii[str2])stoii[str2]=++cnt;
                  adj[stoii[str1]].push_back(stoii[str2]);
            }

            for(int i=1;i<=cnt;i++)
                  visited[i]=0;

            flag=false;

            for(int i=1;i<cnt;i++)
            {
                  if(!visited[i])
                        DFS(i);
                  if(flag)
                        break;
            }
           if(flag)
                  printf("Case %d: No\n",cs);
           else
                  printf("Case %d: Yes\n",cs);
           for(int i=1;i<=cnt;i++) adj[i].clear();
      }
      return 0;
}

