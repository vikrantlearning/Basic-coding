//Kosaraju algorithm for strongly connected components
//step1:traverse the graph and store the elements in an array(order here) in increasing order of there out time
//step2:make visit of all elements again zero
//step3:Reverse traverse order graph using dfs and store elements in scc(strongly connected component)
//step4:Print it and empty scc to store next scc
#include <iostream>
#include <vector>
using namespace std;
vector<int> ar[100],tr[100],order,scc;
int n,m,vis[100]={0};
void dfs(int src)
{
    vis[src]=1;
    for(int child:ar[src])
    {
        if(vis[child]==0)
        {
            dfs(child); 
        }
    }
    order.push_back(src);
}
void dfs1(int src)
{
    vis[src]=1;
    for(int child:tr[src])
    {
        if(vis[child]==0)
        {
            dfs1(child); 
        }
    }
    scc.push_back(src);
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        ar[a].push_back(b);
        tr[b].push_back(a);
    }
    dfs(1);
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
         dfs(i);
    }
    for(int i=1;i<=n;i++)
    {
    vis[i]=0;
    cout<<order[i-1]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(vis[order[n-1-i]]==0)
        {
        scc.clear();
        dfs1(order[n-1-i]);
        cout<<"Strongly connected component for root node "<<order[n-1-i]<<endl;
        for(int child:scc)
         cout<<child<<" ";
         
        cout<<endl;
        }
    }
    
    return 0;
}
