#include <iostream>
#include<vector>

using namespace std;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
void spirallyTraverse(int matrix[][4], int r=4, int c=4)
    {
        // code here
       vector <int>v;
       //queue<int> q;
       //q.push()
       /*int vis[r][c]={0};
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
            vis[i][j]=0;
            */
        vector<vector<bool>> vis(r,vector<bool>(c,false));
       int row=0;
       int col=0;
       int di=0;

       for(int i=0;i<r*c;i++)
       {
           v.push_back(matrix[row][col]);
           vis[row][col]=1;
           cout<<matrix[row][col]<<" ";
           int c_row=row+dx[di];
           int c_col=col+dy[di];
           //cout<<c_row<<" "<<c_col<<" "<<vis[c_row][c_col]<<" ";
           if(0<=c_row&&c_row<r&&0<=c_col&&c_col<c&&!vis[c_row][c_col])
           {
               row=c_row;
               col=c_col;
           }
           else{
               di=(di+1)%4;
               row=row+dx[di];
               col=col+dy[di];
           }

           //cout<<row<<" "<<col<<"\n";

       }

    }
int main()
{
    //cout<<"Hello World";
    int matrix[4][4];
    int num=1;
    for(int i=0;i<4;i++)
     for(int j=0;j<4;j++)
     matrix[i][j]=num++;
    spirallyTraverse(matrix,4,4);
    return 0;
}
