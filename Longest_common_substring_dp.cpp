 //Longest common substring
 //S1 = "ABCDGH", S2 = "ACDGHR"
 //      101234-->Here if sequence is firstly continuous. If sequence gets broken the sequence will again start from 1. Eg A is present in 
 ///     S1 and S2 A COUNT 1, !B Count 0, C count 1, D Count 2 , G Count 3, H Count 4 
 int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0||j==0)
                dp[i][j]=0;
            }
        }
        int ans=0;
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(S1[i-1]==S2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                    ans=max(ans,dp[i][j]);
                }
                else
                {
                    dp[i][j]=0;
                }
            }
        }
        return ans;
    }