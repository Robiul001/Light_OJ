#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        long long int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,tmp1,tmp2,area;
        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
        Dx = Ax + Cx - Bx;
        Dy = Ay + Cy - By;
        tmp1 = (Ax*By) + (Bx*Cy) + (Cx*Dy) + (Dx*Ay);
        tmp2 = (Bx*Ay) + (Cx*By) + (Dx*Cy) + (Ax*Dy);
        area = (tmp1-tmp2)/2;
        cout<<"Case "<<i<<": "<<Dx<<" "<<Dy<<" "<<abs(area)<<endl;
    }
    return 0;
}
