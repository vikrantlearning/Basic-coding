//number of susbsets of sum in a array
int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        
        int dp[n+1][sum+1];
        
        for(int j=0;j<sum+1;j++)
        dp[0][j]=0;
        for(int i=0;i<n+1;i++)
        {
            dp[i][0]=1;
        }
		for(int j=1;j<n+1;j++) {
          if(arr[j-1] != 0)
            dp[j][0] = dp[j-1][0];
          else
            {
                z++;
                dp[j][0] = pow(2,z);
            }
        }
       
        for(int i=1;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)//considering the case where array has 0 as elements for example 0 0 0 0 2 3 4 5
            {
                if(arr[i-1]<=j)
                dp[i][j]=(dp[i-1][j-arr[i-1]]+dp[i-1][j])%(1000000007);
                else
                dp[i][j]=dp[i-1][j]%(1000000007);
            }
        }
        return dp[n][sum];
        
	}