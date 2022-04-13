//Friends pairing problem DP
class Solution
{
    int mod=1000000007;
public:
    int countFriendsPairings(int n) 
    { 
        // code here
        long long dp[n+1]={0};
        dp[1]=1;
        dp[2]=2;
        if(n==1||n==2)
         return dp[n];
         for(int i=3;i<n+1;i++)
         {
             dp[i]=((1*dp[i-1])%mod+((i-1)*(dp[i-2])%mod)%mod)%mod
             //1*dp[i-1]-> when present element is single so 1 for it and remaining n-1 is dp[n-1]
             //n-1*dp[n-2] -> to make pair for present element we have n-1 choices, and for remaining n-2 we have dp[n-2]
         }
       return dp[n];
    }
};    