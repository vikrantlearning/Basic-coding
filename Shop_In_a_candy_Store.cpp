//Shop in a candy Store
int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    int dp[V+1];//
	    for(int i=0;i<V+1;i++)
	    {
	        dp[i]=INT_MAX;
	    }
	    dp[0]=0;
	    for(int i=1;i<V+1;i++)
	    {
	        for(int j=0;j<M;j++)
	        {
	            if(coins[j]<=i)
	            {
	                int x=dp[i-coins[j]];
	                if(x!=INT_MAX and x+1<dp[i])
	                dp[i]=x+1;
	            }
	        }
	    }
	    if(dp[V]!=INT_MAX)
	    return dp[V];
	    else
	     return -1;
	} 