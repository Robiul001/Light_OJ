#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        double Ox,Oy,Ax,Ay,Bx,By,angle,dist,radius,arc_dist;
        cin>>Ox>>Oy>>Ax>>Ay>>Bx>>By;
        dist = sqrt((Ax-Bx)*(Ax-Bx) + (Ay-By)*(Ay-By));
        radius = sqrt((Ox-Bx)*(Ox-Bx) + (Oy-By)*(Oy-By));  /// radius = sqrt((Ox-Ax)*(Ox-Ax) + (Oy-Ay)*(Oy-Ay)) also be right
        angle = acos(((2*radius*radius)-(dist*dist))/(2*radius*radius));
        arc_dist = radius * angle;
///        cout<<"Case "<<i<<": "<<arc_dist<<endl;   /// if this line use, then Wrong Answer
        printf("Case %d: %lf\n",i,arc_dist);
    }
    return 0;
}
