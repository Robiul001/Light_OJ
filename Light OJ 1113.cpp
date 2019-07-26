#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt","r",stdin);
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        string a,tmp;
        stack<string>stk1;
        stack<string>stk2;
        stk1.push("http://www.lightoj.com/");
        while(cin>>a)
        {
            if(a=="QUIT")
            {
                break;
            }
            if(a=="VISIT")
            {
                cin>>tmp;
                cout<<tmp<<endl;
                stk1.push(tmp);
                if(!stk2.empty())
                {
                    while(!stk2.empty())
                        stk2.pop();
                }
            }
            else
            {
                if(a=="BACK")
                {
                    stk2.push(stk1.top());
                    stk1.pop();
                    if(!stk1.empty())
                    {
                        cout<<stk1.top()<<endl;
                    }
                    else
                    {
                            cout<<"Ignored"<<endl;
                            stk1.push(stk2.top());
                            stk2.pop();
                    }
                }
                else if(a=="FORWARD")
                {
                    if(!stk2.empty())
                    {
                        cout<<stk2.top()<<endl;
                        stk1.push(stk2.top());
                        stk2.pop();
                    }
                    else
                    {
                        cout<<"Ignored"<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
