#include<bits/stdc++.h>
using namespace std;

class edge{
public:
      int vert,cost;
      edge(int v=0,int cst=0)
      {
            vert=v;
            cost=cst;
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

bool operator < (node a,node b)
{
      return a.costt > b.costt;
}

vector <edge> adj[505];
vector <int> dist(505,8000005);
bool visited [505];
priority_queue <node> pq;

void Dijkstra(int src)
{
      dist[src] = 0;
      pq.push(node(src,0));
      while(!pq.empty())
      {
            node v = pq.top();
            pq.pop();
            if(visited[v.att]==true){continue;}
            visited[v.att]=true;
            dist[v.att] = v.costt;
            //cout<<dist[v.att]<<" "<<v.att<<endl;
            int sizz=adj[v.att].size();
            for(int i=0;i<sizz;i++)
            {
                  edge e = adj[v.att][i];
                  if(visited[e.vert]==true){continue;}
                  if(dist[e.vert] > max(e.cost,dist[v.att]))
                  {
                        pq.push(node(e.vert,max(e.cost,dist[v.att])));
                  }
            }
      }
}


int main()
{
      //freopen("in.txt","r",stdin);
      int test;
      scanf("%d",&test);
      for(int cs=1;cs<=test;cs++)
      {
            for(int j=0;j<505;j++)
                  adj[j].clear();
            for(int j=0;j<505;j++)
                  dist[j]=8000005;
            for(int j=0;j<505;j++)
                  visited[j]=false;
            while(!pq.empty()){pq.pop();}

            int n,m;
            scanf("%d%d",&n,&m);
            for(int i=0;i<m;i++)
            {
                  int u,v,w;
                  scanf("%d%d%d",&u,&v,&w);
                  adj[u].push_back(edge(v,w));
                  adj[v].push_back(edge(u,w));
            }
            int t;
            scanf("%d",&t);
            Dijkstra(t);
            printf("Case %d:\n",cs);
            for(int i=0;i<n;i++)
            {
                  if(dist[i]==8000005)
                        printf("Impossible\n");
                  else
                        printf("%d\n",dist[i]);
            }
      }
      return 0;
}
