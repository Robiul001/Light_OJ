#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    double R1,R2,R3,a,b,c,s,triangle_area,theta1,theta2,theta3,area1,area2,area3,J;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>R1>>R2>>R3;
        a = R1+R2;
        b = R2+R3;
        c = R1+R3;
        s = (a+b+c)/2.0;
        triangle_area = sqrt(s*(s-a)*(s-b)*(s-c));

        theta1 = acos((a*a+c*c-b*b)/(2.0*a*c));
        theta2 = acos((a*a+b*b-c*c)/(2.0*a*b));
        theta3 = acos((b*b+c*c-a*a)/(2.0*b*c));

        area1 = (R1*R1*theta1)/2.0;
        area2 = (R2*R2*theta2)/2.0;
        area3 = (R3*R3*theta3)/2.0;

        J = triangle_area - (area1+area2+area3);
        printf("Case %d: %lf\n",i,J);
//        cout<<"Case "<<i<<": "<<J<<endl;
    }
    return 0;
}
