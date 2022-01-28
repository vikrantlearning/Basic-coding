 //Perimeter of island
 void dfs(int mat[MAX][MAX], int x,int y,int n, int m,int &count)
    {
        if(x<0||y<0||x>=n||y>=m||mat[x][y]==0)
        {   count++;
        return;
        }
         if(mat[x][y]==-1)
             return;
        mat[x][y]=-1;
        
        dfs(mat,x,y-1,n,m,count);
        dfs(mat,x-1,y,n,m,count);
        dfs(mat,x,y+1,n,m,count);
        dfs(mat,x+1,y,n,m,count); 
        
    }
int findPerimeter(int mat[MAX][MAX], int n, int m)
{
    //Your code here
       int count=0;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(mat[i][j]==1)
                   dfs(mat,i,j,n,m,count);
           }
       }
        return count;
}