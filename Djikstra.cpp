//Djikstra

#include <iostream>
#include <vector>
#include <queue>
#define INF 100000

using namespace std;
vector <pair<int,int>> arr[100];
vector <int> dist(100,INF);
int n,m;
void djikstra(int src)
{
    //priority_queue<pair<int,int>,vector <pair<int,int>>,greater<pair<int,int>>> q;
    queue<pair<int,int>> q;
    q.push({1,0});
    dist[src]=0;
    while(!q.empty())
    {
        //int curr=q.top().first;
        int curr=q.front().first;
        //int curr_d=q.top().second;
        int curr_d=q.front().second;
        q.pop();
        for(pair<int,int> edge:arr[curr])
        {
            if(curr_d+edge.second<dist[edge.first])
            {
            dist[edge.first]=curr_d+edge.second;
            q.push({edge.first,dist[edge.first]});
            }
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<dist[i]<<" ";
    }
}
int main()
{
    //cout<<"Hello World";
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        arr[a].push_back({b,c});
        arr[b].push_back({a,c});
    }
    djikstra(1);
    return 0;
}
