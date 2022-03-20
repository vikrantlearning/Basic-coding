#include<bits/stdc++.h>>
using namespace std;

void func(int n)
{
    queue<int>q;

    q.push(n);
    q.push(-1);
    int lev=0;
    while(!q.empty())
    {
        int curr=q.front();
        if(curr==-1 && q.size()==1)
            break;
        if(curr==-1 && q.size()!=1)
        {
            lev++;
            q.pop();
            continue;
        }
        else{
                int t=q.size();
                for(int i=0;i<t-1;i++)
                {
                    int cr=q.front();
                    //cout<<cr<<"\n";
                    for(int j=2;j<=cr/2;j++)
                    {
                        if(cr%j==0)
                            q.push(j);
                    }
                    q.pop();
                }
                q.push(-1);
        }
    }
    cout<<lev;
}
int main()
{

 int n;
 cin>>n;
 func(n);
}
