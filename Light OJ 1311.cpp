#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        double v1,v2,v3,a1,a2,s1,s2,s,S,time; /// s1 for Train1;s2 for Train2;s for Train1 and Train2; S fro Bird
        cin>>v1>>v2>>v3>>a1>>a2;
        /// Calculation for Train
        s1 = (v1*v1)/(2*a1);
        s2 = (v2*v2)/(2*a2);
        s = s1 + s2;
        /// Calculation for Bird
        time = max((v1/a1),(v2/a2)); /// time for Bird
        S = v3*time;
        printf("Case %d: %lf %lf\n",i,s,S);
//        cout<<"Case "<<i<<": "<<s<<" "<<S<<endl;
    }
    return 0;
}
