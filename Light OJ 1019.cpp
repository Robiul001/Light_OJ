#include<bits/stdc++.h>
using namespace std;

class edge{
public:
      int vert,cost;
      edge(int v=0,int c=0)
      {
            vert = v;
            cost = c;
      }
};

class node{
public:
      int att,costt;
      node(int a=0,int c=0)
      {
            att=a;
            costt=c;
      }
};

bool operator <(node a,node b)
{
      return a.costt < b.costt;
}

vector <edge> adj[101];
vector <int> dist(102, 100005);
priority_queue <node> pq;

void Dijkstra(int src)
{
      dist[src]=0;
      pq.push(node(src,0));
      while(!pq.empty())
      {
            node v = pq.top();
            pq.pop();
            dist[v.att] = v.costt;
            for(int i=0;i<adj[v.att].size();i++)
            {
                  edge e = adj[v.att][i];
                  if(dist[e.vert]>dist[v.att] + e.cost)
                        pq.push(node(e.vert,dist[v.att] + e.cost));
            }
      }
}

int main()
{
      int test;
      cin>>test;
      for(int cs=1;cs<=test;cs++)
      {
            for(int j=0;j<101;j++)
                  adj[j].clear();
            for(int j=0;j<102;j++)
                  dist[j]=100005;
            //dist.clear();
            while(!pq.empty()){pq.pop();}
            int n,m;
            cin>>n>>m;
            for(int i=0;i<m;i++)
            {
                  int u,v,cst;
                  cin>>u>>v>>cst;
                  adj[u].push_back(edge(v,cst));
                  adj[v].push_back(edge(u,cst));
            }
            Dijkstra(1);
            if(dist[n]<100005)
                  cout<<"Case "<<cs<<": "<<dist[n]<<endl;
            else
                  cout<<"Case "<<cs<<": Impossible"<<endl;
      }
      return 0;
}
