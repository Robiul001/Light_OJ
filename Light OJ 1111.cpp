#include<bits/stdc++.h>
using namespace std;

int arr[105];
vector <int> adj[10004];
int visited[1002];
queue <int> que;
int check[10004];

void BFS(int src)
{
      que.push(src);
      visited[src]++;
      check[src]=1;
      while(!que.empty())
      {
            int parent=que.front();
            que.pop();
            for(int i=0;i<adj[parent].size();i++)
            {
                  int child=adj[parent][i];
                  if(check[child]==0)
                  {
                        que.push(child);
                        visited[child]++;
                        check[child]=1;
                  }
            }
      }
}


int main()
{
      int t,k,n,m;
      cin>>t;
      for(int cs=1;cs<=t;cs++)
      {
            while(!que.empty())que.pop();
            for(int i=0;i<102;i++)
                  arr[i]=0;
            for(int i=0;i<1002;i++)
                  visited[i]=0;
            for(int i=0;i<10002;i++)
                  adj[i].clear();


            cin>>k>>n>>m;
            for(int i=0;i<k;i++)
                  cin>>arr[i];
            while(m--)
            {
                  int u,v;
                  cin>>u>>v;
                  adj[u].push_back(v);
            }
            //cout<<"Robiul"<<endl;
            for(int i=0;i<k;i++)
            {
                  for(int i=0;i<10002;i++)
                        check[i]=0;
                  BFS(arr[i]);
            }
            int cnt=0;
            for(int i=1;i<=n;i++)
                  if(visited[i]==k)
                        cnt++;
            cout<<"Case "<<cs<<": "<<cnt<<endl;
      }
      return 0;
}
