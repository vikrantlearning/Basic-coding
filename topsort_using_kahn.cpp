#include <iostream>
#include <vector>
#include <queue>
//#include <algorithm> 
using namespace std;
vector<int> arr[1000],top;
int in[1000]={0},count=0;
void kahn(int n)
{
    //priority_queue<int, vector<int>, greater<int> > q;
    queue<int> q;
    for(int i=1;i<=n;i++)
    {
        if(in[i]==0)
        q.push(i);
    }
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        top.push_back(cur);
        count++;
        for(int child:arr[cur])
        {
            in[child]--;
            if(in[child]==0)
            q.push(child);
        }
    }
   // return count;
}
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
      cin>>a>>b;
      arr[a].push_back(b);
      in[b]++;
    }
    /*for(int i=1;i<=n;i++)
    {
        arr[i].sort();
    }*/
    kahn(n);
    for(int i=0;i<top.size();i++)
    {
        cout<<top[i]<<" ";
    }
    return 0;
}
