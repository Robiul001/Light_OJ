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
        deque <int> deq;
        int n,m,tmp;
        string input;
        cin>>n>>m;
        while(m--)
        {
            cin>>input;
            if(input=="pushLeft")
            {
                cin>>tmp;
                if(deq.size()==n)
                    cout<<"The queue is full"<<endl;
                else
                {
                    deq.push_front(tmp);
                    cout<<"Pushed in left: "<<tmp<<endl;
                }
            }
            if(input=="pushRight")
            {
                cin>>tmp;
                if(deq.size()==n)
                    cout<<"The queue is full"<<endl;
                else
                {
                    deq.push_back(tmp);
                    cout<<"Pushed in right: "<<tmp<<endl;
                }
            }
            if(input=="popLeft")
            {
                if(deq.size()==0)
                    cout<<"The queue is empty"<<endl;
                else
                {
                    cout<<"Popped from left: "<<deq.front()<<endl;
                    deq.pop_front();
                }
            }
            if(input=="popRight")
            {
                if(deq.size()==0)
                    cout<<"The queue is empty"<<endl;
                else
                {
                    cout<<"Popped from right: "<<deq.back()<<endl;
                    deq.pop_back();
                }
            }
        }
    }
    return 0;
}
