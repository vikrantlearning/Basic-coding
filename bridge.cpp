
#include <iostream>
#include <vector>
using namespace std;
int timer=0;
vector <int> arr[1001];
int vis[1001]={0},in[1001]={0},low[1001];
void dfs(int node,int par)
{
    vis[node]=1;
    in[node]=low[node]=timer;
    timer++;
    for(int child:arr[node])
    {
        if(child==par)
         continue;
        if(vis[child]==1)
        { 
            //if edge is a back edge
            low[node]=min(in[child],low[node]);
        }
        else
        {
            // edge is a forward edge and hence maybe a condition for bridge
            dfs(child,node);
            
            low[node]=min(low[node],low[child]);
            if(low[child]>in[node])//If edge is a bridge then this conditon
            cout<<"Bridge "<<node<<"-> "<<child<<"\n";
        }
    }
}
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    dfs(1,0);

    return 0;
}
