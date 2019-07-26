#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i=1;
    cin>>T;
    while(T--)
    {
        long long int s,srt,tmp,row=0,col=0;
        cin>>s;
        srt = ceil(sqrt(s));
        tmp = (srt*srt)-s;
        if(tmp<srt)
        {
            row=tmp+1;
            col=srt;
        }
        else
        {
            row=srt;
            col=s-((srt-1)*(srt-1));
        }
        if(srt%2==0)
            swap(row,col);

        cout<<"Case "<<i<<": "<<row<<" "<<col<<endl;
        i++;
    }
    return 0;
}
