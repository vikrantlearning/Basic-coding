//binomial coefficient
int dp[n+1][r+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<r+1;j++)
            {
                if(i<j||i==0)
                {
                    dp[i][j]=0;
                }
                else if(j==0||i==j)
                {
                    dp[i][j]=1;
                }
                else if(i>j)
                {
                    if(j==1)
                   dp[i][j]=i;
                   else
                   dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%1000000007;
                 }
            }
        }
      