//0-1 Knapsack problem
int dp[n+1][W+1];
       //memset(dp,-1,sizeof(dp[0][0])*(W+1)*(n+1));
       //if(n==0||W==0)
       //return 0;
       for(int i=0;i<n+1;i++)
       {
           for(int j=0;j<W+1;j++)
           {
              if(i==0||j==0)
               dp[i][j]=0;
           }
       }
       
       //if(dp[W][n]!=-1)
        //return dp[W][n];
        /*if(wt[n-1]<=W)
       {
           return dp[W][n]=max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));
       }
       else if(wt[n-1]>W) return dp[W][n]=knapSack(W,wt,val,n-1); 
       */
       for(int i=1;i<n+1;i++)
       {
           for(int j=1;j<W+1;j++)
           {
               if(wt[i-1]<=j)
               {
                   dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
               }
               else
                dp[i][j]=dp[i-1][j];
           }
       }
       return dp[n][W];
    }