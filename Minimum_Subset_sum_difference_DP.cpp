.//Minimum subset sum Difference
	//Logic is Two subsets S1,S2 whose sum S1+S2=Array total sum
	//Ques. Find S1-S2 such that it is minimum
	//Hence We have to find minmum Array_totaL_Sum-2S1(where S1 is the smaller set)
int minSumDiff(int arr[],int n,int sum)
    {
        int dp[n+1][sum+1];
        
        for(int i=0;i<sum+1;i++)
        {
            dp[0][i]=0;
        }
        for(int i=0;i<n+1;i++)
        {
            dp[i][0]=1;
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(arr[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
                }
                else
                 dp[i][j]=dp[i-1][j];
            }
        }
       
        vector<int> v;
        int diff=INT_MAX;
        for(int j=0;j<=sum/2;j++)
        {
            if(dp[n][j])
            v.push_back(j);
        }
        int m=v.size();
        for(int i=0;i<m;i++)
        {
           diff=min(diff,abs(sum-2*v[i]));
        }
        return diff;
        
    }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        sum=sum+arr[i];
	    }
	    int ans=minSumDiff(arr,n,sum);
	    return ans;
	} 
