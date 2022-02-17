//Rotten Oranges
int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                q.push({i,j});
            }
        }
        //We are pushing (-1,-1) in the queue everytime
        q.push({-1,-1});
        
        while(!q.empty())
        {
          int x=q.front().first;
          int y=q.front().second;
          //cout<<"x->"<<x<<" "<<"y->"<<y<<"\n";
          if(x==-1 and y==-1 and q.size()==1)
           break;
          else if(x==-1 and y==-1 and q.size()>1)
          {
              q.pop();
              count++;
              q.push({-1,-1});
          }
          else
          {
              if((x-1)>=0 and grid[x-1][y]==1)
              {
                  grid[x-1][y]=2;
                  q.push({x-1,y});
                  //cout<<x-1<<" "<<y<<"\n";
              }
              if(x>=0 and (x+1)<n and grid[x+1][y]==1)
              {
                  grid[x+1][y]=2;
                  q.push({x+1,y});
                   //cout<<x+1<<" "<<y<<"\n";
              }
              if((y-1)>=0 and grid[x][y-1]==1)
              {
                  grid[x][y-1]=2;
                  q.push({x,y-1});
                  //cout<<x<<" "<<y-1<<"\n";
              }
              if((y+1)<m and grid[x][y+1]==1)
              {
                  grid[x][y+1]=2;
                  q.push({x,y+1});
                  //cout<<x<<" "<<y+1<<"\n";
              }
            q.pop();
          }
       
         
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                return -1;
            }
        }
        return count;
    }
};