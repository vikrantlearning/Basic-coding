//Walls coloring problem 2
//we keep handy least and second_least cost till each house
//And go forward in current house with adding least till previous

https://www.youtube.com/watch?v=jGywRalvoRw
int minCost(vector<vector<int>> &costs) {
    // write your code here
    int no=costs.size();
    int col=costs[0].size();
    int dp[no][col];
    if(col==1 and no!=1)
    return -1;
    memset(dp,-1,sizeof(dp));
    int least=INT_MAX,sleast=INT_MAX;
    for(int i=0;i<col;i++)
    {
        dp[0][i]=costs[0][i];
        if(dp[0][i]<=least)
        {
            sleast=least;
            least=dp[0][i];
        }
        else if(dp[0][i]<=sleast)
        {
            sleast=dp[0][i];
        }
    }
    
    for(int i=1;i<no;i++)
    {
        int nleast=INT_MAX;
        int nsleast=INT_MAX;
        //cout<<least<<" "<<sleast<<endl;
        for(int j=0;j<col;j++)
        {
          if(least==dp[i-1][j])
          {
              dp[i][j]=costs[i][j]+sleast;
          }
          else
          {
              dp[i][j]=costs[i][j]+least;
          }
          
          if(dp[i][j]<=nleast)
          {
              nsleast=nleast;
              nleast=dp[i][j];
          }
          else if(dp[i][j]<=nsleast)
          {
              nsleast=dp[i][j];
          }
        }
        least=nleast;
        sleast=nsleast;
    
    }
    
    return least;
}