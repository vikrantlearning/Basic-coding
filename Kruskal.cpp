#include <iostream>
#include <vector>
using namespace std;
class edge{
    public:
    int a,b,w;
}
int par[1000];
int find(int x)
{
    if(par[x]==-1) return x;
    else
    find(par[x]);
}
void merge(int x,int y)
{
    par[x]=y;
}
void sort(edge e[],int m)
{
    for(int i=0;i<m;i++)
    for(int j=i+1;j<m;j++)
    if(e[i].w>e[j].w)
    swap(e[i],e[j]);
    
}

int main()
{
    //cout<<"Hello World";
    int n,m,a,b,sum=0,x,y,z;
    cin>>n>>m;
   edge arr[m];
    for(int i=0;i<m;i++)
    {

        cin>>x>>y>>z;
        arr[i].a=x;
        arr[i].b=y;
        arr[i].w=z;
    }
    for(int i=0;i<m;i++)
    par[i]=-1;
    sort(arr,m);
    for(int i=0;i<m;i++)
    {
        int a=find(arr[i].a);
        int b=find(arr[i].b);
        if(a!=b)
        {
            merge(a,b);
            sum=sum+arr[i].w;
            cout<<sum<<"\n";
        }
    }
    cout<<sum;
    return 0;
}
