#include<bits/stdc++.h>
using namespace std;

int test,n,q;
int arr[100005];
int tree[400005];

int build(int node,int L,int R)
{
      if(L==R)
      {
            tree[node]=arr[L];
            return arr[L];
      }
      int x = build((2*node),L,((L+R)/2));
      int y = build((2*node+1),(((L+R)/2)+1),R);
      //tree[node]=tree[2*node]+tree[2*node+1];
      tree[node]=min(x,y);
      return tree[node];
}

int query(int node,int L,int R,int l,int r)
{
      if(R<l || r<L)
            return INT_MAX;
      if(L>=l && R<=r)
            return tree[node];
      int a=query((2*node),L,(L+R)/2,l,r);
      int b=query((2*node+1),((L+R)/2)+1,R,l,r);
      return min(a,b);
}

int main()
{
      scanf("%d",&test);
      for(int t=1;t<=test;t++)
      {
            memset(tree,0,sizeof(tree));
            memset(arr,0,sizeof(arr));

            scanf("%d%d",&n,&q);
            for(int i=1;i<=n;i++)
                  scanf("%d",&arr[i]);

            build(1,1,n);

            printf("Case %d:\n",t);
            for(int i=0;i<q;i++)
            {
                  int l,r;
                  scanf("%d%d",&l,&r);
                  int ans=query(1,1,n,l,r);
                  printf("%d\n",ans);
            }
      }
      return 0;
}
