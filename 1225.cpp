#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,num,caseno=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&num);
        n=num;
        long long int temp,reve=0;
        while(n!=0)
        {
            temp=n%10;
            reve=reve*10+temp;
            n/=10;
        }

        if(num==reve)
            printf("Case %lld: Yes\n",++caseno);
        else
            printf("Case %lld: No\n",++caseno);
    }
    return 0;
}
