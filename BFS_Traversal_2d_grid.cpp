//BFS Traversal in a 2d grid

#include <iostream>
#include <vector>
#include <queue> 
using namespace std;
int arr[100][100],dist[100][100],vis[100][100];
int n,m;
int dx[8]={-1,-1,0,1,1,1,0,-1};
int dy[8]={0,1,1,1,0,-1,-1,-1};
bool isValid(int x,int y)
{
    if(x<0||x>n-1||y<0||y>m-1) return false;
    if(vis[x][y]==1) return false;
    
    return true;
}
void bfs(int srcX,int srcY)
{
    vis[srcX][srcY]=1;
    queue<pair<int,int>> q;
    int curX=srcX;
    int curY=srcY;
    q.push({curX,curY});
    dist[curX][curY]=0;
    vis[curX][curY]=1;
    int count=0;
    arr[srcX][srcY]=count;
    while(!q.empty())
    {
        curX=q.front().first;
        curY=q.front().second;
        q.pop();
        
        for(int i=0;i<8;i++)
        {
            int newX=curX+dx[i];
            int newY=curY+dy[i];
            if(isValid(newX,newY)==true)
            {
                count++;
                arr[newX][newY]=count;
                vis[newX][newY]=1;
                dist[newX][newY]=dist[curX][curY]+1;
                q.push({newX,newY});
            }
        }
        
    }
}
int main()
{
    
    cin>>n>>m;
 
    bfs(3,0);
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<m;j++)
     {
         cout<<dist[i][j]<<" ";
     }
     cout<<"\n";
    } 
   cout<<endl;
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<m;j++)
     {
         cout<<arr[i][j]<<" ";
     }
     cout<<"\n";
    }
   
}