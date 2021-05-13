#include <iostream>
#include <vector>
using namespace std;
vector <int>arr[10001];
int vis[10001],cc[10001];
int conn_c;
void dfs(int src)
{
    vis[src]=1;
    cc[src]=conn_c;
    int cur=src;
    for(int i=0;i<arr[cur].size();i++)
    {
        int child=arr[cur][i];
        if(vis[child]==0)
         dfs(child);
    }
}
int main()
{
    int n,m,a,b,x;
    string op;
    cin>>n>>m;
    vector <pair<int,int>> edge;
    for(int i=0;i<m;i++)
    {
        cin>>a>>op>>b;
        //cout<<"Loop"<<i<<"\n";
        if(op=="=")
        {
            arr[a].push_back(b),arr[b].push_back(a);
           // cout<<"Inside If\n";
        }
        else{
            edge.push_back({a,b});
           // cout<<"inside else\n";
        }
    }
    dfs(1);
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
            {
              conn_c++;
              dfs(i);
              cout<<arr[i][j]<<",";
            }
      //cout<<i<<"->";
      /*for(int j=0;j<arr[i].size();j++)
        {
            if(vis[i]==0)
            {
              conn_c++;
              dfs(i);
              cout<<arr[i][j]<<",";
            }
            else
            {
              cout<<arr[i][j]<<",";
            }
        }*/
      //cout<<"\n";
    }
    bool flag;
    for(int i=0;i<edge.size();i++)
    {
        int g=edge[i].first;
        int h=edge[i].second;
        
        if(cc[g]==cc[h])
        { 
            flag=false;
            break;
        }
    }
    if(!flag)
     cout<<flag<<" No";
    else
     cout<<flag<<" Yes";
 
    return 0;
}
