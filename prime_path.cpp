
#include <iostream>
#include <vector>
#include <queue> 
using namespace std;
vector<int> arr[1000],prime;
int vis[1000]={0},dist[1000]={-1};
bool isValid(int a,int b)
{
    int cnt=0;
    while(a>0)
    {
        if(a%10!=b%10)
         cnt++;
        
        a=a/10;
        b=b/10;
        
    }
    if(cnt=1) return true;
    else return false;
}
bool isPrime(int val)
{
    for(int i=2;i*i<=val;i++)
    {
        if(val%i==0)
          return false;
    }
    return true;
}
void generateGraph(int start,int end)
{
    for(int i=1000;i<=9999;i++)
     if(isPrime(i))
     prime.push_back(i);
     
    for(int i=0;i<prime.size();i++)
     for(int j=i+1;j<prime.size();j++)
     {
         int a=prime[i];
         int b=prime[j];
         if(isValid(a,b))
         {
             arr[i].push_back(j);
         }
     }
}
void bfs(int src)
{
    vis[src]=1;
    dist[src]=0;
    queue<int>q;
    q.push(src);
    while(!q.empty())
    {
        int top=q.front();
        q.pop();
        for(int i=0;i<arr[top].size();i++)
        {
            int child=arr[top][i];
            if(!vis[child])
            {
                vis[child]=1;
                dist[child]=dist[top]+1;
                q.push(child);
            }
        }
    }
}
int main()
{
    int n,m,a,b;
    cout<<"enter the two numbers"<<"\n";
    cin>>n>>m;
    generateGraph(n,m);
    
    
    bfs(n);
    if(dist[m]==-1) cout<<"Impossible";
    else cout<<dist[m];
    return 0;
}
