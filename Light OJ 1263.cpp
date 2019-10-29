#include<bits/stdc++.h>
using namespace std;

vector<int>adj[1005];
bool visited[1005];
int arr[1005];
vector<int>ans;

int BFS(int source)
{
    int cnt,c;
    cnt=arr[source];
    c=1;
    visited[source]=true;
    queue<int>que;
    que.push(source);
    while(!que.empty())
    {
        int parent = que.front();
        que.pop();
        for(int i=0;i<adj[parent].size();i++)
        {
            int child=adj[parent][i];
            if(visited[child]==false)
            {
                visited[child]=true;
                que.push(child);
                cnt += arr[child];
                c++;
            }
        }
    }
    return (cnt/c);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("in.txt","r",stdin);

    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        int n,m,sum=0;
        cin>>n>>m;
        /// clear Section
        for(int i=1;i<=n;i++)
        {
            adj[i].clear();
            visited[i]=false;
            arr[i]=0;
        }
        ans.clear();
        /// end Clear Section
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        for(int i=1;i<=m;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        if(sum%n!=0)
        {
            cout<<"Case "<<j<<": No"<<endl;
            continue;
        }
        for(int i=1;i<=n;i++)
        {
            if(visited[i]==false)
            {
                int tmp = BFS(i);
                ans.push_back(tmp);
            }
        }
        bool flag=true;
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i]!=ans[i+1])
            {
                cout<<"Case "<<j<<": No"<<endl;
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"Case "<<j<<": Yes"<<endl;

        /// clear Section close
    }
    return 0;
}
