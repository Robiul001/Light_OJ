#include<bits/stdc++.h>
using namespace std;

int tc,q,n,i,l,r;
double Area(double a,double b,double c)
{
  double s;
  s=(a+b+c)/2.0;
  return (sqrt(s*(s-a)*(s-b)*(s-c)));
}

int main()
{
   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cerr.tie(NULL);

	double tmp,ab,ac,bc,Ratio,area_abc,area_ade,area_bdec,lb,ub,ad,de,ae,mid;
   cin>>tc;


  for(int j=1;j<=tc;j++)
  {
     cin>>ab>>ac>>bc>>Ratio;
     lb=1;ub=ab;
     area_abc=Area(ab,ac,bc); ///Total area of the triangle.

     while(fabs(ub-lb)>0.000001)
     {
       mid=(lb+ub)/2.0;  /// mid is ad,that we assume
       ae=(ac*mid)/ab;
       de=(mid*bc)/ab;

       area_ade=Area(mid,ae,de);  ///area of triangle ade
       area_bdec=area_abc-area_ade;   ///triangle of bdec
       tmp=area_ade/area_bdec;

        if(tmp==Ratio ) break;

        else if(tmp>Ratio) ub=mid;

        else lb=mid;
     }
     cout<<"Case "<<j<<": "<<fixed<<setprecision(8)<<mid<<endl;

  }


  return 0;
}
